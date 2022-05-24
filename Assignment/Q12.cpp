#include<iostream>
using namespace std;
class A
{
	protected:
		int a1,b1;
		
	public:
		A()
		{
			cout<<"Enter the values a1 and b1=";
			cin>>a1>>b1;
		}
};
class B
{
	protected:
		int a2,b2;
		
	public:
		B()
		{
			cout<<"Enter the values a2 and b2= ";
			cin>>a2>>b2;
	    }
};
class C : public A, public B
{
	public:
		void sum()
		{
			cout<<"a1+b1= "<<a1+a2<<endl;
			cout<<"a1+b1= "<<b1+b2<<endl;
		}
};
main()
{
	C obj;
	obj.sum();
}
