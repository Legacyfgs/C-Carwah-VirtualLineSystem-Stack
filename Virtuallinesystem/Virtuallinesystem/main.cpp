//
//  main.cpp
//  Virtuallinesystem
//
//  Created by Chairman on 2022/09/13.
//  Copyright © 2022 Edgar_Legacy_Chairman. All rights reserved.
//


#include <iostream>
#include <cstring>
using namespace std;

//create structure to hold customer name and link
struct node
{
    string customerName;
    struct node *next;
};

//declare two pointer variables

class Customer
{
        struct node *ptrF, *ptrR;
    //function to add customer
    public:
        Customer()
        {
            ptrF = ptrR = NULL;
        }
        
        void addCustomer()
        {
            struct node *ptr;
            string item;
            //dyamic allocation of the size
            ptr = new node;
          //ask the user to read customer name
            std::cout<<endl<<"Enter Customer name: ";
            cin>>item;
            ptr -> customerName = item;
            //if the front is null then add to font
            if(ptrF == NULL)
            {
                ptrF = ptrR = ptr;
                ptrF -> next = ptrR -> next = NULL;
            }
            else   //otherwise add customer name to the next
            {
                ptrR->next = ptr;
                ptrR = ptr;
                ptrR->next = NULL;
            }
             
        }
        
        //this function prints the first customer
        void callCustomer()
        {
            struct node *ptr;
            //check if the line is empty or not
            ptr = new node;
            if(ptrF == NULL)
                //if it is emptu print the message
                std::cout<<"There is no Customer for Now\n";
            else   //otherwise print the first customer
            {
                ptr = ptrF;
                std::cout<<"First customer is: "<< ptr->customerName<<endl;
                ptrF = ptrF -> next;  //removes that customer
                //frees from the line
                delete ptr;
            }
        }
};

int main()
{
    
    int choice = 0;
    Customer C;
    while(choice != 3)
    {
        //create menu based system
        std::cout<<"\n******** Welcome to Virtual line system ************\n\n";
        std::cout<<"1. Call a customer\n";
        std::cout<<"2. Add a customer\n";
        std::cout<<"3. Quit\n";
        std::cout<<"Enter option: ";
        
        //read the choice
        cin>>choice;
        switch(choice)
        {
            case 1:  //if the option is 1 then call the customer
                C.callCustomer();
                break;
            
            case 2:  //add the customer to the line
                C.addCustomer();
                break;
    
            case 3:  //exit if the user enters 3
                std::cout<<"Quitting!!";
                exit(0);
                break;
            
            default:
                std::cout<<"Invalid choice\n";
        }
    }
    return 0;
}

