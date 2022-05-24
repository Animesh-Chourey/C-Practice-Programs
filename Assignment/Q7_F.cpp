// Operator Overloading -> ++
#include<iostream>
using namespace std;
class Increment
{
	int a;
	
	public:
		Increment(int a)
		{
			this->a=a;
     	}
		void operator++()
		{
			++a;
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
	Increment i(a);
	++ i;	
	i.display();
}
