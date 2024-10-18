#pragma once

#include <iostream>
using namespace std;

namespace P30_FactorialOfN {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int Factorial(int N) {
		int F = 1;
		for (int counter = N; counter >= 1; counter--) {
			F *= counter;
		}
		return F;
	}

	void Task()
	{
		cout << Factorial(ReadPositiveNumber("Please enter a positive number:")) << endl;


	}

}

