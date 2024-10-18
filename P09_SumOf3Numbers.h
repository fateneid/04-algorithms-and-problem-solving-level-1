#pragma once

#include <iostream>
using namespace std;

namespace P09_SumOf3Numbers {

	void ReadNumbers(int& Num1, int& Num2, int& Num3) {
		cout << "Please enter Number 1?" << endl;
		cin >> Num1;
		cout << "Please enter Number 2?" << endl;
		cin >> Num2;
		cout << "Please enter Number 3?" << endl;
		cin >> Num3;
	}

	int SumOf3Numbers(int Num1, int Num2, int Num3) {
		return Num1 + Num2 + Num3;
	}

	void PrintSum(int Total) {
		cout << "\n the total sum of numbers is: " << Total << endl;
	}


	void Task()
	{
		int Num1, Num2, Num3;
		ReadNumbers(Num1, Num2, Num3);
		PrintSum(SumOf3Numbers(Num1, Num2, Num3));

	}
}


