#include<iostream>
using namespace std;

class shape{
	public :
		int w, h;
		
		shape()
		{
			cout<<"Enter width= ";
			cin>>w;
			cout<<"Enter height = ";
			cin>>h;
		}
};
class rectangle : public shape{
	public :
		int rarea;
	area()
	{
		rarea = w * h;
		cout<<"area of rectangle is = "<<rarea<<endl;
	}
		
};
class triangle : public shape{
	public :
		int tarea;
	area()
	{
	   tarea = w * h/2;
		cout<<"area of triangle is = "<<tarea<<endl;
	}
		
};
main()
{
	rectangle r1;
	r1.area();
	triangle t1;
	t1.area();
	
	
}


