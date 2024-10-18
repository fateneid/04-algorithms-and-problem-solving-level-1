#pragma once

#include <iostream>
using namespace std;

namespace P23_CircleAreaCircleDescribedAroundAnArbitraryTriangle {

    void ReadTriangleData(float& A, float& B, float& C) {
        cout << "Please enter the triangle side A?" << endl;
        cin >> A;
        cout << "Please enter the triangle base B?" << endl;
        cin >> B;
        cout << "Please enter the triangle side C?" << endl;
        cin >> C;
    }

    float CircleAraeByATriangle(float A, float B, float C) {
        const float pi = 3.141592653589793238;
        float P = (A + B + C) / 2;
        float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
        float Area = pi * pow(T, 2);
        return Area;
    }

    void PrintResult(float Area) {
        cout << "\nCircle Arae = " << Area << endl;
    }

    void Task()
    {
        float A, B, C;
        ReadTriangleData(A, B, C);
        PrintResult(CircleAraeByATriangle(A, B, C));

    }
}

