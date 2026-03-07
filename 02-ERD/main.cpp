#include "stdafx.h"
#include <string>
#include <conio.h>
#include <iostream>

using namespace std;

class spisok
{
    struct element
    {
        string number;          //Номер автобуса
        string driver;          //Водитель
        string route;           //Маршрут
        bool deport;            //Признак того, где находится автобус (в автопарке или на маршруте)        
        element* next;          //Указатель на следующий элемент списка
        element* prev;          //Указатель на предыдущий элемент списка
        element* head;          //Указатель на первый элемент списка
        element* tail;          //Указатель на последний элемент списка


        element() : number(0), driver(0), route(0), next(0), prev(0), head(NULL), tail(NULL)
        {
        }
    }

    *bus;

public:
    string get_number() { return bus->number; }
    string get_route() { return bus->route; }
    string get_driver() { return bus->driver; }
    bool get_deport() { return bus->deport; }

    element& operator [] (int index)                        //Перегрузка оператора индексирования
    {
        return bus[index];
    }

    element operator = (element* current)                   //Перегрузка оператора присваивания
    {
        return element(bus->number = current->number,
            bus->driver = current->driver,
            bus->route = current->route,
            bus->deport = current->deport,
            bus->next = current->next,
            bus->prev = current->prev);
    }
    spisok() : bus(0) {}//конструктор по умолчанию класса spisok

    element* new_bus(string num, string dr, string r)
    {
        bus = new element();
        bus->number = num;
        bus->driver = dr;
        bus->route = r;
        bus->prev = bus->tail;
        bus->next = NULL;
        if (bus->tail != NULL)
            bus->tail->next = bus;
        if (bus->head == NULL)
            bus->head = bus;
        bus->tail = bus;
        return bus;
    }

    void print()                //ф-ция печати
    {
        element* E = bus;

        while (E
            {
                cout << E->number
                    << "\t" << E->driver
                    << "\t" << E->route;
                E = E->next;
            }
        cout << "\n";
    }

    void search(string par_search)//ф-ция поиска. содержит par_search, к-ый определяет что искать
    {
        element* E = bus;
        if (bus == 0)//если список пуст, то ничего не ищется, выход из программы
            return;

        while (E)//сам цикл поиска
        {
            if (par_search == E->number)//если par_search, к-ый мы ввели, совпадает с номером автобуса в списке
            {
                cout << "\n" << bus->number //то распечатывает
                    << "\t" << bus->driver
                    << "\t" << bus->route
                    << "\n";
                break;
            }
            E = E->next;//проверяет следующий элемент списка
        }
    }

    void in_deport() { bus->deport = false; }
    void on_route() { bus->deport = true; }

    void delete_spisok()//
    {
        if (bus == 0)//если список пуст, то ничего не удаляется, выход из программы
            return;
        element* E = bus;//в противном случае идет удаление
        bus = bus->next;
        delete E;
    }

    ~spisok()//деструктор 
    {
        while (bus)
            delete_spisok();
    }
};


void main()
{
    spisok bus[100];
    string number;
    string route;
    string driver;
    string number_build;
    string index;
    int i, q = 0;
    int size = 0;
    string par_search;
    int num;

    int CV = 0;
    while (CV != 5)
    {
        cout << endl << "Menu: \n"
            << "1. New bus \n"
            << "2. Show spisok \n"
            << "3. Delete bus \n"
            << "4. Search bus\n"
            << "5. Exit \n"
            << "Input number menu:  ";

        cin >> CV;
        switch (CV)
        {
        case 1:
        {
            cout << " Name number: "; cin >> number;
            cout << " driver: ";      cin >> driver;
            cout << " route: ";       cin >> route;

            bus[q].new_bus(number, driver, route);
            q++;
            size = q;
        }  break;

        case 2:
        {
            for (i = 0; i < size; i++)
                bus[i].print();//вызывается ф-ция печати
        }  break;

        case 3:
        {
            cout << "\nVvedite nomer:";//вводится номер записи которую надо удалить
            cin >> i;
            bus[i].delete_spisok();//вызывается ф-ция удаления записи
        }  break;

        case 4:
        {
            cout << "\nEnter number bus: ";
            cin >> par_search;//вводится параметр поиска, т.е. номер автобуса
            for (int i = 0; i < size; i++)
                bus[i].search(par_search);//вызывается ф-ция поиска
        }  break;

        case 5:  break;

        default: cout << endl << "Enter right number!\n"; break;
        }

        _getch();
    }
}