#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void func()=0;
};
class Derived : public Base
{
	public:
		void func()
		{
			cout<<"Derived Class Func\n";
		}
};
main()
{
	Derived obj;
	obj.func();
}

