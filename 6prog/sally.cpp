#include "sally.h"
#include <iostream>
using namespace std;

sally::sally()
{
	cout << "I am the constructor!" << endl;	
}
sally::~sally()
{
	cout << "I am the decconstructor." << endl;
}
void sally::printCrap()
{
	cout << "someone says steak." << endl;
}
