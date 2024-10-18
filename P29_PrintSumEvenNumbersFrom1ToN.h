#pragma once

#include <iostream>
using namespace std;

namespace P29_PrintSumEvenNumbersFrom1ToN {

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

    int SumOfEvenFrom1toN_UsingWhile(int N) {
        int counter = 0;
        int sum = 0;
        cout << "Sum of even using While:" << endl;

        while (counter < N) {
            counter++;
            if (CheckOddOrEven(counter) == enOddOrEven::Even)
                sum += counter;
        }
        return sum;
    }

    int SumOfEvenFrom1toN_UsingDoWhile(int N) {
        int counter = 0;
        int sum = 0;
        cout << "Sum of even using Do While:" << endl;

        do {
            counter++;
            if (CheckOddOrEven(counter) == enOddOrEven::Even)
                sum += counter;
        } while (counter < N);
        return sum;
    }

    int SumOfEvenFrom1toN_UsingFor(int N) {
        cout << "Sum of even using For:" << endl;
        int sum = 0;
        for (int counter = 1; counter <= N; counter++) {
            if (CheckOddOrEven(counter) == enOddOrEven::Even)
                sum += counter;
        }
        return sum;

    }


    void Task()
    {
        int Number = ReadNumber();
        cout << SumOfEvenFrom1toN_UsingWhile(Number) << endl;
        cout << SumOfEvenFrom1toN_UsingDoWhile(Number) << endl;
        cout << SumOfEvenFrom1toN_UsingFor(Number) << endl;

    }

}



