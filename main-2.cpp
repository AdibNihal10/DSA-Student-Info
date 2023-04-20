
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

//initialising
int top1=-1;
int top2=-1;
int stack1[500];
char stack2[500];
int N=4;
int choice=-1;
int fix1=-1;
int fix2=-1;
int choice2;

//queue structure to store age and year of birth
struct queue_node1{
  int data1;
  struct queue_node1*next;
}*front1=NULL,*rear1=NULL,*temp1;

//queue structure to store name
struct queue_node2{
	char data2;
	struct queue_node2*next;
}*front2=NULL,*rear2=NULL,*temp2;



//linked list structure node 1
struct list_node1{
	int data;
	struct list_node1*next;
	struct list_node1*prev;
}*head1=NULL,*tail1=NULL,*temp5,*t6,*t5;

//linked list structure node 2
struct list_node2{
	char data;
	struct list_node2*next;
	struct list_node2*prev;
}*head2=NULL,*tail2=NULL,*temp6,*t8,*t7;

//queue ADT functions
void enqueue(int);
void dequeue();
void enqueue_name(char);
void dequeue_name();

//stacks ADT functions
void push(int);
void pop();
void push_name(char);
void pop_name();


//linked list ADT functions
void insert(int);
void display();
void insert_name(char);
void display_name();
void delete_list();

//function to sort the values
void sort();

//process function
void process();

//output time delay function
void delay(int);
void delay2(int);

//MAIN FUNCTION

int main(){
	cout<<"\t\t\t-------------------------------------------------------------"<<endl;
	cout<<"\t\t\t IMPLEMENTATION OF STUDENT INFORMATION USING STACK AND QUEUE "<<endl;
	cout<<"\t\t\t-------------------------------------------------------------"<<endl<<endl;
	cout<<"\tPLEASE FOLLOW THE FOLLOWING STEPS IN ORDER "<<endl<<endl;
	cout<<"1.PRESS 1 TO ENTER FIRST NAME OF STUDENT"<<endl<<endl;
	cout<<"2.PRESS 2 TO ENTER LAST NAME STUDENT"<<endl<<endl;
	cout<<"3.PRESS 3 TO ENTER STUDENT AGE"<<endl<<endl;
	cout<<"4.PRESS 4 TO ENTER STUDENT YEAR OF BIRTH"<<endl<<endl;
	cout<<"5.PRESS 5 FOR PRINTING"<<endl<<endl;
	cout<<"6.PRESS 6 TO EXIT"<<endl<<endl;
	while(choice==-1){
	    process();

	    //queue implementaions

	    delay(1);
	    cout<<"\t\t\tConcepts of Data Structures in C++ starts now: "<<endl<<endl;
	    delay(1);
	    cout<<"\t\t\tQUEUES DATA STRUCTURE IN C++:";
		delay(1);
        cout<<"\n\nEntering of Data initially in QUEUE(enqueue) is successful."<<endl<<endl;
        delay(1);
        do{
		  cout<<"Dequeue the data using FIFO(First In First Out)concept and push the dequeued data in Stacks."<<endl;
		  cout<<"\nPress 7 to print the data using queue(dequeue):"<<endl;
		  cin>>choice2;
          if(choice2==7){
        	    cout<<"\nPrinting(Dequeueing) and Pushing the data in Stack: "<<endl<<endl;
        	    delay(1);
                dequeue_name();
                dequeue();
                delay(1);
                cout<<"\n\nDequeue of the data is successful using FIFO concept."<<endl<<endl;
          }
          else{
          	    cout<<"\nTry Again!!,Choose the correct input."<<endl<<endl;
		  }
		}while(choice2!=7);

		//stacks implementations
		delay(1);
		cout<<"\n\n\t\t\tSTACKS DATA STRUCTURE IN C++:";
		delay(1);
		cout<<"\n\nEntering of Data in STACK(push) is successful."<<endl<<endl;
		delay(1);
		do{
			cout<<"Pop the data using LIFO(Last In First Out)concept and insert the popped data in Binary Tree."<<endl;
			cout<<"\nPress 8 to print the data using stacks(pop): "<<endl;
		    cin>>choice2;
		    if(choice2==8){
			    cout<<"\nPrinting(Poping) and inserting the data in Binary Tree: "<<endl<<endl;
			    delay(1);
                pop();
                pop_name();
                delay(1);
                cout<<"\n\nPoping of the data is successful using LIFO concept."<<endl<<endl;
		    }
		    else{
		    	cout<<"\nTry Again!!,Choose the correct input."<<endl<<endl;
			}
		}while(choice2!=8);


		//linked list implementations
		delay(1);
		cout<<"\n\n\t\t\tLINKED LIST DATA STRUCTURE IN C++:";
		delay(1);
		cout<<"\n\nEntering of Data in LINKED LIST(insert) is successful."<<endl<<endl;
		delay(1);
		do{
			cout<<"Press 9 to print the data using Linked List:"<<endl;
		    cin>>choice2;
		    if(choice2==9){
		    	cout<<"\nPrinting the data using Linked List concept:"<<endl;
		    	delay(1);
			    display_name();
			    display();
			    delay(1);
			    cout<<"\n\nPrinting of the data is successful using Linked List concept."<<endl<<endl;
		    }
		    else{
		        cout<<"\nTry Again!!,Choose the correct input."<<endl<<endl;
			}
		}while(choice2!=9);

		//sorting
		delay(1);
		do{
			cout<<"For sorting the data in Linked List press 10:"<<endl;
			cin>>choice2;
			if(choice2==10){
				cout<<"\n\nSorting the values: ";
				delay(1);
		        sort();
		        cout<<"\n\nPrinting after sorting: "<<endl;
		        delay(1);
		        display_name();
		        display();
			}
			else{
				cout<<"\nTry Again!!,Choose the correct input."<<endl<<endl;
			}
		}while(choice2!=10);
		delay(1);
		cout<<"\n\n\t\t\tPROCESS ENDS HERE!!";
		delay(1);
		do{
			cout<<"\n\nPRESS -1 TO KEEP PROCESSING AND TO ENTER NEW DATA OR PRESS 0 TO STOP HERE:"<<endl;
            cin>>choice;
            if(choice!=-1&&choice!=0){
            	cout<<"\nTry Again!!,Choose the correct input."<<endl;
			}
		}while(choice!=-1&&choice!=0);
       if(choice==-1){
        delete_list();
	   }
       N=4;
       cout<<endl<<endl;
       delay(1);
   }
   if(choice==0){
    delay(1);
   	cout<<"\t\t\tTHANK YOU!!!"<<endl;

   }
	return 0;
}

