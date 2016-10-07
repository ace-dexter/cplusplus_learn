#ifndef PEOPLE_H
#define	PEOPLE_H

#include<string>
#include"birthday.h"
using namespace std;

class people
{
	public:
		people(string x, birthday bo);
		void printinfo();

	private:
		string name;
		birthday dateofbirth;
};

#endif //PEOPLE_H
