#pragma once

#include <iostream>
using namespace std;

namespace P18_CircleArea {

    float ReadRadious() {
        float R;
        cout << "Please enter the radious R?" << endl;
        cin >> R;
        return R;

    }

    float CircleArae(float R) {
        const float pi = 3.141592653589793238;
        float Area = pow(R, 2) * pi;
        return Area;
    }

    void PrintResult(float Area) {
        cout << "\nCircle Arae = " << Area << endl;
    }

    void Task()
    {
        PrintResult(CircleArae(ReadRadious()));

    }
}


