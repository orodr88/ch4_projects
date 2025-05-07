#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//insert variables needed
    float weight, miles, rate;

    cout << "What is the weight of the package?" << endl;
    cin >> weight;
//insert if statements to check if weight is valid
    if (weight <= 0 || weight > 20) {
        cout << "The weight must be greater than 0 and less than 21 kg." << endl;
    }
    cout<<"What is the distance of the package to be shipped?"<<endl;
    cin>>miles;
//insert if statements to check if miles is valid
    if (miles < 10 || miles > 3000) {
        cout << "The miles must be greater than 9 and less than 3001 miles." << endl;
    }
//insert if statements to check if weight is valid and calculate rate
    if (weight <= 2) {
        rate = (miles / 500) * 1.10;
    }
    else if (weight <= 6) {
        rate = (miles / 500) * 2.20;
    }
    else if (weight <= 10) {
        rate = (miles / 500) * 3.70;
    }
    else {
        rate = (miles / 500) * 4.80;
    }
    //this is the summary of the shipping cost
    cout << "The shipping cost is $" << fixed << setprecision(2) << rate << endl;

    return 0;

}
