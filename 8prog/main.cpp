#include<iostream>
#include"people.h"
#include"birthday.h"

using namespace std;

int main()
{
	birthday birthobj(12, 28, 1986);

	people sandy("Sandy, the flow", birthobj);
	sandy.printinfo();

}
