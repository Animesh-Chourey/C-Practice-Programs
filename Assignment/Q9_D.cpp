// Operator Overloading -> /=
#include<iostream>
using namespace std;
class DivideEqual
{
	int num;
	
	public:
		DivideEqual(int num)
		{
			this->num=num;
		}
		void operator/=(DivideEqual obj)
		{
			num/=obj.num;
		}
		void display()
		{
			cout<<"Value of num= "<<num<<endl;
		}
};
main()
{
	
	DivideEqual obj1(10);
	DivideEqual obj2(2);
	obj1/=obj2;
	obj1.display();
}