//To start the process
void process(){
	char first_name[500];
	char last_name[500];
	int age;
	int dob;
	 while(choice!=5){
		    if(N==4){
			 cout<<"Enter Your First Choice: ";
			 N--;
		   }
		   else{
			 cout<<"Enter Your Next Choice: ";
		   }
	        cin>>choice;
	        cout<<endl;
            switch(choice){
		        case 1:{
			     cout<<"ENTER FIRST NAME OF STUDENT: ";
			     cin>>first_name;
			     cout<<endl;
			     int len = strlen(first_name);
			     for(int i=0;i<len;i++){
			   	    enqueue_name(first_name[i]);
			     }
			     break;
		       }
		        case 2:{
			     cout<<"ENTER LAST NAME OF STUDENT: ";
			     cin>>last_name;
			     cout<<endl;
			     int len = strlen(last_name);
			     for(int i=0;i<len;i++){
			   	    enqueue_name(last_name[i]);
				 }
			     break;
		       }
		        case 3:{
			     cout<<"ENTER STUDENT AGE: ";
			     cin>>age;
			     cout<<endl;
			     enqueue(age);
			     break;
		       }
		        case 4:{
			     cout<<"ENTER STUDENT YEAR OF BIRTH: ";
			     cin>>dob;
			     cout<<endl;
			     enqueue(dob);
			     break;
		       }
		       case 6:{
		       	 cout<<"\t\t\tTHANK YOU!!!"<<endl;

		       	 exit(0);
				 break;
			   }
		        default:{
		           if(choice==0 || choice>5){
			         cout<<"Wrong choice, Please enter correct choice  "<<endl;
			         cout<<endl;
			         break;
			       }
		       }
	        }
        }
}

