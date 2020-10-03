#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
	int info;
	struct node *link;
};

struct node *start, *end;

void create(){

	
	start=NULL;
	cout<<"LIST IS CREATED\n\n";
}

void insert_begin()
{
	
	
	struct node *temp=new node;
	
	int d;
	
	cout<<"ENTER THE ELEMNT : ";
	cin>>d;
	
	temp->info=d;
	
	if(start==NULL)
	{
		start=temp;
		end=start;
		temp->link=NULL;
	}
	
	else
	{
		temp->link=start;
		start=temp;
	}
}

void display()
{
	
	
	struct node *temp;
	
	if(start==NULL)
	{
		cout<<"LSIT IS EMPTY";
	}
	
	else
	{
		temp=start;
		
		while(temp!=NULL)
		{
			cout<<"ELEMENT : "<<temp->info<<endl;
			temp=temp->link;
		}
	}
}


void insert_last()
{
	
	
	struct node *temp=new node;
	
	int d;
	
	cout<<"ENTER THE ELEMENT : ";
	cin>>d;
	
	temp->info=d;
	
	if(start==NULL)
	{
		start=temp;
		temp->link=NULL;
		end=temp;
	}
	
	else
	{
		end->link=temp;
		end=temp;
		temp->link=NULL;
	}
}

void delete_first()
{
	
	
	struct node *del;
	
	if(start==NULL)
	cout<<"LIST IS EMPTY";
	
	else
	{
		del=start;
		start=start->link;
		delete del;
		cout<<"ELEMENT DELETED";
	}
}

void delete_last()
{
	
	struct node *del;
	
	if(start==NULL)
	cout<<"\n LIST IS EMPTY";
	
	else
	{
		del=start;
		
		while(del->link!=NULL)
		{
			end=del;
			del=del->link;	
		}	
		end->link=NULL;
		delete del;
		
		cout<<"\nELEMENT DELETED";
	}
}
void del_choice()
{
	int d;
	
	cout<<"ENTER THE ELEMNT YOU WANT TO DELETE : ";
	cin>>d;
	
	struct node *ptr,*ptr2;
	
	if(start==NULL)
	cout<<"LIST IS EMPTY";
	
	else
	{
		ptr=start;
		
		while(ptr!=NULL && ptr->info!=d)
		{
			ptr2=ptr;
			
			ptr=ptr->link;
		}
		
		if(ptr->info==d)
		{
			ptr2->link=ptr->link;
			
			delete(ptr);
			
			cout<<"ELEMENT DELETED";
		}
	}
}

void ibetween_before()
{
	int d,x;
	
	cout<<"ENTER THE DATA : ";
	cin>>d;
	
	struct node *temp=new node;
	struct node *ptr,*ptr2;
	
	temp->info=d;
	
	cout<<"ENTER THE DATA OF THE NODE BEFORE WHICH YOU WANT TO INSERT : ";
	cin>>x;
	
	if(start==NULL)
	cout<<"NOTHING TO SHOW";
	
	else
	{
		ptr=start;
		
		while(ptr->link!=NULL && ptr->info!=x)
		{
			ptr2=ptr;
			ptr=ptr->link;
		}
		
		if(ptr->info==x)
		{
			temp->link=ptr2->link;
			ptr2->link=temp;
			
			cout<<"NODE INSERTED";
		}
		
		else
		{
			cout<<"CAN'T FIND THE NODE";
		}
	}
}

void ibetween_after()
{
	int d,x;
	
	cout<<"ENTER THE DATA : ";
	cin>>d;
	
	struct node *temp=new node;
	struct node *ptr;
	
	temp->info=d;
	
	cout<<"ENTER THE DATA OF THE NODE AFTER WHICH YOU WANT TO INSERT : ";
	cin>>x;
	
	if(start==NULL)
	cout<<"NOTHING TO SHOW";
	
	else
	{
		ptr=start;
		
		while(ptr->link!=NULL && ptr->info!=x)
		{
			ptr=ptr->link;
		}
		
		if(ptr->info==x)
		{
			temp->link=ptr->link;
			ptr->link=temp;
			
			cout<<"NODE INSERTED";
		}
		
		else
		{
			cout<<"CAN'T FIND THE NODE";
		}
	}
}

