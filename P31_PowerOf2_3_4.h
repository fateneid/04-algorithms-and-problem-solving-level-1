#pragma once

#include <iostream>
using namespace std;

namespace P31_PowerOf2_3_4 {

	int ReadNumber() {
		int N;
		cout << "Please enter a number:" << endl;
		cin >> N;
		return N;
	}

	void PowerOf2_3_4(int Number) {
		int a, b, c;
		a = Number * Number;
		b = Number * Number * Number;
		c = Number * Number * Number * Number;
		cout << a << " " << b << " " << c << endl;
	}

	void Task()
	{
		PowerOf2_3_4(ReadNumber());

	}

}


