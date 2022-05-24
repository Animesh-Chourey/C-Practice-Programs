#include<iostream>
using namespace std;
class College
{
	int cid;
	char cname[30];
	
	friend class Student;
};
class Student : public College
{
	int sid;
	char sname[30];
	 public:
	 	void getData()
	 	{
	 		cout<<"Enter College name= ";
	 		cin>>cname;
	 		cout<<"Enter COllege ID= ";
	 		cin>>cid;
	 		cout<<"Enter Student Name= ";
	 		cin>>sname;
	 		cout<<"Enter Student ID= ";
	 		cin>>cid;
		}
		void showData()
		{
			cout<<"College Name= "<<cname<<endl;
			cout<<"College ID= "<<cid<<endl;
			cout<<"Student Name= "<<sname<<endl;
			cout<<"Student ID= "<<sname<<endl;
		}
};
main()
{
	Student s;
	s.getData();
	s.showData();
}
