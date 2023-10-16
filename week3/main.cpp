// Include necessary libraries
#include <iostream>
#include <string>

// Use the standard namespace to avoid prepending std:: to common functions
using namespace std;

// Function declarations
void Ex1(); // Calculates and displays the cube of a number
void Ex2(); // Calculates and displays the sum of two integers
void Ex3(); // Demonstrates basic arithmetic operations with floats
void Ex4(); // Constructs and displays a string message
void Ex5(); // Calculates and displays the total of 4 items and the name of the last item
void Ex6(); // Converts Celsius temperature to Fahrenheit and displays it
void Ex7(); // Calculates and displays the area and circumference of a circle

void Ex1() {
    int n;
    n = 6;
    // Display the cube of n
    cout << n << " cubed is " << n * n * n << endl;
}

void Ex2() {
    int int1 = 20;
    int int2 = 8;
    // Display the sum of int1 and int2
    cout << "The sum of " << int1 << " and " << int2 << " is " << int1 + int2 << endl;
}

void Ex3() {
    // Display results of basic arithmetic operations
    cout << "15.0 plus 2.0 equals " << (15.0 + 2.0) << endl;
    cout << "15.0 minus 2.0 equals " << (15.0 - 2.0) << endl;
    cout << "15.0 times 2.0 equals " << (15.0 * 2.0) << endl;
    cout << "15.0 divided by 2.0 equals " << (15.0 / 2.0) << endl;
}

void Ex4() {
    string WarningMessage, MyName;
    MyName = "Alex ";
    WarningMessage = "a Vampire is coming. Run!";
    // Display the concatenated message
    cout << MyName << WarningMessage << endl;
}

void Ex5() {
    float Item1, Item2, Item3, Item4;
    string LastitemName = "Calculator";
    Item1 = 10;
    Item2 = 15.5;
    Item3 = 20.99;
    Item4 = 55;
    // Display the total amount spent and the name of the last item
    cout << "The total amount spent is " << Item1 + Item2 + Item3 + Item4 << endl;
    cout << "The last item bought was a " << LastitemName << endl;
}

void Ex6() {
    int Celsius;
    cout << "Please enter the temp in Celsius " << endl;
    cin >> Celsius;
    // Convert Celsius to Fahrenheit and display it
    cout << "The temp in Fahrenheit is " << Celsius * (212 - 32) / 100 + 32 << endl;
}

void Ex7() {
    float radius;
    cout << "Please enter the radius of the circle " << endl;
    cin >> radius;
    // Calculate and display the area and circumference of the circle
    cout << "The area of the circle is " << 3.14 * radius * radius << endl;
    cout << "The circumference of the circle is " << 2 * 3.14 * radius << endl;
}

int main() {
    // Uncomment the function call you want to run
    // Ex1();
    // Ex2();
    // Ex3();
    // Ex4();
    // Ex5();
    // Ex6();
    Ex7(); // Running Ex7 by default

    return 0; // Return 0 indicating successful program termination
}