//To insert age and year to queue
void enqueue(int value){
	struct queue_node1*new_node1 = new queue_node1;
	new_node1->data1=value;
	new_node1->next=NULL;
	if(front1==NULL){
		front1=new_node1;
		rear1=new_node1;
	}
	else{
		rear1->next=new_node1;
		rear1=new_node1;
	}
}

//To insert name to queue
void enqueue_name(char name){
	struct queue_node2*new_node2 = new queue_node2;
	new_node2->data2=name;
	new_node2->next=NULL;
	if(front2==NULL){
		front2=new_node2;
		rear2=new_node2;
	}
	else{
		rear2->next=new_node2;
		rear2=new_node2;
	}
}

//To display name in order
void dequeue_name(){
	temp2=front2;
	while(temp2!=NULL){
		char item = temp2->data2;
		push_name(item);

		insert_name(item);
		delay2(1);
		cout<<temp2->data2<<" ";
		temp2=temp2->next;
	}
}

//To display age and year in order
void dequeue(){
	temp1=front1;
	while(temp1!=NULL){
		int item = temp1->data1;
		push(item);

		insert(item);
		delay2(1);
		cout<<temp1->data1<<" ";
		temp1=temp1->next;

	}
}

//To push name to stack
void push_name(char item){
	stack2[++top2]=item;
}

//To push age and year to stack
void push(int item){
	stack1[++top1]=item;
}

//To display age and year in reverse order
void pop(){
	for(int i=top1;i>fix1;i--){
		delay2(1);
		cout<<stack1[i]<<" ";
	}
	fix1=top1;
}

//To display name in reverse order
void pop_name(){
	for(int j=top2;j>fix2;j--){
		delay2(1);
		cout<<stack2[j]<<" ";
	}
	fix2=top2;
}





//To insert value to the list
void insert(int data){
	struct list_node1*new_node = new list_node1;
	new_node->data=data;
	new_node->next=NULL;
	new_node->prev=NULL;
	if(head1==NULL){
		head1=new_node;
		tail1=new_node;
	}
	else{
		tail1->next=new_node;
		new_node->prev=tail1;
		tail1=new_node;
	}
}

//To insert name to the list
void insert_name(char data){
	struct list_node2*new_node = new list_node2;
	new_node->data=data;
	new_node->next=NULL;
	new_node->prev=NULL;
	if(head2==NULL){
		head2=new_node;
		tail2=new_node;
	}
	else{
		tail2->next=new_node;
		new_node->prev=tail2;
		tail2=new_node;
	}
}

//To display list1 data
void display(){
	temp5=head1;
	while(temp5!=NULL){
		delay2(1);
		cout<<temp5->data<<" -> ";
		temp5=temp5->next;
	}
}

//To display list2 data
void display_name(){
	temp6 = head2;
	while(temp6!=NULL){
		delay2(1);
		cout<<temp6->data<<" -> ";
		temp6=temp6->next;
	}
}

//To sort the values
void sort(){
	int ele1,ele2;
	t5=head1;
	while(t5->next!=NULL){
		t6=t5->next;
		while(t6!=NULL){
			if(t5->data>t6->data){
				ele1=t5->data;
				t5->data=t6->data;
				t6->data=ele1;
			}
			t6=t6->next;
		}
		t5=t5->next;
	}
	t7=head2;
	while(t7->next!=NULL){
		t8=t7->next;
		while(t8!=NULL){
			if(t7->data>t8->data){
				ele2=t7->data;
				t7->data=t8->data;
				t8->data=ele2;
			}
			t8=t8->next;
		}
		t7=t7->next;
	}
}

//To clear the list
void delete_list(){
	while(head1!=NULL){
		t5=head1;
		head1=head1->next;
		t5->next=NULL;
		delete(t5);
	}
	while(head2!=NULL){
		t7=head2;
		head2=head2->next;
		t7->next=NULL;
		delete(t7);
	}
}
//To produce time delay in output
void delay(int number_of_seconds) {
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds)
        ;
}
void delay2(int number_of_seconds) {
    int milli_seconds = 100 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds)
        ;
}
