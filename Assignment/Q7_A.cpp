// Operator Overloading -> +
#include<iostream>
using namespace std;
class Sum
{
	int a,b;
	
	public:
		Sum(){}
		Sum(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
		Sum operator+(Sum s)
		{
			Sum temp;
			temp.a=a+s.a;
			temp.b=b+s.b;
			return temp;
		}
		
		void display()
		{
			cout<<"a= "<<a<<"\tb= "<<b<<endl;
		}
};
main()
{
	Sum s1(10,20);
	Sum s2(100,200);
	Sum s3;
	s3=s1+s2;
	cout<<"C1: ";
	s1.display();
	cout<<"C2: ";
	s2.display();
	cout<<"C3: ";
	s3.display();
}
