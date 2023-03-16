/*
 Esmeralda Antonio
 Assignment #1
 Compiler: Xcode
 Operating System: macOS
 Wednesday, September 14, 2022 @ 9:04 AM
 */

#include <iostream>
using namespace std;

int main() {
    //Declare Weight as double
    double Weight;
    //Declare Height as double
    double Height;
    //Declare Age as int
    int Age;
    //Declare ActivityIndex as double
    double ActivityIndex;
    //Declare MetabolicRate as double
    double MetabolicRate;
    //Declare CaloriesBurnt as double
    double CaloriesBurnt;
    
    cout << "This program calculates the amount of calories you burned today. \n";
    cout << "Please enter your weight in pounds and then press [ENTER]: ";
    cin >> Weight;
    cout << "Please enter your height in feet and then press [ENTER]: ";
    cin >> Height;
    cout << "Please enter your age in years and then press [ENTER]: ";
    cin >> Age;
    cout << "Please enter a number from the list that best describes your lifestyle. \n";
    cout << "Little or no exercise, desk job | 1.2 \n"
    "Light exercise 1-3 times a week | 1.375 \n"
    "Exercise 3-5 times a week | 1.55 \n"
    "Exercise 6-7 times a week | 1.725 \n"
    "Excercise 2 times a day, several days | 1.9 \n";
    cin >> ActivityIndex;
    //Calculates Person's Metabolic Rate
    MetabolicRate = 66 + 6.2*Weight + 152.4*Height - 6.8*Age;
    //Calculates Person's calories burned in a day
    CaloriesBurnt = MetabolicRate * ActivityIndex;
    cout << "************************************************** \n"
    "Here are your results based on our calculations. \n"
    "************************************************** \n";
    cout << "You burn " << CaloriesBurnt << " calories on a daily basis. \n"
    "If your calorie intake is more than this number, \n"
    "then you may wish to incorporate more exercises into your daily life. \n"
    "Alternatively you may wish to cut down on your daily calorie intake. \n";
    cout << "************************************************** \n"
    "Here are the calories in some popular foods: \n"
    "1 doughnut has about 250-300 calories. \n"
    "1 butter croissant has about 272 calories. \n"
    "1 slice of cheesecake has about 260 calories. \n"
    "1 Danish pastry has about 353 calories. \n"
    "1 bagel has about 156 calories. \n"
    "************************************************** \n"
    "Thank you for using the El Camino College calorie calculation program. \n";
}
