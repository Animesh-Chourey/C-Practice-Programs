#include<iostream>
using namespace std;
class ParentConDes
{
	public:
		ParentConDes()
		{
			cout<<"Base Class Constructor Called\n";
		}
		~ParentConDes()
		{
			cout<<"Base Class Destructor called\n";
		}
};
class ChildConDes: public ParentConDes
{
	public:
		ChildConDes()
		{
			cout<<"Child Class Constructor Called\n";
		}
		~ChildConDes()
		{
			cout<<"Child Class Destructor called\n";
		}
};
main()
{
	ChildConDes obj;
}
