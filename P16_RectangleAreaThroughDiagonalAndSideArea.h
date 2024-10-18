#pragma once

#include <iostream>
using namespace std;

namespace P16_RectangleAreaThroughDiagonalAndSideArea {

    void ReadNumbers(float& A, float& D) {
        cout << "Please enter the side A?" << endl;
        cin >> A;
        cout << "Please enter the diagonal D?" << endl;
        cin >> D;

    }

    float RectangleAreaBySideAndDiagonal(float A, float D) {
        float Area = A * sqrt(pow(D, 2) - pow(A, 2));
        return Area;
    }

    void PrintResult(float Area) {
        cout << "\nRectangle Area = " << Area << endl;
    }

    void Task()
    {
        float A, D;
        ReadNumbers(A, D);
        PrintResult(RectangleAreaBySideAndDiagonal(A, D));

    }

}



