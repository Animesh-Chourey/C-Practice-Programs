#include<iostream>
using namespace std;
class Solid
{
	protected:
	    float radius,height;
	
	public:
		void getData()
		{
			cout<<"Enter radius= ";
			cin>>radius;
			cout<<"Enter heught= ";
			cin>>height;
		}
		virtual void volume()=0;
};
class Sphere: public Solid
{
	float sp_vol;
	public:
		void volume()
		{
			sp_vol=1.3*3.14*radius*radius*radius;
			cout<<"Volume of Sphere: "<<sp_vol<<endl;
		}
};
class Cylinder: public Solid
{
	float cy_vol;
	public:
		void volume()
		{
			cy_vol=3.14*radius*radius*height;
			cout<<"Volume of Cylinder: "<<cy_vol<<endl;
		}
};
class Cone: public Solid
{
	float co_vol;
	public:
		void volume()
		{
			co_vol=0.3*3.14*radius*radius*height;
			cout<<"Volume of Cone: "<<co_vol<<endl;
		}
};
main()
{
	Sphere s;
	cout<<"Enter details of Sphere: \n";
	s.getData();
	s.volume();
	Cylinder cy;
	cout<<"\nEnter details of Cylinder: \n";
	cy.getData();
	cy.volume();
	Cone c;
	cout<<"\nEnter details of Cone: \n";
	c.getData();
	c.volume();
}
