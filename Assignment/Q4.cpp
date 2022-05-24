	#include<iostream>
	using namespace std;
	class Employee
	{
		char name[30],designation[30],dept[30];
		float sal,hra,pf,da,bs;
		
		public:
		void setDetails()
		{
			cout<<"Enter the Name of Employee: ";
			cin>>name;
			cout<<"Enter the Department of the employee: ";
			cin>>dept;
			cout<<"ENter the designation: ";
			cin>>designation;
			cout<<"Enter the Basic Salary: ";
			cin>>bs;			
		}
		
		void salary()
		{
			hra=(0.1*bs);
			da=(0.75*bs);
			pf=(0.12*bs);
			sal=bs+hra+da-pf;
		}
		
		void getDetails()
		{
			cout<<"Name= "<<name<<endl;
			cout<<"Department= "<<dept<<endl;
			cout<<"Designation= "<<designation<<endl;
			cout<<"Total Salary= "<<sal<<endl;
		}
	};
	main()
	{
		Employee e;
		e.setDetails();
		e.salary();
		e.getDetails();
	}
