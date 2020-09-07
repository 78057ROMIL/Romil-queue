#include<conio.h>
#include<stdlib.h>
#include <iostream.h>
#include<process.h>
#define n 10
int q[n];
struct Qar{
int  first, last;

Qar()

{

first = last = -1;


}

~Qar()

{

}


void Insert()
 {
int val;
char ch;
do
{
cout<<"Enter element\n";
cin>>val;
if (last == -1)
{
 last++;
first++;
q[first]=val;

}
   else if (last<n)

 {

last++;
q[last] = val;

 }
else
{
cout<<"Queue full\n";
cout<<"continue ";
cin>>ch;
}
}
while(ch=='y');
}

void topele()
{
cout<<"First element is "<<q[first];
}
void Delete()
 {
if (first == -1)
{
cout<<"Queue Empty ";
   }
 else if ((first<n)&&(first>-1))

{

cout<<"Element deleted from queue is : "<< q[first] <<endl;
first++;
   }
else
cout<<"queue finished";
}
void Display()

{
 if (first == -1)
 cout<<"Queue is empty"<<endl;
 else
{
 cout<<"Queue elements are : ";
for (int i = first; i <= last; i++)
cout<<q[i]<<" ";
cout<<endl;
}
}
};

int main()
{
clrscr();

int c;
Qar q;
cout<<"1) Insert element in queue"<<endl;
cout<<"2) Delete element from queue"<<endl;
cout<<"3) Display all the elements of queue"<<endl;
cout<<"4) Top element of queue"<<endl;
cout<<"5) Exit"<<endl;
do
{
cout<<"Enter your choice : "<<endl;
cin>>c;
switch (c)
{
case 1: q.Insert();
break;
case 2: q.Delete();
break;
case 3: q.Display();
break;
case 4: q.topele();
break;
case 5: exit(0);
}
} while(c!=5);
 getch();
return 0;
}
