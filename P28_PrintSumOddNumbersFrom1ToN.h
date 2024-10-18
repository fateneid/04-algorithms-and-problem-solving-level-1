#pragma once

#include <iostream>
using namespace std;

namespace P28_PrintSumOddNumbersFrom1ToN {

    enum enOddOrEven { Odd = 1, Even = 2 };

    int ReadNumber() {
        int N;
        cout << "Please enter number N?" << endl;
        cin >> N;
        return N;
    }

    enOddOrEven CheckOddOrEven(int Number) {
        if (Number % 2 != 0)
            return enOddOrEven::Odd;
        else
            return enOddOrEven::Even;
    }

    int SumOfOddFrom1toN_UsingWhile(int N) {
        int counter = 0;
        int sum = 0;
        cout << "Sum of odd using While:" << endl;

        while (counter < N) {
            counter++;
            if (CheckOddOrEven(counter) == enOddOrEven::Odd)
                sum += counter;
        }
        return sum;
    }

    int SumOfOddFrom1toN_UsingDoWhile(int N) {
        int counter = 0;
        int sum = 0;
        cout << "Sum of odd using Do While:" << endl;

        do {
            counter++;
            if (CheckOddOrEven(counter) == enOddOrEven::Odd)
                sum += counter;
        } while (counter < N);
        return sum;
    }

    int SumOfOddFrom1toN_UsingFor(int N) {
        cout << "Sum of odd using For:" << endl;
        int sum = 0;
        for (int counter = 1; counter <= N; counter++) {
            if (CheckOddOrEven(counter) == enOddOrEven::Odd)
                sum += counter;
        }
        return sum;

    }


    void Task()
    {
        int Number = ReadNumber();
        cout << SumOfOddFrom1toN_UsingWhile(Number) << endl;
        cout << SumOfOddFrom1toN_UsingDoWhile(Number) << endl;
        cout << SumOfOddFrom1toN_UsingFor(Number) << endl;

    }

}


