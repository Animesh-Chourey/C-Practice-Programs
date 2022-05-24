// Operator Overloading -> <=
#include<iostream>
using namespace std;
class SmallerEqualsTo
{
	int val;
	
	public:
		SmallerEqualsTo(int val)
		{
			this->val=val;
		}
		int operator<=(SmallerEqualsTo obj)
		{
			if(val<=obj.val)
			 return 1;
			else
			 return 0; 
		} 
};
main()
{
	SmallerEqualsTo obj1(20);
	SmallerEqualsTo obj2(20);
	if(obj1<=obj2)
	 cout<<"Object 1 is smaller or equal\n";
	else
	 cout<<"Object 1 is not smaller or equal\n";	 
}
