#pragma once

#include <iostream>
using namespace std;

namespace P46_PrintLettersFromAToZ {

	void PrintLettersAtoZ() {
		for (int i = 65; i <= 90; i++) {
			cout << char(i) << endl;
		}
	}


	void Task()
	{
		PrintLettersAtoZ();

	}

}


