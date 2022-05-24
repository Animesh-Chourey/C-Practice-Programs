#include<iostream>
using namespace std;
class A
{
	int n1,n2;
	public:
		A()
		{
			cout<<"Enter two numbers: ";
			cin>>n1>>n2;
		}
		void multi()
		{
			int m=n1*n2;
			cout<<"M= "<<m<<endl;
		}
};
main()
{
	A obj;
	obj.multi();
	A obj1(obj);
	obj1.multi();
}
