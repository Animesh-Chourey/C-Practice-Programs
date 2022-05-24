// Operator Overloading -> >
#include<iostream>
using namespace std;
class LargerThan
{
	int val;
	
	public:
		LargerThan(int val)
		{
			this->val=val;
		}
		int operator>(LargerThan obj)
		{
			if(val>obj.val)
			 return 1;
			else
			 return 0; 
		} 
};
main()
{
	LargerThan obj1(30);
	LargerThan obj2(20);
	if(obj1>obj2)
	 cout<<"Object 1 is larger\n";
	else
	 cout<<"Object 1 is not larger\n";	 
}
