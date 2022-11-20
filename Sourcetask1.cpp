#include <iostream>
#include "Header.h"
using namespace std;


MyNum::MyNum()
{
	Pnum = 0;
}

MyNum::MyNum(int c, int b)
{
	cout << "IT IS TASK 1" << endl;
}

void MyNum::setnumber(int n)
{
	num = n;
}

int MyNum::getnumber()
{
	return num;
}

void MyNum::positivenum()
{

	if (num < 0)
	{
		cout << "The number is Negative " << endl;
		Pnum = num * -1;
		cout << "The converted positive number is : " << Pnum << endl;
		cout << endl;
	}

}

void MyNum::negativenum()
{

	if (num > 0)
	{
		cout << "The number is Positive " << endl;
		Nnum = num * -1;
		cout << "The converted negative number is : " << Nnum << endl;
		cout << endl;
	}

}

void MyNum::display()
{

	cout << "The Number is " << num << endl;
}

void MyNum::sortdisplay()
{
	positivenum();
	negativenum();
}
