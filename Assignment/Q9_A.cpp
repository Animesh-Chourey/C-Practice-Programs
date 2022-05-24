// Operator Overloading -> +=
#include<iostream>
using namespace std;
class PlusEqual
{
	int num;
	
	public:
		PlusEqual(int num)
		{
			this->num=num;
		}
		void operator+=(PlusEqual obj)
		{
			num+=obj.num;
		}
		void display()
		{
			cout<<"Value of num= "<<num<<endl;
		}
};
main()
{
	
	PlusEqual obj1(10);
	PlusEqual obj2(2);
	obj1+=obj2;
	obj1.display();
}
