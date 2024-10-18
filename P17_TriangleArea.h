#pragma once

#include <iostream>
using namespace std;

namespace P17_TriangleArea {

    void ReadNumbers(float& A, float& H) {
        cout << "Please enter the base A?" << endl;
        cin >> A;
        cout << "Please enter the height H?" << endl;
        cin >> H;

    }

    float TriangleArea(float A, float H) {
        float Area = A * H / 2;
        return Area;
    }

    void PrintResult(float Area) {
        cout << "\nTriangle Area = " << Area << endl;
    }

    void Task()
    {
        float A, H;
        ReadNumbers(A, H);
        PrintResult(TriangleArea(A, H));

    }

}

