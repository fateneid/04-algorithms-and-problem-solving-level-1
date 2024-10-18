#pragma once

#include <iostream>
using namespace std;

namespace P12_MaxOf2Numbers {

    void ReadNumbers(int& Num1, int& Num2) {

        cout << "PLease enter number 1?" << endl;
        cin >> Num1;
        cout << "PLease enter number 2?" << endl;
        cin >> Num2;
    }

    int MaxOf2Numbers(int Num1, int Num2) {
        if (Num1 > Num2)
            return Num1;
        else
            return Num2;

    }

    void PrintResult(int max) {
        cout << "The max of the two numbers is: " << max << endl;
    }

    void Task()
    {
        int Num1, Num2;
        ReadNumbers(Num1, Num2);
        PrintResult(MaxOf2Numbers(Num1, Num2));

    }

}


