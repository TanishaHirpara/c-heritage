#include<iostream>
using namespace std;

class A{
	public :
		int employeeid; 
		char employeename[100];
		char employeerole[100];
		char employeesalary[100];
		char employeeexperience[100];
		char companyname[100];
		char employeeaddress[100];
		char employeeemail[100];
		char employeecontactno[100];
		
		void setter()
		{
			cout<<"Enter employee id = ";
			cin>>employeeid;
			cout<<"Enter employee name = ";
			cin>>employeename;
			cout<<"Enter employee role = ";
			cin>>employeerole;
			
		}
};
class B : public A{
	public :
		void setter()
		{
			cout<<"Enter employee salary = ";
			cin>>employeesalary;
			cout<<"Enter employee experience = ";
			cin>>employeeexperience;
			
		}
};
class C : public B{
	public :
		void setter()
		{
			cout<<"Enter employee company name = ";
			cin>>companyname;
			cout<<"Enter employee address = ";
			cin>>employeeaddress;
			
		}
		void getter()
		{
		   cout<<"Enter employee name = ";
		   cin>>employeename;
	       cout<<"Enter employee role = ";
		   cin>>employeerole;
		   cout<<"Enter employee salary = ";
		   cin>>employeesalary;	
		   
		}
};
class D : public C{
	public :
		void setter()
		{
			cout<<"Enter employee email = ";
			cin>>employeeemail;
			cout<<"Enter employee contact no. = ";
			cin>>employeecontactno;
			
		}
		void getter()
		{
			cout<<"Enter employee id = ";
			cin>>employeeid;
			cout<<"Enter employee name = ";
			cin>>employeename;
			cout<<"Enter employee role = ";
			cin>>employeerole;
			cout<<"Enter employee salary = ";
			cin>>employeesalary;
			cout<<"Enter employee experience = ";
			cin>>employeeexperience;
			cout<<"Enter employee company name = ";
			cin>>companyname;
			cout<<"Enter employee address = ";
			cin>>employeeaddress;
			cout<<"Enter employee email = ";
			cin>>employeeemail;
			cout<<"Enter employee contact no. = ";
			cin>>employeecontactno;
		}
};
main()
{
	D d1;
	d1.setter();
	d1.getter();
	
	
}
