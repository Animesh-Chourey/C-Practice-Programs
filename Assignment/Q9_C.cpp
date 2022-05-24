// Operator Overloading -> *=
#include<iostream>
using namespace std;
class MultiplyEqual
{
	int num;
	
	public:
		MultiplyEqual(int num)
		{
			this->num=num;
		}
		void operator*=(MultiplyEqual obj)
		{
			num*=obj.num;
		}
		void display()
		{
			cout<<"Value of num= "<<num<<endl;
		}
};
main()
{
	
	MultiplyEqual obj1(10);
	MultiplyEqual obj2(2);
	obj1*=obj2;
	obj1.display();
}
