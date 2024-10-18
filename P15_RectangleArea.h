#pragma once

#include <iostream>
using namespace std;

namespace P15_RectangleArea {

    void ReadNumbers(float& A, float& B) {
        cout << "Please enter rectangle width A?" << endl;
        cin >> A;
        cout << "Please enter rectangle length B?" << endl;
        cin >> B;
    }

    float CalculateRectangleArea(float A, float B) {
        return A * B;
    }

    void PrintResult(float area) {
        cout << "\nRectangle Area = " << area << endl;
    }

    void Task()
    {
        float A, B;
        ReadNumbers(A, B);
        PrintResult(CalculateRectangleArea(A, B));

    }

}



