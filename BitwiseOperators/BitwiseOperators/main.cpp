//#include <iostream>
//using namespace std;
//
//void binarySwap(int a, int b)
//{
//	cout << "Before\n" << "a: " << a << "\tb: " << b << endl;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	cout << "After\n" << "a: " << a << "\tb: " << b << endl;
//}
//
//void transfer(int a) {
//	int arr[32] = {};
//	int i = 0;
//	int before = a;
//	cout << a << " = ";
//
//	/*while (a > 0) {
//		arr[i] = a % 2;
//		a = a / 2;
//		i++;
//	}*/
//	for (; before; before /= 2)arr[i++] = before % 2;
//	for (--i; i >= 0; i--) {
//		cout << arr[i];
//		if (i % 4 == 0)cout << " ";
//		if (i % 8 == 0)cout << " ";
//	}
//
//	int decimal = 0;
//	int degree = 1;
//
//	for (int j = 0; j < i; j++) {
//		decimal += arr[j] * degree;
//		degree *= 2;
//	}
//	cout << " = " << decimal;
//
//	cout << endl;
//}
//
//int main()
//{
//	cout << "Part 1:\n";
//	binarySwap(1, 2);
//	cout << "\nPart 2:\n";
//	transfer(365);
//	transfer(555);
//	transfer(777);
//	transfer(1238);
//	cout << "\n------------------------------\n";
//	cout << 1024 * 32 << " arifmetic\n";
//	cout << (1024 << int(sqrt(32))) << " binary\n";
//}


#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	uint8_t a = 0b00001000;
	uint8_t b = 0b00000100;

	cout << "START::::::::::::::::::::\n\n";
	cout << "a = " << int(a) << " OR " << bitset<8>(a) << '\n';
	cout << "b = " << int(b) << " OR " << bitset<8>(b) << "\n\n";

	void(*lazy_developer)(const char*, const uint8_t &, const uint8_t &) = [](const char* str, const uint8_t& a, const uint8_t& b)
	{
		cout << str << bitset<8>(a xor b) << " = " << bitset<8>(a) << " XOR " << bitset<8>(b) << '\n';
	};

	lazy_developer("a = ", a, b);
	a = a xor b;

	lazy_developer("b = ", a, b);
	b = a xor b;

	lazy_developer("a = ", a, b);
	a = a xor b;

	cout << "\n\nRESULT::::::::::::::::::::\n\n";
	cout << "a = " << int(a) << " OR " << bitset<8>(a) << '\n';
	cout << "b = " << int(b) << " OR " << bitset<8>(b) << '\n';

	system("pause");

	return 0;
}