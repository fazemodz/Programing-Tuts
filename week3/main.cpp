#include <iostream>
#include <string>
using namespace std;
//decleare functions
void Ex1();
void Ex2();
void Ex3();
void Ex4();
void Ex5();
void Ex6();

void Ex1() {
	int n;
	n = 6;
	cout << n << " cubed is " << n * n * n << endl;
}
void Ex2()
{
	int int1 = 20;
	int int2 = 8;
	cout << "The sum of " << int1 << " and " << int2 << " is " << int1 + int2 << endl;
}
void Ex3()
{
	cout << "15.0 pluss 2.0 equals " << (15.0 + 2.0 )<< endl;
	cout << "15.0 minus 2.0 equals " << (15.0 - 2.0) << endl;
	cout << "15.0 times 2.0 equals " << (15.0 * 2.0) << endl;
	cout << "15.0 divided by 2.0 equals " << (15.0 / 2.0)<< endl;
}
void Ex4() {
	string WarningMessage, MyName;
	MyName = "Alex ";
	WarningMessage = "a Vampire is coming. Run!";
	cout << MyName << WarningMessage << endl;
}
void Ex5() {
	float Item1, Item2, Item3, Item4;
	string LastitemName = "Calculator";
	Item1 = 10;
	Item2 = 15.5;
	Item3 = 20.99;
	Item4 = 55;
	cout << "The total amount spent is " << Item1 + Item2 + Item3 + Item4 << endl;
	cout << "The last item bought was a " << LastitemName << endl;
}
void Ex6() {
	int Celsius;
	cout << "Please enter the temp in Celsius " << endl;
	cin >> Celsius;
	cout << "The temp in Fahrenheit is " << Celsius * (212 - 32) / 100 + 32 << endl;
}
void Ex7() {
	float radius;
	cout << "Please enter the radius of the circle " << endl;
	cin >> radius;
	cout << "The area of the circle is " << 3.14 * radius * radius << endl;
	cout << "The circumference of the circle is " << 2 * 3.14 * radius << endl;

}

//question 1 = b
//question 2 = c
//question 3 = a
//question 4 = a
//question 5 = c
int main() {
	//Ex1();
	//Ex2();
	//Ex3();
	//Ex4();
	//Ex5();
	//Ex6();
	//Ex7();
	return 0;
}