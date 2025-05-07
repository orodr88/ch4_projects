#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
//this is where the program asks for the user's choice
    int choice;
    const float pi = 3.14159;

    cout << "Geometry Calculator " << endl <<
            "1. Calculate the Area of a Circle " << endl <<
            "2. Calculate the Area of a Rectangle " << endl <<
            "3. Calculate the Area of a Triangle " << endl <<
            "4. Quit " << endl <<
            "Enter your choice (1-4): " << endl;

    cin >> choice;
//this is where the switch statement is used to determine what the user wants to do
    switch(choice) {
//this is where the program calculates the area of a circle
        case 1: 

            double area, radius;

            cout << "This program calculates the area of a circle.\n";
            cout << "What is the radius of the circle? ";
            cin >> radius;

            if (radius > 0) {
                area = pi * pow(radius, 2.0);
                cout << "The area is " << area << endl;
            }
            else {
                cout << "Error: Negative Value" << endl;
            }

        break; 
//this is where the program calculates the area of a rectangle
        case 2: 

            int length, width, area2;

            cout << "This program calculates the area of a ";
            cout << "rectangle.\n";
            cout << "Enter the length and width of the rectangle ";
            cout << "separated by a space.\n";

            cin >> length >> width; //hi

            if (length > 0 && width > 0) {
                area2 = length * width;
                cout << "The area of the rectangle is " << area2 << endl;   
            }
            else {
                cout << "Error: Negative Value" << endl;
            }

        break;
//this is where the program calculates the area of a triangle
        case 3: 

            int base, height, area3;

            cout << "This program calculates the area of a ";
            cout << "triangle.\n";
            cout << "Enter the base and height of the triangle ";
            cout << "separated by a space.\n";

            cin >> base >> height;

            if (base > 0 && height > 0) {
                area3 = base * height * 0.5;
                cout << "The area of the triangle is " << area3 << endl;   
            }
            else {
                cout << "Error: Negative Value" << endl;
            }

        break;
//this is where the program ends if the user chooses to quit
        case 4:
            cout << "End" << endl;        
        break;
//this is where the program tells the user that they have entered an invalid input
        default: 
            cout << "Error: Invalid Input" << endl;
        break;

    }

    return 0;
}
