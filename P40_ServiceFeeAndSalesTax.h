#pragma once

#include <iostream>
using namespace std;

namespace P40_ServiceFeeAndSalesTax {

	float ReadPositiveNumber(string Message) {
		float Number = 0;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	float TotalBillAfterServiceAndTax(float TotalBill) {
		return TotalBill * 1.1 * 1.16;
	}

	void Task()
	{
		float TotalBill = ReadPositiveNumber("Please enter Total Bill?");

		cout << endl << "Total Bill = " << TotalBill << endl;
		cout << "Total Bill after service fee and sales tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;

	}

}

