#include<iostream>
#include<string>
using namespace std;

class skbClass
{
	public:
		skbClass(string z)
		{
			setName(z);
		}
		void setName(string x)
		{
			name = x;
		}
		string getName()
		{
			return name;
		}
	private:
		string name;
};

int main()
{
	skbClass bo("Hello world...");
	cout << "here ou go mann...extra etitings..." << bo.getName()<< endl;
	
	bo.setName("sandy barton");	
	cout << bo.getName() << endl;
	
	skbClass bo2("sally salad yeah!!!");
	cout << bo2.getName()<<endl;
	return 0;
}
