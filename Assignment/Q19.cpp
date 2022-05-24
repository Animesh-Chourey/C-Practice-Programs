#include<iostream>
using namespace std;
class Base
{
	public:
		void display()
		{
			cout<<"Base Class Display() Function\n";
		}
		virtual void show()
		{
			cout<<"Base Class Show() Function\n";
		}
};
class Derived : public Base
{
	public:
		void display()
		{
			cout<<"Derived Class Display() Function\n";
		}
		virtual void show()
		{
			cout<<"Derived Class Show() Function\n";
		}
};
main()
{
	Base b;
	Base *baptr;
	Derived d;
	
	cout<<"baptr points to Base : \n";
	baptr=&b;
	baptr->display();
	baptr->show();
	
	cout<<"\nbaptr points to Derived : \n";
	baptr=&d;
	baptr->display();
	baptr->show();
}
