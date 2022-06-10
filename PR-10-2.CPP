#include<iostream.h>
#include<conio.h>
class student
{
public:
int r_no; +
char name[20];
int fees;
public:
student();
void display();
};
student::student(){
cout<<"Enter the roll no:";
cin>>r_no;
cout<<"Enter the name:";
cin>>name;
cout<<"Enter the fees:";
cin>>fees;
}
void student::display()
{
cout<<endl<<r_no<<"\t"<<name<<"\t"<<fees;
}
int main()
{
student s;
clrscr();
s.display();
getch();
return 0;
getch();
}
