// Operator Overloading -> >=
#include<iostream>
using namespace std;
class LargerEqualsTo
{
	int val;
	
	public:
		LargerEqualsTo(int val)
		{
			this->val=val;
		}
		int operator>=(LargerEqualsTo obj)
		{
			if(val<=obj.val)
			 return 1;
			else
			 return 0; 
		} 
};
main()
{
	LargerEqualsTo obj1(20);
	LargerEqualsTo obj2(20);
	if(obj1>=obj2)
	 cout<<"Object 1 is larger or equal\n";
	else
	 cout<<"Object 1 is not larger or equal\n";	 
}
