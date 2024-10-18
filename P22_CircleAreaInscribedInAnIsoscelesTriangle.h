#pragma once

#include <iostream>
using namespace std;

namespace P22_CircleAreaInscribedInAnIsoscelesTriangle {

    void ReadTriangleData(float& A, float& B) {

        cout << "Please enter the triangle side A?" << endl;
        cin >> A;
        cout << "Please enter the triangle base B?" << endl;
        cin >> B;
    }

    float CircleAraeByITriangle(float A, float B) {
        const float pi = 3.141592653589793238;
        float Area = (pi * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
        return Area;
    }

    void PrintResult(float Area) {
        cout << "\nCircle Arae = " << Area << endl;
    }

    void Task()
    {
        float A, B;
        ReadTriangleData(A, B);
        PrintResult(CircleAraeByITriangle(A, B));

    }
}

