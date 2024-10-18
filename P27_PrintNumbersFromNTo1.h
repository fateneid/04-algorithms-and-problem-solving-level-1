#pragma once

#include <iostream>
using namespace std;

namespace P27_PrintNumbersFromNTo1 {

    int ReadNumber() {
        int N;
        cout << "Please enter number N?" << endl;
        cin >> N;
        return N;
    }

    void PrintRangeFromNto1_UsingWhile(int N) {
        int counter = N + 1;
        cout << "Using While:" << endl;

        while (counter > 1) {
            counter--;
            cout << counter << endl;
        }
    }

    void PrintRangeFromNto1_UsingDoWhile(int N) {
        int counter = N + 1;
        cout << "Using Do While:" << endl;

        do {
            counter--;
            cout << counter << endl;
        } while (counter > 1);
    }

    void PrintRangeFromNto1_UsingFor(int N) {
        cout << "Using For:" << endl;

        for (int counter = N; counter >= 1; counter--) {
            cout << counter << endl;
        }

    }

    void Task()
    {
        int Number = ReadNumber();
        PrintRangeFromNto1_UsingWhile(Number);
        PrintRangeFromNto1_UsingDoWhile(Number);
        PrintRangeFromNto1_UsingFor(Number);

    }

}



