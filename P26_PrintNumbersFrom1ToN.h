#pragma once

#include <iostream>
using namespace std;

namespace P26_PrintNumbersFrom1ToN {

    int ReadNumber() {
        int N;
        cout << "Please enter number N?" << endl;
        cin >> N;
        return N;
    }

    void PrintRangeFrom1toN_UsingWhile(int N) {
        int counter = 0;
        cout << "Using While:" << endl;

        while (counter < N) {
            counter++;
            cout << counter << endl;
        }
    }

    void PrintRangeFrom1toN_UsingDoWhile(int N) {
        int counter = 0;
        cout << "Using Do While:" << endl;

        do {
            counter++;
            cout << counter << endl;
        } while (counter < N);
    }

    void PrintRangeFrom1toN_UsingFor(int N) {
        cout << "Using For:" << endl;

        for (int counter = 1; counter <= N; counter++) {
            cout << counter << endl;
        }

    }

    void Task()
    {
        int Number = ReadNumber();
        PrintRangeFrom1toN_UsingWhile(Number);
        PrintRangeFrom1toN_UsingDoWhile(Number);
        PrintRangeFrom1toN_UsingFor(Number);

    }

}



