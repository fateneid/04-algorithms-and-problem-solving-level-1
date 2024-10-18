#pragma once

#include <iostream>
using namespace std;

namespace P44_DayOfWeek {

	enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

	int ReadNuumberInRange(string Message, int From, int To) {
		int Number = 0;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < From || Number > To);
		return Number;
	}

	enDayOfWeek ReadDayOfWeek() {
		return (enDayOfWeek)ReadNuumberInRange("Please enter day number?", 1, 7);
	}

	string GetDayOfWeek(enDayOfWeek Day) {
		switch (Day) {
		case enDayOfWeek::Sat:
			return "Saturday";
		case enDayOfWeek::Sun:
			return "Sunday";
		case enDayOfWeek::Mon:
			return "Monday";
		case enDayOfWeek::Tue:
			return "Tuesday";
		case enDayOfWeek::Wed:
			return "Wednesday";
		case enDayOfWeek::Thu:
			return "Thursday";
		case enDayOfWeek::Fri:
			return "Friday";
		default:
			return "Not a valid day";
		}
	}

	void Task()
	{
		cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	}

}



