#include<iostream>
using namespace std;

class number{
	public :
		int a;
		
		number()
		{
			cout<<"Enter value of a= ";
			cin>>a;
		}
};
class square : public number{
	public :
		int square;
	setdata()
	{
		square = a * a ;
		cout<<"square of no. is = "<<square<<endl;
	}
		
};
class cube : public number{
	public :
		int cube;
	setdata()
	{
	   cube = a * a * a;
		cout<<"cube of no. is = "<<cube<<endl;
	}
		
};
main()
{
	square s1;
	s1.setdata();
    cube c1;
	c1.setdata();
	
	
}


