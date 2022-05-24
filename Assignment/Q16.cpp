#include<iostream>
using namespace std;
class Base
{
	public:
		void func()
		{
			cout<<"Base Class Function\n";
		}
};
class Derived : private Base
{
	public:
	void func()
	{
		Base::func();
		cout<<"Derived Class Function\n";
	}
};
main()
{
	Derived obj;
	obj.func();
}
