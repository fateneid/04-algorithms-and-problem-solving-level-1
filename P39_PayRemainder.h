#pragma once

#include <iostream>
using namespace std;

namespace P39_PayRemainder {

	float ReadPositiveNumber(string Message) {
		int Number = 0;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	float CalculateRemainder(float TotalBill, float TotalCashPaid) {
		return TotalCashPaid - TotalBill;
	}

	void Task()
	{
		float TotalBill = ReadPositiveNumber("Please enter Total Bill?");
		float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid?");

		cout << endl << "Total Bill = " << TotalBill << endl;
		cout << "Total Cash Paid = " << TotalCashPaid << endl;
		cout << "******************************\n";
		cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

	}

}



