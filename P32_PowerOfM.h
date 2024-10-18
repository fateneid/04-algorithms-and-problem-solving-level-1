#pragma once

#include <iostream>
using namespace std;

namespace P32_PowerOfM {

	int ReadNumber() {
		int N;
		cout << "Please enter a number:" << endl;
		cin >> N;
		return N;
	}
	int ReadPower() {
		int N;
		cout << "Please enter a Power:" << endl;
		cin >> N;
		return N;
	}
	int PowerOfM(int Number, int M) {
		if (M == 0)
			return 1;

		int P = 1;
		for (int i = 1; i <= M; i++) {
			P *= Number;
		}
		return P;
	}

	void Task()
	{

		cout << "\nResult = " << PowerOfM(ReadNumber(), ReadPower()) << endl;

	}

}


