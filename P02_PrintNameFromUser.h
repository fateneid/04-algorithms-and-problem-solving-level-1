#pragma once

#include <iostream>
#include<string>
using namespace std;

namespace P02_PrintNameFromUser{

    string ReadName() {
        string Name;
        cout << "Please enter your name?" << endl;
        getline(cin, Name);

        return Name;
    }

    void PrintName(string name) {
        cout << "Your Name is: " << name << endl;

    }


    void Task()
    {
        PrintName(ReadName());
    }

}

