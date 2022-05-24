#include<iostream>
using namespace std;
class A
{
	int a,b,c;
	public:
		void setData(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void getdata()
		{
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;
			cout<<"c= "<<c<<endl;
		}
		
		void operator-()
		{
			a=-a;
			b=-b;
			c=-c;
		}
};
main()
{
	A obj;
	obj.setData(1,-2,4);
	cout<<"Before overloading: \n";
	obj.getdata();
	cout<<"After overloading: \n";
	-obj;
	obj.getdata();
}
