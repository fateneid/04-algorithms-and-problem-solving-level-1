#pragma once

#include <iostream>
using namespace std;

namespace P47_LoanInstalmentMonths {

	float ReadPositiveNumber(string Message) {
		float Number = 0;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number <= 0);
		return Number;
	}

	float TotalMonths(float LoanAmount, float MonthlyInstallment) {
		return LoanAmount / MonthlyInstallment;
	}

	void Task()
	{
		float LoanAmount = ReadPositiveNumber("Please enter the Loan Amount?");
		float MonthlyInstallment = ReadPositiveNumber("Please enter the Monthly Installment?");
		cout << "\nTotal months to pay: " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

	}

}



