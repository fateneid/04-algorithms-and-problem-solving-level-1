#pragma once

#include <iostream>
using namespace std;

namespace P35_PiggyBankCalculator {

	struct stPiggyBannkContenet
	{
		int Pennies, Nickels, Dimes, Quarters, Dollars;
	};

	stPiggyBannkContenet ReadPiggyBannkContenet() {
		stPiggyBannkContenet PiggyBannkContenet;
		cout << "Please enter a Total Pennies?" << endl;
		cin >> PiggyBannkContenet.Pennies;
		cout << "Please enter a Total Nickels?" << endl;
		cin >> PiggyBannkContenet.Nickels;
		cout << "Please enter a Total Dimes?" << endl;
		cin >> PiggyBannkContenet.Dimes;
		cout << "Please enter a Total Quarters?" << endl;
		cin >> PiggyBannkContenet.Quarters;
		cout << "Please enter a Total Dollars?" << endl;
		cin >> PiggyBannkContenet.Dollars;
		return PiggyBannkContenet;
	}

	int CalculateTotalPennies(stPiggyBannkContenet PiggyBannkContenet) {

		int TotalPennies = 0;

		TotalPennies = PiggyBannkContenet.Pennies * 1 + PiggyBannkContenet.Nickels * 5
			+ PiggyBannkContenet.Dimes * 10 + PiggyBannkContenet.Quarters * 25
			+ PiggyBannkContenet.Dollars * 100;
		return TotalPennies;
	}


	void Task()
	{
		int TotalPennies = CalculateTotalPennies(ReadPiggyBannkContenet());
		cout << endl << "Total Pennies = " << TotalPennies << endl;
		cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;


	}

}


