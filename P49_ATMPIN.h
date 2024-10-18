#pragma once

#include <iostream>
using namespace std;

namespace P49_ATMPIN {

	string ReadPinCode() {
		string PinCode;
		cout << "Please enter PIN code:\n";
		cin >> PinCode;
		return PinCode;
	}

	bool Login() {
		string PinCode;
		do {
			PinCode = ReadPinCode();
			if (PinCode == "1234") {
				return 1; //this will exit the function and return true
			}
			else {
				cout << "\nWrong PIN\n";
				system("color 4F"); //turns screen to Red
			}
		} while (PinCode != "1234");
		return 0;
	}

	void Task()
	{
		if (Login()) {
			system("color 2F"); //turns screen to Green
			cout << "\nYour account balance is " << 7500 << '\n';

		};

	}

}


