#pragma once

#include <iostream>
using namespace std;

namespace P50_ATMPIN3Times {

	string ReadPinCode() {
		string PinCode;
		cout << "Please enter PIN code:\n";
		cin >> PinCode;
		return PinCode;
	}

	bool Login() {
		string PinCode;
		int Counter = 3;
		do {
			Counter--;
			PinCode = ReadPinCode();
			if (PinCode == "1234") {
				return 1; //this will exit the function and return true
			}
			else {
				system("color 4F"); //turns screen to Red
				cout << "\nWrong PIN, you have " << Counter << " more tries\n";

			}
		} while (PinCode != "1234" && Counter != 0);
		return 0;
	}

	void Taskk()
	{
		if (Login()) {
			system("color 2F"); //turns screen to Green
			cout << "\nYour account balance is " << 7500 << '\n';

		}
		else {
			cout << "\nYour card is blocked, call the bank for help. \n";
		}
	}
}


