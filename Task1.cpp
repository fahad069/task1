#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	MyNum obj(12, 21);
	int number;

	MyNum ob1;
	cout << "Enter any number positive or negative :";
	cin >> number;
	ob1.setnumber(number);
	cout << "The number is :" << ob1.getnumber() << endl;
	ob1.positivenum();
	ob1.negativenum();

	cout << "****** Coming to second part of Question ******" << endl;
	int n;
	cout << "Enter how many numbers you want to enter :";
	cin >> n;

// MyNum ob[n];    It's Giving Error in visual studio but in online compiler it's running properly //
	MyNum ob[5]; // So, i have no choice rather than choosing default objects //
	
	// for (int i = 0; i < n; i++) // Can't run 'n' number of times //
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter any number positive or negative :";
		cin >> number;
		ob[i].setnumber(number);
	}

	cout << endl;
	// for (int i = 0; i < n; i++)//
	for (int i = 0; i < 5; i++)
	{
		ob[i].display();
		ob[i].sortdisplay();
	}
	system("pause");
	return 0;
}