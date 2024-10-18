#pragma once

#include <iostream>
using namespace std;

namespace P03_OddOrEven {

    enum enNumberType { Odd = 1, Even = 2 };

    int ReadNum() {
        int Num;
        cout << "Please enter a number?" << endl;
        cin >> Num;
        return Num;
    }

    enNumberType CheckNumberType(int Num) {
        int result = Num % 2;
        if (result == 0) {
            return enNumberType::Even;
        }
        else {
            return enNumberType::Odd;
        }
    }

    void PrintNumberType(enNumberType NumberType) {
        if (NumberType == enNumberType::Even)
            cout << "\n Number is Even.\n";
        else
            cout << "\n Number is Odd.\n";
    }

    void Task()
    {
        PrintNumberType(CheckNumberType(ReadNum()));

    }

}