void middle()
{	struct  node *ptr1 = start;
	struct node *ptr2=start;
	while(ptr2->link!=NULL && ptr2->link->link!=NULL)
	{
		ptr1 = ptr2->link;
		ptr2 = ptr2->link;
		ptr2 = ptr2->link;
	}
	
	cout<<ptr1->info;
	
}

void kfrombeg()
{
	int k;
	cout<<"enter k from beg"<<" ";
		cin>>k;
		struct node *p = start;
		int count =1;
		while(count!=k && p!=NULL)
		{
			p=p->link;
			count =count+1;
			
		}
		
		cout<<p->info<<endl;
		
}

void kfromend()
{
	int k;
	cout<<"enter k from end"<<" ";
		cin>>k;
		struct node *p = start;
		struct node *p1;
		int count1 =1;
		while(count1!=k && p!=NULL)
		{	p1=p;
			for(int ind =0;ind<k;ind++)
			{
	
			p=p->link;
		}
			count1 =count1+1;
			
		}
		
		cout<<p->info<<endl;
		
}

void hasloop()
	{	struct node *p = start;
		struct node *p1=start;
		int c=0;
		
		while(p->link!=NULL)
		{
		p1=p1->link;
		p=p->link;
		p=p->link;
		if(p1==p)
		{	c=1;
			cout<<"true";
			break;
		}
	
		}
		if(c==0)
		cout<<"false";
	}
	
void createloop()
{
struct node *p = start;
		struct node *p1=start;
		int cnc=1;
		while(p->link!=NULL)
		{	
			p =p->link;
			cnc++;
		}
	
		cout<<"enter loop position less than"<<cnc;
		cnc=1;
		int cncs;
		cin>>cncs;
		if(cncs<cnc && cncs!=0)
		{
		
		while(cncs!=cnc)
		{
			p1=p1->link;
			cnc++;
		}

		
		p->link=p1;
		cout<<"created";
	}
	else
	cout<<"cant be created";
}

void reverse()
{
	  struct node *p = start;
  struct node *p1=NULL,*temp=NULL;
  while(p!=NULL)
  {
      
      temp=p->link;
      p->link = p1;
      p1 = p;
      p=temp;
      
      
  }
  start =p1;
	}	




main()
{



	
	int n,i,c;
	cout<<"1.CREATE LIST\n2.INSERT IN BEGENNING\n3.INSERT AT ENDING\n4.DISPLAY\n5.DELETE FIRST ELEMENT\n6.DELETE LAST ELEMENT\n7.DELETE ANY ELEMENT\n8.INSERT IN BETWEEN(before)\n9.INSERT IN BETWEEN(after)\n10. middle element\n11. k from beg\n12 kfromend\n13 hasloop\n14 create loop\n 15 reverse";
	cout<<"\nENTER THE CHOICE : ";
	cin>>c;
	
	
	switch(c)
	{
		case 1: create();
				getch();
				main();
				break;
		case 2: cout<<"HOW MANY ELEMENTS YOU WANT TO INSERT : ";
				cin>>n;
				
				for(i=0;i<n;i++)
				{
					insert_begin();
				}
				getch();
				main();
				break;
				
		case 3: cout<<"HOW MANY ELEMENTS YOU WANT TO INSERT : ";
				cin>>n;
				
				for(i=0;i<n;i++)
				{
					insert_last();
				}
				getch();
				main();
				break;
				
		case 4: display();
				getch();
				main();
				break;
				
		case 5: delete_first();
				getch();
				main();
				break;
				
		case 6: delete_last();
				getch();
				main();
				break;
				
		case 7:	del_choice();
				getch();
				main();
				break;
				
		case 8:	ibetween_before();
				getch();
				main();
				break;
				
		case 9: ibetween_after();
				getch();
				main();
				break;
		case 10: middle();
				 getch();
				 main();
				 break;
		case 11: kfrombeg();
					getch();
					main();
					break;
		case 12: kfromend();
					getch();
					main();
					break;
		case 13: hasloop();
					getch();
					main();
					break;
		case 14: createloop();
					getch();
					main();
					break;
		case 15:
			reverse();
					getch();
					main();
					break;
			
				
		default:getch();main();
	}
	
	
}
