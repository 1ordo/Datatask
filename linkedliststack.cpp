#include <iostream>
using namespace std;
class node
{
    public:
    node(){next=NULL;}
    public:
    int data;
    node* next;
};

class list
{
public:
node* front ;
list(){front=NULL;}
     
     
     bool isempty ()
    {
        return(front==NULL);
    }
    
     void push(int element)
    {
        node*newnode=new node;
        newnode->data=element;

            if (isempty())
            {newnode->next=NULL;
            front=newnode;}
            else
            {newnode->next=front;
            front=newnode;}
        
    }
    void pop()
    {
        if (isempty()) cout<<"stack is empty"<<endl;
            
        else 
        {   
            node*pointer = front;
            front=front->next;
           
            delete pointer;
            
        }
        
    }
    void peek() 
    {
        if (isempty())
        {
            cout<<"stack is empty "<<endl;
            
        }
        else{
                cout<<front->data;
            }
    }
   
    void print()
    { node*temp=front;
    if (isempty()) {cout<<"stack is empty"<<endl;}
    else 
    {while (temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;

            }}}};





int main (){
int element,opt;
int loop = 1 ;
list* nwelist = new list();

while (loop == 1){
cout<<endl<<"Enter 1 for push"<<endl<<"2 for pop"<<endl<<"3 peek"
<<endl<<"4 for print ";
cin>>opt;
cout<<endl;
 switch (opt){
case 1: 
cout<<"enter the element you want to push ";
 cin>> element;
 nwelist->push(element);
 nwelist->print();
break;
case 2 :
 nwelist->pop();
 nwelist->print();
  break;
case 3:
nwelist->peek();
break;
 case 4:
nwelist->print();
break;  
default:
break;}
loop =0 ;
cout<< " enter 1 to continue or 0 to exit";
cin>>loop;
    
if (loop!=1)
{break;}
}}

