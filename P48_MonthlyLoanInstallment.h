#pragma once

#include <iostream>
using namespace std;

namespace P48_MonthlyLoanInstallment {

	float ReadPositiveNumber(string Message) {
		float Number = 0;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number <= 0);
		return Number;
	}

	float MonthlyInstallment(float LoanAmount, float HowManyMonths) {
		return LoanAmount / HowManyMonths;
	}

	void Task()
	{
		float LoanAmount = ReadPositiveNumber("Please enter the Loan Amount?");
		float HowManyMonths = ReadPositiveNumber("How many months?");
		cout << "\nMonthly Installment: " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;

	}

}

