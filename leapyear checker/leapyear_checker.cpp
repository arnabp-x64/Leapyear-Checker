// leapyear_checker.cpp
// This program checks if a given year is a leap year or not.
//it uses the C++23 language standard.
//importing necessary libraries
#include<iostream>
#include <string>
#include <limits>
//namespace declaration
using namespace std;
//main function
//This is the entry point of the program
int main(){
    // Output a welcome message
    cout<<"Hello World"<<endl;
    cout<<"This is a Leapyear checker"<<endl;
    // Declare a variable to hold the year input
    int YEAR;
    // Prompt the user to enter a year
    cout<<"Enter a year: ";
    // Read the year from standard input
    // Using cin to read an integer input
    cin>>YEAR;
    // Clear the input buffer
    // This is necessary to avoid issues with getline after cin
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Output the year entered by the user
    cout<<"You entered: "<<YEAR<<endl;
    // Check if the year is a leap year
    // A year is a leap year if it is divisible by 4,
    if((YEAR%4==0 && YEAR%100!=0) || (YEAR%400==0)){
        cout<<YEAR<<" is a Leapyear"<<endl;
    }
    // except for years that are divisible by 100 but not by 400.
    else{
        cout<<YEAR<<" is not a Leapyear"<<endl;
    }
    // Wait for user input before exiting
    // This allows the user to see the output before the program closes
    cout << "Press enter to exit...";
    string s;
    getline(cin, s);
    return 0;
}