// Operator Overloading -> %
#include<iostream>
using namespace std;
class Percent
{
	int a,b;
	
	public:
		Percent(){}
		Percent(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
		Percent operator%(Percent s)
		{
			Percent temp;
			temp.a=a%s.a;
			temp.b=b%s.b;
			return temp;
		}
		
		void display()
		{
			cout<<"a= "<<a<<"\tb= "<<b<<endl;
		}
};
main()
{
	Percent s1(25,45);
	Percent s2(10,20);
	Percent s3;
	s3=s1%s2;
	cout<<"C1: ";
	s1.display();
	cout<<"C2: ";
	s2.display();
	cout<<"C3: ";
	s3.display();
}
