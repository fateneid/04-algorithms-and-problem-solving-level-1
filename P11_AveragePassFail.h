#pragma once

#include <iostream>
using namespace std;

namespace P11_AveragePassFail {

	enum  enPassFail { Pass = 1, Fail = 2 };

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

	enPassFail CheckResult(float Average) {
		if (Average >= 50)
			return enPassFail::Pass;
		else
			return enPassFail::Fail;

	}
	void PrintResult(int Average) {
		cout << "\n Your Average is: " << Average << endl;
		if (CheckResult(Average) == enPassFail::Pass)
			cout << "\n Your Passed" << endl;
		else
			cout << "\n Your Faild" << endl;
	}


	void Task()
	{
		int  Mark1, Mark2, Mark3;
		ReadMarks(Mark1, Mark2, Mark3);
		PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

	}


}

