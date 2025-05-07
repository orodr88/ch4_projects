#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()

{
  int month, year;
//variables for month and year
  cout<<"Enter month (1-12): ";
  cin>>month;
  cout<<"Enter a year: ";
  cin>>year;
//distinguishes between months with 31 days, 30 days, and February
  switch(month) {
    case 1:
    case 3:  
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      cout<<"This month in "<<year<<" is 31 days long";
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      cout<<"This month in "<<year<<" is 30 days long";
      break;
      //distinguishes between leap years and non-leap years
    case 2:
      if (year % 100 == 0)
      {
      if (year % 400 == 0)
        cout<<"This month in "<<year<< " is 29 days long";
      else
        cout<<"This month in " <<year<< "is 28 days long";
        }
      else if (year % 100 != 0)
      {if (year % 4 == 0)
        cout<<"This month in "<<year<<" is 29 days long";
      else
        cout<<"This month in "<<year<<" is 28 days long";
      }
      break;
//if the user inputs an invalid month, the program will let the user know that they need to use a number between 1 and 12
    default:
      cout<<"Invalid month, try using a number between 1 and 12";
  }
  return 0;
}
