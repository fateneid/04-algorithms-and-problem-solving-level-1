#pragma once

#include <iostream>
using namespace std;

namespace P20_CircleAreaInscribedInASquare {

    float ReadSquareSide() {
        float A;
        cout << "Please enter the square side A?" << endl;
        cin >> A;
        return A;

    }

    float CircleAraeInscribedInSquare(float A) {
        const float pi = 3.141592653589793238;
        float Area = (pow(A, 2) * pi) / 4;
        return Area;
    }

    void PrintResult(float Area) {
        cout << "\nCircle Arae = " << Area << endl;
    }

    void Task()
    {
        PrintResult(CircleAraeInscribedInSquare(ReadSquareSide()));

    }
}


