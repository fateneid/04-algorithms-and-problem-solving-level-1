#pragma once

#include <iostream>
using namespace std;

namespace P13_MaxOf3Numbers {

	void ReadNumbers(int& A, int& B, int& C) {
		cout << "Please enter number A?" << endl;
		cin >> A;
		cout << "Please enter number B?" << endl;
		cin >> B;
		cout << "Please enter number C?" << endl;
		cin >> C;
	}

	int MaxOf3Numbers(int A, int B, int C) {

		if (A > B)
			if (A > C)
				return A;
			else
				return C;
		else
			if (B > C)
				return B;
			else
				return C;
	}

	void PrintResult(int result) {
		cout << "The max of 3 numbers is: " << result << endl;
	}

	void Task()
	{
		int A, B, C;
		ReadNumbers(A, B, C);
		PrintResult(MaxOf3Numbers(A, B, C));
	}

}


