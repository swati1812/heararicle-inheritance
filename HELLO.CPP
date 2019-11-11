#include<iostream.h>
#include<conio.h>

class name
{ clrscr();
  char a[20],b[20];
  public :
   void read_name()
     {
	cout<<"Enter your name :"<<endl;
	cin>>a;
	cout<<"Enter your father name :"<<endl;
	cin>>b;
     }
   void show_name()
     {
     cout<<"Name : "<<a<<endl;
     cout<<"Father name :"<<b<<endl;
     }
};
class sc : public name
{
   int a;
   char b[10];

   public :
   void read_sc()
     {
       read_name();
       cout<<"Enter your class name :"<<endl;
       cin>>a;
       cout<<"Enter your subject name :"<<endl;
       cin>>b;
     }
   void show_sc()
     {
       show_name();
       cout<<"Class :"<<a<<endl;
       cout<<"Subject :"<<b<<endl;
     }
}r;

class co : public name
{
  int a;
  char b[10];
  public :
     void read_co()
       {
	read_name();
	cout<<"Enter your college id :";
	cin>>a;
	cout<<"Enter your branch :";
	cind>>b;
       }
     void show_co()
       {
       show_name();
       cout<<"College id : "<<a<<endl;
       cout<<"Branch : "<<b<<endl;
       }
}p;


   void main()
    {
      cout<<"Enter your school details"<<endl;
      r.read_sc();
      cout<<"Enter your College details "<<endl;
      p.read_co();
      cout<<"Print the details for school "<<endl;
      r.show_sc();
      cout<<"Print your details for college "<<endl;
      p.show_co();
      getch();
    }



