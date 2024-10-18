#pragma once

#include <iostream>
using namespace std;

namespace P14_SwapNumbers {

	void ReadNumbers(int& Num1, int& Num2) {
		cout << "Please enter number 1?" << endl;
		cin >> Num1;
		cout << "Please enter number 2?" << endl;
		cin >> Num2;
	}

	void SwapNumbers(int& A, int& B) {
		int temp;

		temp = A;
		A = B;
		B = temp;
	}

	void PrintNumbers(int Num1, int Num2) {
		cout << "\nNumber 1 = " << Num1 << endl;
		cout << "Number 2 = " << Num2 << endl;
	}

	void Task()
	{
		int Num1, Num2;
		ReadNumbers(Num1, Num2);
		PrintNumbers(Num1, Num2);
		SwapNumbers(Num1, Num2);
		PrintNumbers(Num1, Num2);

	}

}



