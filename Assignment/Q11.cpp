#include<iostream>
using namespace std;
class Parent
{
	public:
		void func()
	    {   
		 cout<<"Parent Class Function\n";
	    }
	
};
class Child : public Parent
{
	public:
		void func()
	    { 
		 Parent::func();
		 cout<<"Child Class Function\n";
	    }
};
main()
{
	Child obj;
	obj.func();
}
