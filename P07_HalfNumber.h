#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace P07_HalfNumber {

    int ReadNumber() {

        int num;
        cout << "Please enter a number?" << endl;
        cin >> num;
        return num;
    }

    float CalculateHalfNumber(int Num) {
        return (float)Num / 2;
    }

    void PrintResult(int Num) {
        string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
        cout << endl << Result << endl;
    }

    void Task()
    {
        PrintResult(ReadNumber());

    }
}



