#include<iostream>
#include"birthday.h"

using namespace std;

birthday::birthday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}


void birthday::printdate()
{
	cout << month << "/" << day << "/" << year << endl;
}


