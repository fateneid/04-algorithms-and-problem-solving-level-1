#pragma once

#include <iostream>
using namespace std;

namespace P10_AverageOf3Marks {

    void ReadMarks(int& Mark1, int& Mark2, int& Mark3) {
		cout << "Please enter Mark 1?" << endl;
		cin >> Mark1;
		cout << "Please enter Mark 2?" << endl;
		cin >> Mark2;
		cout << "Please enter Mark 3?" << endl;
		cin >> Mark3;
	}

	int SumOf3Marks(int Mark1, int Mark2, int Mark3) {
		return  Mark1 + Mark2 + Mark3;
	}

	float CalculateAverage(int Mark1, int Mark2, int Mark3) {
		return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
	}
	void PrintSum(int Average) {
		cout << "\n the total sum of numbers is: " << Average << endl;
	}

	void Task()
	{
		int  Mark1, Mark2, Mark3;
		ReadMarks(Mark1, Mark2, Mark3);
		PrintSum(CalculateAverage(Mark1, Mark2, Mark3));

	}
}

