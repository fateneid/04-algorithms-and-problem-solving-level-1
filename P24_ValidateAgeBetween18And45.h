#pragma once

#include <iostream>
using namespace std;

namespace P24_ValidateAgeBetween18And45 {

    int ReadAge() {
        int Age;
        cout << "Please enter your Age?" << endl;
        cin >> Age;
        return Age;
    }

    bool ValidateNumberInRange(int Number, int From, int To) {
        return(Number >= From && Number <= To);
    }

    void PrintResult(int Age) {
        if (ValidateNumberInRange(Age, 18, 45))
            cout << Age << " is a valid age\n";
        else
            cout << Age << " is an invalid age\n";

    }

    void Task()
    {
        PrintResult(ReadAge());

    }

}

