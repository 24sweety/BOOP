#include<iostream.h>
#include<conio.h>
class student
{
public:
int r_no;
char name[20];
int fees;
public:
student()
{
cout<<"Enter the roll no:";
cin>>r_no;
cout<<"Enter the name:";
cin>>name;
cout<<"Enter the fees:";
cin>>fees;
}
void display()
{
cout<<endl<<r_no<<"\t"<<name<<"\t"<<fees;
}
};
int main()
{
student s;// When we create a
clrscr();
s.display();
getch();
return 0;
}