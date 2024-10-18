#pragma once

#include <iostream>
using namespace std;

namespace P04_HireADriverCase1 {

    struct stInfo {
        short Age;
        bool HaveDrivingLicennse;
    };

    stInfo ReadInfo() {
        stInfo Info;
        cout << "Please enter your age?" << endl;
        cin >> Info.Age;
        cout << "Do you have a driver license?" << endl;
        cin >> Info.HaveDrivingLicennse;
        return Info;
    }

    bool IsAccepted(stInfo Info) {
        return(Info.Age > 21 && Info.HaveDrivingLicennse);
    }

    void PrintResult(stInfo Info) {
        if (IsAccepted(Info))
            cout << "\n Hired" << endl;
        else
            cout << "\n Rejected" << endl;
    }

    void Task()
    {
        PrintResult(ReadInfo());
    }

}


