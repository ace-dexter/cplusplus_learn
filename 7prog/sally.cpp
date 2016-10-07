#include<iostream>
#include"sally.h"

using namespace std;

sally::sally(int a, int b)
: regvar(a),
constvar(b)
{
	
}


void sally::print()
{
	cout << "regular var is :" << regvar << "const variable is : " << constvar << endl;
}
