#include<iostream>
using namespace std;
class Base
{
	public:
		void fun()
		{
			cout<<"Base class fun();\n";
		}
		virtual void display()
		{
			cout<<"Base class display();\n";
		}
};
class Derived : public Base
{
	public:
		void fun()
		{
			cout<<"Child class fun();\n";
		}
		void display()
		{
			cout<<"Child class display();\n";
		}
};
main()
{
	Base b;
	Base *p;
	Derived d;
	cout<<"Base pointer points to base class\n";
	p=&b;
	p->fun();
	p->display();
	
	cout<<"\nBase pointer points to Child class\n";
	p=&d;
	p->fun();
	p->display();
}
