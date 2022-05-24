#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"A= "<<a<<"\nB= "<<b<<endl;
		}
		void setdata()
		{
			cout<<"Enter values of a and b= ";
			cin>>a>>b;
		}
};
main()
{
	//A obj[3];
	A *p=new A[3];
	A *d=p;
	int i;
	for(i=0;i<3;i++)
	{
		p->setdata();
		p++;
	}
	for(i=0;i<3;i++)
	{
		d->getdata();
		d++;
	}
}
