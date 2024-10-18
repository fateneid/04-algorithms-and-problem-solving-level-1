#pragma once

#include <iostream>
#include<string>
using namespace std;

namespace P37_SumUntilMinus99 {

	float Readumber(string Message) {
		float Number = 0;
		cout << Message << endl;
		cin >> Number;
		return Number;
	}

	float SumNumbers() {

		float Sum = 0, Number = 0;
		int Counter = 1;

		do {
			Number = Readumber("Please enter Number " + to_string(Counter));
			if (Number == -99)
			{
				break;
			}
			Sum += Number;
			Counter++;
		} while (Number != -99);
		return Sum;
	}

	void Task()
	{
		cout << endl << "Result = " << SumNumbers() << endl;

	}

}



