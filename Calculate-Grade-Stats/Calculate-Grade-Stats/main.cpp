//  Calculate-Grade-Stats


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global constants
const int N = 50;           //max class capacity

//Prototypes (Function Headers)
int  getData(int grades[], int n);
void calculateStats(int grades[], int actualSize, int& maxGrade, int& minGrade, double& avgGrade);
void showResults(int grades[], int actualSize, int maxGrade, int minGrade, double avgGrade);
void calculateStandardDev(int grades[], int actualSize, double avgGrade, double& std);

int main()
{
    //Variable Declarations
    int grades[N]{};
    int maxGrade, minGrade, actualSize;
    double avgGrade, std;

    actualSize = getData(grades, N);
    calculateStats(grades, actualSize, maxGrade, minGrade, avgGrade);
    showResults(grades, actualSize, maxGrade, minGrade, avgGrade);
    calculateStandardDev(grades, actualSize, avgGrade, std);

}

//-----------------------------------------------------------
//User-defined functions

int getData(int grades[], int n)
{
    int actualSize = 0;

    do
    {
        cout << "Enter class size [no more than " << N << "]: ";
        cin >> actualSize;
        if (actualSize > N)
            cout << "Error - too many students - try again\n";
        else
            break;
    } while (true);

    for (int i = 0; i < actualSize; i++)
    {
        cout << "Enter grade-" << (i + 1) << ": ";
        cin >> grades[i];
    }

    return actualSize;
}

//------------------------------------------------------------
void calculateStats(int grades[], int actualSize, int& maxGrade, int& minGrade, double& avgGrade)
{
    //TODO...
    maxGrade = grades[0];
    minGrade = grades[0];
    double sum = grades[0];
    for (int i = 1; i < actualSize; i++) {
        sum += grades[i];
        if (grades[i] > maxGrade)
            maxGrade = grades[i];
        if (grades[i] < minGrade)
            minGrade = grades[i];
    }
    if (avgGrade == 0)
        avgGrade = 0;
    avgGrade = sum / actualSize;
}

//-----------------------------------------------------------
void showResults(int grades[], int actualSize, int maxGrade, int minGrade, double avgGrade)
{
    //TODO...
    
}

//-----------------------------------------------------------
void calculateStandardDev(int grades[], int actualSize, double avgGrade, double& std)
{
    //TODO...
    double sum = 0;
    for(int i = 0; i < actualSize; i++) {
        sum += pow((grades[i] - avgGrade), 2);
    }
    std = sqrt(sum / actualSize);
}

