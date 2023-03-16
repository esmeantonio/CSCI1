/*
 Esmeralda Antonio
 CS 1, Section #100
 Assignment #5, Problem #2
 Movie Theater Tickets
 Create a 2D array representing seating at a theater.
 Give the user the option to sell one ticket at a time,
 each at a price based on a text file. Update the 2D
 array everytime a ticket is sold and when user is
 finished selling, print out updated seating chart
 (2D array), # of tickets sold, and total revenue.
*/



#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;

//GLOBAL CONSTANTS
int Rows = 15;
int Seats = 20;


//PROTOTYPES
void showSeats(string c[][20]);
/*void showSeats(string c[][20])
 {
     cout << "Seats:  ";
     for (int k = 0; k < Seats; k++) {
         cout << k << "  ";
     }
     cout << endl;
     for (int m = 0; m < Rows; m++) {
         cout << "Row " << setw(2) << right << m << "  ";
         for (int n = 0; n < Seats; n++) {
             if (n >= 10) {
                 cout << setw(2) << right << c[m][n] << "  ";
             } else {
                 cout << setw(1) << right << c[m][n] << "  ";
             }
         }
         cout << endl;
     }
 }*/
void readPrices(string fileName, double prices[], int size);


int main() {
    
    //VARIABLES
    string seating_Chart[15][20];
    double ticketPrices[Rows];
    int ticketsSold = 0;
    double totalRevenue = 0.00;
    int userChoice;
    int userRow;
    int userSeat;
    
    //Initialiizes all seats to AVAILABLE
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Seats; j++) {
            seating_Chart[i][j] = "*";
        }
    }
    
    //Stores ticket prices per row in a 1D array
    readPrices("/Users/esmeraldaaquino/CS1/prices.txt", ticketPrices, Rows);
    /*for (int l = 0; l < Rows; l++)
    {
        cout << ticketPrices[l] << " ";
    }
    cout << endl;*/
    
    do {
        cout << endl;
        cout << "* Seats Available" << endl;
        cout << "# Reserved Seats" << endl;
        //PRINT SEATING CHART
        showSeats(seating_Chart);
        cout << endl;
        cout << "Menu: " << endl;
        cout << "1) Buy ticket" << endl;
        cout << "2) Total sell and exit" << endl;
        cout << endl;
        cout << "Enter your choice : ";
        cin >> userChoice;
        if (userChoice == 1) {
            cout << endl;
            cout << "Enter row: ";
            cin >> userRow;
            //cout << endl;
            cout << "Enter seat: ";
            cin >> userSeat;
            if (seating_Chart[userRow][userSeat] == "#" || userRow > 14 || userRow < 0 || userSeat < 0 || userSeat > 19) {
                cout << "Invalid seat choice" << endl;
            } else {
                seating_Chart[userRow][userSeat] = "#";
                ticketsSold += 1;
                totalRevenue += ticketPrices[userRow];
                //cout << endl;
            }
        } else if (userChoice == 2) {
            cout << endl;
            cout << "UPDATED SEATING CHART AND SALES INFO:" << endl;
            cout << endl;
            //PRINT SEATING CHART
            showSeats(seating_Chart);
            cout << endl;
            cout << "TOTAL TICKETS SOLD: " << ticketsSold << endl;
            cout << "TOTAL REVENUE: $ " << fixed << setprecision(2) << totalRevenue << endl;
            exit (1);
        } else {
            cout << "Invalid choice" << endl;
        }
    } while(true);
    
    return 0;
}



void showSeats(string c[][20])
 {
    /*
    //Prints SEATING CHART (Use for showSeats func)
    
    cout << "Seats:  ";
    for (int k = 0; k < Seats; k++) {
        cout << k << "  ";
    }
    cout << endl;
    for (int m = 0; m < Rows; m++) {
        cout << "Row " << setw(2) << right << m << "  ";
        for (int n = 0; n < Seats; n++) {
            if (n >= 10) {
                cout << setw(2) << right << seating_Chart[m][n] << "  ";
            } else {
                cout << setw(1) << right << seating_Chart[m][n] << "  ";
            }
        }
        cout << endl;
    }
*/
     cout << "Seats:  ";
     for (int k = 0; k < Seats; k++) {
         cout << k << "  ";
     }
     cout << endl;
     for (int m = 0; m < Rows; m++) {
         cout << "Row " << setw(2) << right << m << "  ";
         for (int n = 0; n < Seats; n++) {
             if (n >= 10) {
                 cout << setw(2) << right << c[m][n] << "  ";
             } else {
                 cout << setw(1) << right << c[m][n] << "  ";
             }
         }
         cout << endl;
     }
 }


/*
void readPrices(...) {
 * should read ticket price of each row from an input file called "prices.txt"
 * ticket price for each row should be stored in a 1D array
 */
 void readPrices(string fileName, double prices[], int size)
 {
     ifstream infile(fileName);
     if (!infile)
     {
         cout << "Error - file not found: " << fileName << endl;
         exit(2);
     }
     double price;
     for (int i = 0; i < Rows; i++)
     {
         infile >> price;
         prices[i] = price;
     }
     infile.close();
 }
