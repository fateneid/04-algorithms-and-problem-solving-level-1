#pragma once

#include <iostream>
using namespace std;

namespace P41_WeeksAndDays {

	float ReadPositiveNumber(string Message) {
		float Number = 0;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	float HoursToDays(float NumberOfHours) {

		return (float)NumberOfHours / 24;
	}
	float HoursToWeeks(float NumberOfHours) {

		return (float)NumberOfHours / 24 / 7;
	}
	float DaysToWeeks(float NumberOfDays) {

		return (float)NumberOfDays / 7;
	}
	void Task()
	{
		float NumberOfHours = ReadPositiveNumber("Please enter the number of hours?");
		float NumberOfDays = HoursToDays(NumberOfHours);
		float NumberOfWeeks = DaysToWeeks(NumberOfDays);

		cout << endl << "Total Hours = " << NumberOfHours << endl;
		cout << "Total Days = " << NumberOfDays << endl;
		cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

	}

}

