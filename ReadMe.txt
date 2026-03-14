https://github.com/okovtun/PV_522_DBMS.git
https://www.youtube.com/playlist?list=PLeqyOOqxeiINquFKFDpRBEMvNCqlgSxii

MIL-STD-810

Stored Procedure
CREATE PROCEDURE	sp_ProcedureName	@parameter_1 AS TYPE, @parameter_2 AS TYPE, .... @parameter_N AS TYPE
AS
BEGIN
	.....
	GROUP OF STATEMENTS .....
	.....
END

ALTER PROCEDURE

TODO:
0. Сделать резервную копию Базы;
1. Выставить расписание на Базовый семестр по схеме 12-21;
2. * Наша процедура выставляет расписание только на вторник, четверг и субботу, но есть группы,
     которые занимаются по другим дням, например: 
		Пн.,Ср.,Пт;
		Вт.,Чт.;
		Вт.,Чт.,Пт;
		Пн.,Пт.;
3. При выставлении расписания предусмотреть каникулы и праздничные дни;


int a;
int b = 3;
int c = a + b;

a + b + c;

a = b = c = 0;

Transact-SQL:
1. https://learn.microsoft.com/en-us/sql/t-sql/statements/create-database-transact-sql?view=sql-server-ver17&tabs=sqlpool
   https://learn.microsoft.com/en-us/sql/t-sql/statements/create-database-transact-sql?view=sql-server-ver17&tabs=sqlpool#:~:text=the%20SIZE%20parameter.-,SQL,-Copy

TODO:
1. Заполнить расписание для своей группы с первого дня обучения до текущей дисциплины;

DONE:
1. Вывести содежимое таблицы 'Disciplines';
2. Для выбранного преподавателя вывести все дисциплины, которые он может вести;
3. Для выбранной дисциплины выбрать всех преподавателей, которые могут ее вести;
4. *Для выбранного преподавателя подсчитать количество дисциплин, которые он может вести;
5. *Для выбранной дисциплины подсчитать количество преподвателей, которые могут ее вести;

DONE:
1. Какого типа выбрать первичный ключ для таблицы 'Orders' (Заказы) в службе такси или службе доставки?

DONE:
1. В проект 'DDL' добавить запрос 'SQLQuery4-CREATE Schadule branch', и в нем добить Базу, а именно,
   таблицы Schedule, Grades и HomeWorks. Подумать над таблицами HWResults и Exams;
2. В проект 'DDL' добавить запрос 'SQLQuery5-ALL_IN_ONE', который полностью создает Базу Данных 
   'PV_522_ALL_IN_ONE', начиная от CREATE DATABASE, и заканчивая последней таблицей;
3. В ДЗ прислать файл 'SQLQuery5-ALL_IN_ONE';

DONE:
1. Создать таблицы 'Students' и 'Teachers';

DONE:
1. Добить Базу;
2. Прислать ERD Базы с сервера;

DONE:
0. Пока учим теорию;
1. https://www.ixbt.com/cpu/cpu-digest-2009.shtml
2. https://learn.microsoft.com/en-us/sql/t-sql/data-types/data-types-transact-sql?view=sql-server-ver17
3. Почитать про IEEE-754: 
	http://www.softelectro.ru/ieee754.html
	https://github.com/okovtun/PV_522_DBMS/blob/master/03-DataTypes/IEEE_2008.pdf
4. Почить про системы счисления:
	https://github.com/okovtun/PV_522_DBMS/blob/master/Error.png	!!!
	https://github.com/okovtun/PV_522_DBMS/blob/master/NumericSystems.pdf
5. В чем разница между Юлианским и Григорианским календарями;
6. В чем разница между GMT и UTC;
7. На сколько градусов поворачивается Земля за 1 час;

DONE:
1. Предумиотреть посещаемость студентов;
2. В Базе должна храниться информация о домашних заданиях,
   и результатах их выполнения;

VP:https://www.visual-paradigm.com/download/community.jsp

PascalCaseStyle
CamelCaseStyle
smallCamelCaseStyle
BigCamelCaseStyle
snake_case_style