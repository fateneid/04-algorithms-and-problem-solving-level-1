#pragma once

#include <iostream>
using namespace std;

namespace P06_FullName {

    struct stInfo {
        string FirstName;
        string LastName;
    };

    stInfo ReadInfo() {
        stInfo Info;
        cout << "Please enter your first name?" << endl;
        cin >> Info.FirstName;
        cout << "Please enter your last name?" << endl;
        cin >> Info.LastName;

        return Info;
    }

    string GetFullName(stInfo Info, bool Reversed) {
        string FullName;

        if (Reversed)
            FullName = Info.LastName + " " + Info.FirstName;
        else
            FullName = Info.FirstName + " " + Info.LastName;

        return FullName;
    }

    void PrintName(string fullname) {
        cout << "Your full name is: " << fullname << endl;
    }


    void Task()
    {
        PrintName(GetFullName(ReadInfo(), 0));
    }

}

