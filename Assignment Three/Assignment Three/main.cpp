/*
 Esmeralda Antonio
 Assignment #3
 Compiler: Xcode
 Operating System: macOS
 10/10/22 @ 8:43 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int Coeff_A;
    int Coeff_B;
    int Coeff_C;
    double Positive_Sol;
    double Negative_Sol;
    double Real_Sol;
    double Imaginary_Sol;
    double Linear_Sol;
    int Discriminant;
    
    cout << "*****************************************************************\n";
    cout << "El Camino Quadratic Equation Solver.\n";
    cout << "*****************************************************************\n";
    cout << "This program will provide solutions for an equation of the form \n";
    cout << "Ax^2 + Bx + C = 0 \n";
    cout << "Where A, B, and C are integers, and A is not equal to zero. \n";
    cout <<"Enter a value for A [int only]: ";
    cin >> Coeff_A;
    if (Coeff_A == 0) {
        cout << "Caution! If leading coefficient is zero then you actually have a linear equation. \n";
        cout << "If you wish to solve the linear equation BX + C = 0, then please proceed. \n";
        cout << "Enter a value for B [int only]: ";
        cin >> Coeff_B;
        if (Coeff_B == 0) {
            cout << "Since A and B are zero you do not have an algebraic equation. \n";
        } else {
            cout << "Enter a value for C [int only]: ";
            cin >> Coeff_C;
            Linear_Sol = (double) (-1 * Coeff_C) / Coeff_B;
            cout.precision(4);
            cout << "Solution is X = " << scientific << Linear_Sol << endl;
            cout << "*****************************************************************\n";
            cout << "Thanks for using the El Camino Quadratic Equation Solver.\n";
            cout << "*****************************************************************\n";
        }
    } else {
        cout << "Enter a value for B [int only]: ";
        cin >> Coeff_B;
        cout << "Enter a value for C [int only]: ";
        cin >> Coeff_C;
        
        Discriminant = sqrt((Coeff_B*Coeff_B) - (4*Coeff_A*Coeff_C));
        Positive_Sol = (double) ((-1*Coeff_B) + sqrt((Coeff_B*Coeff_B) - (4*Coeff_A*Coeff_C))) / (2*Coeff_A);
        Negative_Sol = (double) ((-1*Coeff_B) - sqrt((Coeff_B*Coeff_B) - (4*Coeff_A*Coeff_C))) / (2*Coeff_A);
        Real_Sol = (double) (-1*Coeff_B) / (2*Coeff_A);
        Imaginary_Sol = (sqrt(abs((Coeff_B*Coeff_B) - (4*Coeff_A*Coeff_C)))) / (2*Coeff_A);
        
        if (Discriminant > 0) {
            cout.precision(4);
            cout << "The two REAL solutions are: X = " << scientific << Positive_Sol << "\n";
            cout.width(31);
            cout << "And  X = " << scientific << Negative_Sol << "\n";
            cout << "*****************************************************************\n";
            cout << "Thanks for using the El Camino Quadratic Equation Solver.\n";
            cout << "*****************************************************************\n";
        } else if  (Discriminant < 0){
            if (Real_Sol == 0) {
                cout.precision(4);
                cout << "The two IMAGINARY solutions are: X =  " << scientific << "(" << Imaginary_Sol << ")*I \n";
                cout.width(35);
                cout << "And X = " << scientific << " - (" << Imaginary_Sol << ")*I \n";
                cout << "*****************************************************************\n";
                cout << "Thanks for using the El Camino Quadratic Equation Solver.\n";
                cout << "*****************************************************************\n";
            } else {
                cout.precision(4);
                cout << "The two IMAGINARY solutions are: X =  " << scientific << Real_Sol << " + (" << Imaginary_Sol << ")*I \n";
                cout.width(38);
                cout << "And X = " << scientific << Real_Sol << " - (" << Imaginary_Sol << ")*I \n";
                cout << "*****************************************************************\n";
                cout << "Thanks for using the El Camino Quadratic Equation Solver.\n";
                cout << "*****************************************************************\n";
            }
        } else {
            cout.precision(4);
            cout << "The one REAL solution is: X = " << scientific << Positive_Sol << "\n";
            cout << "*****************************************************************\n";
            cout << "Thanks for using the El Camino Quadratic Equation Solver.\n";
            cout << "*****************************************************************\n";
        }
    }
}
