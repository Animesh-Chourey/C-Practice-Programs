#include<iostream>
using namespace std;
class Distance
{
	float m,cm,mm;
	public:
		void getData()
		{
			cout<<"Enter millimeter: ";
			cin>>mm;
			cout<<"Enter centimeter: ";
			cin>>cm;
			cout<<"Enter meter: ";
			cin>>m;
		}
		
		void showData()
		{
			cout<<"Distane in millimeter: "<<mm<<endl;
			cout<<"Distane in centimeter: "<<cm<<endl;
			cout<<"Distane in meter: "<<m<<endl;
		}
		
		void add_Distance(Distance,Distance);
};
void Distance::add_Distance(Distance d1,Distance d2)
{
	mm=d1.mm+d2.mm;
	cm=d1.cm+d2.cm;
	m=d1.m+d2.m;
	
	cout<<"Added mm: "<<mm<<endl;
	cout<<"Added cm: "<<cm<<endl;
	cout<<"Added m: "<<m<<endl;
}
main()
{
	Distance d1,d2,d3;
	d1.getData();
	d2.getData();
	d1.showData();
	d2.showData();
	d3.add_Distance(d1,d2);
}
