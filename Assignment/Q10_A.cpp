// Operator Overloading -> <
#include<iostream>
using namespace std;
class SmallerThan
{
	int val;
	
	public:
		SmallerThan(int val)
		{
			this->val=val;
		}
		int operator<(SmallerThan obj)
		{
			if(val<obj.val)
			 return 1;
			else
			 return 0; 
		} 
};
main()
{
	SmallerThan obj1(10);
	SmallerThan obj2(20);
	if(obj1<obj2)
	 cout<<"Object 1 is smaller\n";
	else
	 cout<<"Object 1 is not smaller\n";
	 
}
