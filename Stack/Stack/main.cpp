//
//  main.cpp
//  Stack
//
//  Created by Chairman on 2022/09/13.
//  Copyright © 2022 Edgar_Legacy_Chairman. All rights reserved.
//


#include <iostream>
using namespace std;
//declare a structure to store the data and the link
struct Node {
   int data;
   struct Node *next;
};

//initialize top of the stack
struct Node* top = NULL;

//create class Stack
class Stack
{
    //declare and define the functions
    public:
    int count = 0; //used for storing size of the stack
    //push the items into the stack
    void push(int item)
    {
        //linked list to dynamically allocates the size
        struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
        newnode->data = item; //insert item
        newnode->next = top; //create a link
        top = newnode;
        count++; //increment the size
    }
    //method to pop the top of the stack item
    void pop()
    {
        //check if the stack is empty
        if(isEmpty())
            cout<<"Stack Underflow"<<endl;
        else
        {
            //remove the top item
            cout<<"Popped element: "<< peek() <<endl;
            top = top->next;
            --count;
        }
    }

    //return the top of the stack
    int peek()
    {
        return top->data;
    }
    
    //checks if the stack is empty or not
    bool isEmpty()
    {
        if(top == NULL)
            return true;
        else
            return false;
    }
    
    //returns the size of the stack
    int size()
    {
        return count;
    }
    
    //display items of the stack
    void display()
    {
        struct Node* node; //create temporary node
        if(isEmpty()) //check if the stack is empty
            cout<<"stack is empty";
        else
        {
            //iterate the linked list and print stack items
            node = top;
            cout<<"Stack elements are: ";
            while (node != NULL)
            {
                cout<< node->data <<" ";
                node = node->next;
            }
        }
        cout<<endl;
    }
    
    
};

int main()
{
    
   int choice, item;
   Stack S; //object of the class Stack
   //menu for the user choice
   cout<<"1. Push()\n";
   cout<<"2. Pop()\n";
   cout<<"3. Peek()\n";
   cout<<"4. check()\n";
   cout<<"5. Size()\n";
   cout<<"6. Items()\n";
   cout<<"7. Exit\n";
   do {
      cout<<"Enter choice: "<<endl;
      cin>>choice; //read choice
      switch(choice) {
         case 1: {
             //read the item and push it into the stack
            cout<<"Enter items to be pushed:"<<endl;
            cin>>item;
            S.push(item);
            break;
         }
         case 2: {
             //remove the top of the stack
            S.pop();
            break;
         }
         case 3: {
             //print top of the stack and check if the tack is empty
            cout<<"Top of the stack: ";
            if(S.isEmpty())
                cout<<"-1 (Stack is empty)"<<endl;
            else
                cout<<S.peek()<<endl;
        
            break;
         }
         case 4: {
             //check and print the stack is empty or not
            if(S.isEmpty())
                cout<<"Stack is empty"<<endl;
            else
                cout<<"Stack has "<<S.size()<<" items"<<endl;
            break;
         }
         
        case 5: {
            //print size of the stack
            cout<<"Size of the stack: ";
            cout<<S.size()<<endl;
            break;
         }
        case 6: {
            //print the items of the stack
            S.display();
            break;
         }
         
         case 7:{
             exit(0);
             break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(choice!=7);
   return 0;
}
