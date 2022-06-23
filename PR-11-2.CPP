#include<iostream.h>
#include<conio.h>

class base
{
public:
	int base_i;
	void disp_base()
		   {
		   cout<<"From base class:"<<base_i<<endl;
		   }
};

class derived:public base
{
public:
	int derived_i;
	void disp_derived()
		   {
		   cout<<"From base class:"<<base_i<<endl;
		   cout<<"From derived class:"<<derived_i<<endl;
		   }
};

class test:public derived
{
public:
	int test_i;
	void disp_test()
		   {
		   cout<<"From base class:"<<base_i<<endl;
		   cout<<"From derived class:"<<derived_i<<endl;
		   cout<<"From test class:"<<test_i<<endl;
		   }
};


int main()
{
base b;
derived d;
test t;
clrscr();

b.base_i=5;

d.base_i=10;
d.derived_i=15;

t.base_i=20;
t.derived_i=30;
t.test_i=40;

cout<<" Base class"<<endl;
b.disp_base();
cout<<endl;

cout<<" Derived class"<<endl;
d.disp_base();
d.disp_derived();
cout<<endl;

cout<<" Test class"<<endl;
t.disp_base();
t.disp_derived();
t.disp_test();
cout<<endl;


return 0;

}