#pragma once

#include <iostream>
using namespace std;

namespace P25_ReadUntilAgeBetween18And45 {

    int ReadAge() {
        int Age;
        cout << "Please enter your Age?" << endl;
        cin >> Age;
        return Age;
    }

    bool ValidateNumberInRange(int Number, int From, int To) {
        return(Number >= From && Number <= To);
    }

    int ReadUntilAgeBetween(int From, int To) {
        int Age = 0;

        do {
            Age = ReadAge();
        } while (!ValidateNumberInRange(Age, From, To));

        return Age;
    }

    void PrintResult(int Age) {

        cout << Age << " is a valid age\n";
    }

    void Task()
    {
        PrintResult(ReadUntilAgeBetween(18, 45));

    }

}

