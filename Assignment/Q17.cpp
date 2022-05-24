#include<iostream>
using namespace std;
class College
{
	int cid;
	char cname[40];
	
	public:
		College()
		{
			cout<<"Enter College Name= ";
			cin>>cname;
			cout<<"Enter College Id= ";
			cin>>cid;
		}
		void getCollege()
		{
			cout<<"College Name: "<<cname<<endl;
			cout<<"College Id: "<<cid<<endl;
		}
};
class Department : public College
{
	int did;
	char dname[30];
	
	public:
		Department()
		{
			cout<<"Enter Department Name= ";
			cin>>dname;
			cout<<"Enter Department Id= ";
			cin>>did;
		}
		void getDepartment()
		{
			cout<<"Department Name: "<<dname<<endl;
			cout<<"Department Id: "<<did<<endl;
		}
};
class Sports
{
	int spid;
	char spname[20];
	
	public:
		Sports()
		{
			cout<<"Enter Sport Name= ";
			cin>>spname;
			cout<<"Enter Sport Id= ";
			cin>>spid;
		}
		void getSport()
		{
			cout<<"Sport Name: "<<spname<<endl;
			cout<<"Sport Id: "<<spid<<endl;
		}
};
class Student : public Department,public Sports
{
	int stid;
	char stname[30];
	
	public:
		Student()
		{
			cout<<"Enter Student Name= ";
			cin>>stname;
			cout<<"Enter Student Id= ";
			cin>>stid;
		}
		void getStudent()
		{
			cout<<"Student Name: "<<stname<<endl;
			cout<<"Student Id: "<<stid<<endl;
		}
};
main()
{
	Student s;
	cout<<"\nDetails: \n";
	s.getCollege();
	s.getDepartment();
	s.getSport();
	s.getStudent();
}
