//
//  main.cpp
//  carwash
//
//  Created by Chairman on 2022/09/13.
//  Copyright © 2022 Edgar_Legacy_Chairman. All rights reserved.
//

#include <iostream>
using namespace std;

//assumed size of the Queue
#define SIZE 5

//create a Queue class
class Queue
{
    //decare private variables
        string *carArrQueue;
        int front, rear, count, capacity;
    //declare methods and their definitions
    public:
    //constructor which initalizes the private value
        Queue()
        {
            carArrQueue = new string[SIZE];
            capacity = SIZE;
            front = count = 0;
            rear = -1;
        }
        
        //destructor which removes the allocated memory
        ~Queue()
        {
            delete[] carArrQueue;
        }
        
        //insert the item at the rear of the queue
        void enqueue(string item)
        {
            rear = rear + 1;
            carArrQueue[rear] = item;
            count++; //increment the counter
            
        }
        
        //remove the items from the front of the queue
        void dequeue()
        {
            // check if the queue is Underflow
           // int x;
            if (isEmpty())
                cout << "Queue is Empty"<<endl;
            
            else
            {
                //if the queue has items then remove the items
               // int x = arrQueue[front];
                cout << "Removed item from the Queue: " << carArrQueue[front] << endl;
                front = front + 1;
                count--; //decrement the count
               
            }
            
        }
          //returns the size of the Queue
        int size()
        {
            return count;
        }
        
        //boolean method which returns true of the queue has no items
        bool isEmpty()
        {
            if(size() == 0)
                return true;
            else
                return false;
        }
        
        //displays the items of the Queue
        void display()
        {
            if(isEmpty())
                cout<<"Queue is empty"<<endl;
            else
            {
                cout<<"Items in the Queue: ";
                for(int i=front; i<=rear;i++)
                    cout<<carArrQueue[i]<<" ";
            }
            cout<<endl;
        }
 
};

int main()
{
    
   int choice;
   Queue Q; //object of the class Queue
   //menu for the user choice
   cout<<"1. Enqueue\n";
   cout<<"2. Dequeue\n";
   cout<<"3. Size of the Queue\n";
   cout<<"4. Items in the Queue\n";
   cout<<"5. Exit\n";
   do {
      cout<<"Enter choice: "<<endl;
      cin>>choice; //read choice
      switch(choice)
      {
         case 1: {
             //read the item and push it into the Queue
             if (Q.size() == SIZE)
                cout << "Queue is Full"<<endl;
            else
            {
                cout<<"Enter item to the Queue: ";
                string item;
                cin>>item;
                Q.enqueue(item);
            }
            break;
         }
         case 2: {
             //remove the top of the Queue
            Q.dequeue();
            break;
         }
         
        case 3: {
            //print size of the Queue
            cout<<"Size of the Queue: ";
            cout<<Q.size()<<endl;
            break;
         }
        case 4: {
            //print the items from the Queue
            Q.display();
            break;
         }
         
         //exit the loop if the user enters 6
         case 5:{
             exit(0);
             break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
      cout<<endl;
   }while(choice!=5);
   return 0;
}
