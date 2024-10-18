#pragma once

#include <iostream>
using namespace std;

namespace P05_HireADriverCase2 {

    struct stInfo {
        short Age;
        bool HaveDrivingLicennse;
        bool HaveRecommendation;
    };

    stInfo ReadInfo() {
        stInfo Info;
        cout << "Please enter your age?" << endl;
        cin >> Info.Age;
        cout << "Do you have a driver license?" << endl;
        cin >> Info.HaveDrivingLicennse;
        cout << "Do you have a recommendation?" << endl;
        cin >> Info.HaveRecommendation;
        return Info;
    }

    bool IsAccepted(stInfo Info) {
    
        if (Info.HaveRecommendation)
            return true;
        else
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

