#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{

int data;
node *ptr;

};
class Stack
{
node *first,*last,*temp,*p;
public:
Stack()
{
first=last=NULL;
 }
 void push()
{
int value;
cout<<"\nEnter the number to be pushed : ";

cin>>value;
p = new node;
p->data = value;
p->ptr = NULL;
if(first==NULL)
{
first = last = p;
last->ptr = NULL;
}
else
{
last->ptr = p;
last = p;
p->ptr = NULL;
}
}
void pop()
{
temp= new node;

if(first==NULL)
cout<<"\nStack is Empty";
else
{
cout<<"\nDeleted element is : "<<first->data;
temp=first;

first=first->ptr;
delete temp;
}

}
void topele()

{
cout<<"First element is "<<first->data;
}
void display()
{
temp= new node;
cout<<"\n Queue elements are \n";
temp=first;
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->ptr;
}
cout<<"NULL";
}
void clear()
{
node *ptr1 = first;
while(ptr1 != NULL)
{
cout<<ptr1->data<<"->";
node *temp = ptr1->ptr;
delete ptr1;
ptr1 = temp;
}
cout<<"NULL\n";
}

};
void main()
{
clrscr();
Stack s;
int ch;
do
{
cout<<"\n1.PUSH\n2.POP\n3.CLEAR\n4.Top element\n5.Display\n6.Exit";
cin>>ch;
switch(ch)
{

case 1:s.push();
       break;
case 2:s.pop();
       break;
case 3:s.clear();
       break;
case 4:s.topele();
       break;
case 5:s.display();
       break;
case 6: exit(0);
}
}while(ch!=6);
getch();
}