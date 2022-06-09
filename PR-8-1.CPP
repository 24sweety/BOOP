#include<iostream.h>
#include<conio.h>

class temp
{
private:
int x,y;
public:
void get()
 {
 cout<<"Enter the value of x"<<endl;
 cin>>x;
 cout<<"Enter the value of y"<<endl;
 cin>>y;
 }
int max(temp t)
 {
 if(t.x<t.y)
  {
   cout<<"Y is max"<<endl;
  }
 else
  {
   cout<<"X is max"<<endl;
  }
  return(x,y);
 }
};

int main()
{
temp t;
clrscr();
t.get();
t.max(t);
return 0;
}