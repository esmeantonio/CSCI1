// Esmeralda Antonio
// CS 1
// Lab 4, Program 2
// Perfect Number Finder

#include <iostream>
#include <iomanip>
using namespace std;


bool isAFactor (int a, int b) {
    
    return (a % b == 0);
}


int main() {

    int startval;
    int endval;
    int perfectCounter = 0;
    
    cout << "Please enter a starting value: ";
    cin >> startval;
    cout << "Please enter an ending value: ";
    cin >> endval;
    cout << endl;
    int sum = 0;
    for (int i = startval + 1; i < endval; i++) {
        //cout << i << "  sum: " << sum << endl;
        for (int j = 1; j < i; j++) {
            if (isAFactor(i, j)) {
                sum += j;
                //cout << i << "| factor: " << j << "  sum: " << sum << endl;
            
                }
            }
        if (sum == i) {
            cout << i << " is a perfect number."<< endl;
            sum = 0;
            perfectCounter += 1;
        } else {
            sum = 0;
        }
        }
    if (perfectCounter == 0) {
        cout << "No perfect number found between " << startval << " and " << endval << endl;
    }
    return 0;
}
