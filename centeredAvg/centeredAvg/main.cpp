//
//  main.cpp
//  centeredAvg
//
//  Created by Esmeralda Aquino on 10/19/22.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool containsOnlyDigits(string s)
{
    for (int k = 0; k != s.size(); k++)
    {
        if ( ! isdigit(s[k]))
            return false;
    }
}

int main()
{
    if (containsOnlyDigits("314159"))
        cout << "x" << endl;
    if ( ! containsOnlyDigits("3I4IS9"))
        cout << "y" << endl;
}
