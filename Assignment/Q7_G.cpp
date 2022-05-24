// Operator Overloading -> --
#include<iostream>
using namespace std;
class Decrement
{
	int a;
	
	public:
		Decrement(int a)
		{
			this->a=a;
     	}
		void operator--()
		{
			--a;
		}
		void display()
		{
			cout<<"Incremented value of a= "<<a<<endl;
		}
};
main()
{
	int a;
	cout<<"Enter value of a= ";
	cin>>a;
	Decrement d(a);
	-- d;	
	d.display();
}
