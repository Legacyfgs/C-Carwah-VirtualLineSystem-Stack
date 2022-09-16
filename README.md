# C-Carwash-VirtualLineSystem-Stack

This program displays a menu with the following items:.

                                    ******** Welcome to Virtual line system ************
1. Call a customer 
2. Add a customer 
3. Quit

 When option 1 is selected, if there is no customer in the line, give some warning such as there is no customer for now. Otherwise, print the name of the first customer in the line and remove it from the line.
 When option 2 is selected, ask for the name of the customer and add the customer to the end of the line.
 When option 3 is selected, the program exits/terminate.

// Explanation 

The customer name comes first and is removed first, and the new customer is added to the end of the line, therefore this follows the queue data structure.
The Pointer ad linked list is used for the dynamic size of the line. 
The pointers store the address of another variable, in this program, the pointer is a link in the linked list where one node store the address of the next node.
The callCustomer() function prints the front of the line if any customer is there otherwise prints the error message. 
addCustomer() function adds the customer name into the line in the queue order. 



                                               ************* Stack *************
                                               
I've Implemented a class called Stack using a Link data structure that solves the problem above. The stack should have the following methods:
 push(item)
 pop()
 peek()
 isEmpty() 
 size()

I've Implemented a class called Stack using a Link data structure that solves the problem above. The stack should have the following methods:
 push(item)
 pop()
 peek()
 isEmpty() 
 size()

// Explanation 

The program is menu-based and used structure and class.
The push() method is used to add the items to the stack
The pop() removes the top of the stack, and peek() is used to return the top of the stack.
isEmpty() is a bool type method used to check whether the stack is empty or not.
size() method returns the entire size of items in the stack.

                                              ************* Car Wash *************
                                              
There is a local car wash that gives service at a low price. As a result, a lot of people want to have their cars washed there. The cars queue in line based on their arrival time. The car that arrives first is washed first. Remember you can only park your car in the queue if it is not full.
 a class called Queue that implements and simulates the above scenario using a queue data structure. The class should have the following methods:
 
 enqueue(item)
 dequeue()
 isEmpty()
 size()

The class queue consistes of private data members and public functions. 
The enqueue() function adds cars to the queue while the dequeue() function removes the arrived car from the queue.
The sixe() function returns the size of the line that s the total number in the line.
Here, it is considered that the maximum size is 5.
isEmpty() function is a boolean function that returns whether the line is empty or not.
