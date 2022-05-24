// Operator Overloading -> %=
#include<iostream>
using namespace std;
class RemainderEqual
{
	int num;
	
	public:
		RemainderEqual(int num)
		{
			this->num=num;
		}
		void operator%=(RemainderEqual obj)
		{
			num%=obj.num;
		}
		void display()
		{
			cout<<"Value of num= "<<num<<endl;
		}
};
main()
{
	
	RemainderEqual obj1(10);
	RemainderEqual obj2(2);
	obj1%=obj2;
	obj1.display();
}
