#pragma once

#include <iostream>
using namespace std;

namespace P42_TaskDurationInSeconds {

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

	strTaskDuration ReadTaskDuration() {
		strTaskDuration TaskDuration;
		TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter number of Days?");
		TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter number of Hours?");
		TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter number of Minutes?");
		TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter number of Seconds?");

		return TaskDuration;
	}

	int TaskDurationInSeconds(strTaskDuration TaskDuration) {
		int DurationInSeconds = 0;

		DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
		DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
		DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
		DurationInSeconds += TaskDuration.NumberOfSeconds;

		return DurationInSeconds;
	}

	void Task()
	{
		cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
	
	}

}


