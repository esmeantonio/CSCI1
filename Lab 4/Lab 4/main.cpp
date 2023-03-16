 // Esmeralda Antonio
// CS 1
// Lab 4, Program 1
// Farenheit and Celsius Converter

#include <iostream>
#include <iomanip>
using namespace std;


double calcCelsius (double c) {
    c = (5.0 / 9.0) * (c - 32.0);
    return c;
}

double calcFahrenheit (double f) {
    f = ((9.0 / 5.0) * f) + 32.0;
    return f;
}


int main() {
    
    int choice;
    double start_temp;
    double end_temp;
    double temp_incr;
    
    cout << "1. Convert F to C \n";
    cout << "2. Convert C to F \n";
    cout << "What is your choice? ";
    cin >> choice;
    cout << endl;
    cout << "Starting Temperature: ";
    cin >> start_temp;
    cout << "Ending Temperature: ";
    cin >> end_temp;
    cout << "Temperature Increase: ";
    cin >> temp_incr;
    cout << endl;
    if (choice == 1) {
        cout << "  " << "Fahrenheit" << " \t" << " \t" << "Celsius" << "\n";
        cout << "  ---------- \t\t-------" << endl;
        for (double x = start_temp; x <= end_temp; x = x + temp_incr) {
            cout << setw(10) << right << fixed << setprecision(1) << x << "\t\t\t" << setw(5) << right << calcCelsius(x) << "\n";
        }
    } else {
        cout << "  " << "Celsius" << " \t" << " \t" << "Fahrenheit" << "\n";
        cout << "  ------- \t\t---------- " << endl;
        for (double y = start_temp; y <= end_temp; y = y + temp_incr) {
            cout << setw(7) << right << fixed << setprecision(1) << y << "\t\t\t" << setw(8) << right << calcFahrenheit(y) << "\n";
        }
    }
}
