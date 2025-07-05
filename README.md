# linked-list-
*COMPANY*: CODTECH IT SOLUTIONS PVT.LTD
**NAME*: SHYAM CHARAN MURMU
*INTERN ID*: CT04DG256
*DOMAIN*: C LANGUAGE
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH KUMAR
#This C program implements a basic singly linked list with three core functionalities: inserting a new node at the end of the list, deleting a node by value, and displaying the current elements in the list. The program is designed to be interactive, using a menu-driven interface that allows users to perform these operations repeatedly until they choose to exit. It demonstrates fundamental concepts of dynamic memory allocation, pointer manipulation, and data structure management in C, making it a valuable learning tool for beginners exploring linked lists.

The linked list is constructed using a user-defined structure called `Node`, which contains two fields: an integer `data` to store the value of the node, and a pointer `next` to link to the next node in the list. The list is dynamically managed using pointers, allowing it to grow or shrink as elements are inserted or deleted. The head of the list is maintained using a pointer that is updated as needed during operations.

The insertion operation adds a new node to the end of the list. When the user selects this option, the program prompts for an integer value, creates a new node with that value, and appends it to the list. If the list is initially empty, the new node becomes the head. Otherwise, the program traverses the list to find the last node and links the new node to it. This approach ensures that the list maintains the order in which elements are inserted.

The deletion operation removes a node with a specified value from the list. The program searches for the first occurrence of the value and, if found, adjusts the pointers to exclude the node from the list. If the node to be deleted is the head, the head pointer is updated to the next node. If the value is not found, the program notifies the user. This function includes proper memory deallocation using `free()` to prevent memory leaks, demonstrating good memory management practices.

The display operation prints all the elements currently in the list. If the list is empty, the program informs the user. Otherwise, it traverses the list from the head to the end, printing each node’s data value. This provides a clear view of the list’s contents and helps users verify the results of their insertions and deletions.

The main function serves as the control center of the program. It initializes the list, presents the menu, and handles user input. The loop continues to prompt the user until the exit option is selected. Input validation is included to handle invalid entries gracefully, ensuring a smooth user experience.

Overall, this program is a concise and effective demonstration of singly linked list operations in C. It emphasizes dynamic memory usage, pointer manipulation, and modular function design. The clear structure and interactive interface make it an excellent example for students and developers looking to understand the inner workings of linked lists and how to implement them in a real-world context.
# OUTPUT :-
<img width="1918" height="1022" alt="Image" src="https://github.com/user-attachments/assets/b31be671-72ce-41bb-8a7c-4cac0998c897" />
