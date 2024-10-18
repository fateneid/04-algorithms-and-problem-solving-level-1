#pragma once

#include <iostream>
using namespace std;

namespace P19_CircleAreaThroughDiameter {

    float ReadDiameter() {
        float D;
        cout << "Please enter the diameter D?" << endl;
        cin >> D;
        return D;

    }

    float CircleAraeByDiameter(float D) {
        const float pi = 3.141592653589793238;
        float Area = (pow(D, 2) * pi) / 4;
        return Area;
    }

    void PrintResult(float Area) {
        cout << "\nCircle Arae = " << Area << endl;
    }

    void Task()
    {
        PrintResult(CircleAraeByDiameter(ReadDiameter()));

    }
}


