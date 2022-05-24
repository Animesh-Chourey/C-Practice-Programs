// Operator Overloading -> -=
#include<iostream>
using namespace std;
class MinusEqual
{
	int num;
	
	public:
		MinusEqual(int num)
		{
			this->num=num;
		}
		void operator-=(MinusEqual obj)
		{
			num-=obj.num;
		}
		void display()
		{
			cout<<"Value of num= "<<num<<endl;
		}
};
main()
{
	
	MinusEqual obj1(10);
	MinusEqual obj2(2);
	obj1-=obj2;
	obj1.display();
}
