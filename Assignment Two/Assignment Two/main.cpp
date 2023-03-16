/*
 Esmeralda Antonio
 Assignment #2
 Compiler: Xcode
 Operating System: macOS
 09/21/22 @ 9:30 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double Principal;
    double AnnualRate;
    int YearlyCompound;
    int YearsLeft;
    int TotalDollars;
    int TotalCents;
    int RoundedCents;
    double TotalAccumulation;
    
    cout << "This program calculates the total accumulation in your account after a certain number of years.";
    cout << "Please input the initial deposit, or principal, in your account. \n";
    cin >> Principal;
    cout << "Please input the annual interest rate as a DECIMALIZED FRACTION \n";
    cin >> AnnualRate;
    cout << "Please input th number of times the compounding is done per year. \n";
    cin >> YearlyCompound;
    cout << "Please input the number of years your principal has been left in deposit. \n";
    cin >> YearsLeft;
    TotalAccumulation = Principal * pow(1 + (AnnualRate/YearlyCompound), YearsLeft*YearlyCompound);
    RoundedCents = int ((TotalAccumulation*100) + 0.5);
    TotalDollars = RoundedCents/100;
    TotalCents = RoundedCents % 100;
    cout << "Your accumulation is: " << TotalDollars << " dollars and " << TotalCents << " cents. \n";
}
