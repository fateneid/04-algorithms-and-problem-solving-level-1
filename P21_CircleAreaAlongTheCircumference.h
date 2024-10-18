#pragma once

#include <iostream>
using namespace std;

namespace P21_CircleAreaAlongTheCircumference {

    float ReadCircumference() {
        float l;
        cout << "Please enter the circumference l?" << endl;
        cin >> l;
        return l;

    }

    float CircleAraeByCircumference(float l) {
        const float pi = 3.141592653589793238;
        float Area = pow(l, 2) / (4 * pi);
        return Area;
    }

    void PrintResult(float Area) {
        cout << "\nCircle Arae = " << Area << endl;
    }

    void Task()
    {

        PrintResult(CircleAraeByCircumference(ReadCircumference()));

    }
}

