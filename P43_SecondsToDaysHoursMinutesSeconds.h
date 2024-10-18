#pragma once

#include <iostream>
using namespace std;

namespace P43_SecondsToDaysHoursMinutesSeconds {

	struct strTaskDuration {
		int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
	};

	int ReadPositiveNumber(string Message) {
		int Number = 0;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	strTaskDuration SecondToTaskDuration(int TotalSeconds) {
		strTaskDuration TaskDuration;
		const int SecondsPerDay = 24 * 60 * 60;
		const int SecondsPerHour = 60 * 60;
		const int SecondsPerMinute = 60;

		int Remainder = 0;
		TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
		Remainder = TotalSeconds % SecondsPerDay;
		TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
		Remainder = Remainder % SecondsPerHour;
		TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
		Remainder = Remainder % SecondsPerMinute;
		TaskDuration.NumberOfSeconds = Remainder;

		return TaskDuration;

	}

	void PrintTaskDurationDetails(strTaskDuration TaskDuration) {
		cout << "\n" << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":"
			<< TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds << endl;
	}

	void Task()
	{
		int TotalSeconds = ReadPositiveNumber("Please enter total seconds?");
		PrintTaskDurationDetails(SecondToTaskDuration(TotalSeconds));

		//2:5:45:35
		// 193535

	}

}


