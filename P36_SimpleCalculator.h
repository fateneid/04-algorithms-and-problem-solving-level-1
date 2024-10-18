#pragma once

#include <iostream>
using namespace std;

namespace P36_SimpleCalculator {

	enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

	float ReadNumber(string Message) {
		float Number = 0;
		cout << Message << endl;
		cin >> Number;
		return Number;
	}

	enOperationType ReadOpType() {
		char OT = '+';
		cout << "Please enter Operation Type ( + , - , * , / )?\n";
		cin >> OT;
		return (enOperationType)OT;
	}

	float Calculate(float Number1, float Number2, enOperationType OpType) {
		switch (OpType) {
		case enOperationType::Add:
			return Number1 + Number2;
		case enOperationType::Subtract:
			return Number1 - Number2;
		case enOperationType::Multiply:
			return Number1 * Number2;
		case enOperationType::Divide:
			return Number1 / Number2;
		default:
			return Number1 + Number2;
		}
	}

	void Task()
	{
		float Number1 = ReadNumber("Please enter the first Number?");
		float Number2 = ReadNumber("Please enter the second Number?");

		enOperationType OpType = ReadOpType();

		cout << endl << "Result = " << Calculate(Number1, Number2, OpType) << endl;

	}

}


