#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
int data; 
struct Node* next; 
}; 
void insertNode(struct Node** head, int value) { 
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
newNode->data = value; 
newNode->next = NULL; 
if (*head == NULL) { 
*head = newNode; 
} else { 
struct Node* temp = *head; 
while (temp->next != NULL) 
temp = temp->next; 
temp->next = newNode; 
} 
} 
void deleteNode(struct Node** head, int value) { 
if (*head == NULL) { 
printf("The list is empty. Nothing to delete.\n"); 
return; 
} 
struct Node* curr = *head; 
struct Node* prev = NULL; 
while (curr != NULL && curr->data != value) { 
prev = curr; 
curr = curr->next; 
} 
if (curr == NULL) { 
printf("Element %d not found in the list.\n", value); 
return; 
} 
if (prev == NULL) { 
*head = curr->next; 
} else { 
prev->next = curr->next; 
} 
free(curr); 
printf("Element %d successfully deleted.\n", value); 
} 
void displayList(struct Node* head) { 
if (head == NULL) { 
printf("The list is currently empty.\n"); 
return; 
} 
printf("Elements in the list: "); 
struct Node* ptr = head; 
while (ptr != NULL) { 
printf("%d ", ptr->data); 
ptr = ptr->next; 
} 
printf("\n"); 
} 
int main() { 
struct Node* head = NULL; 
int choice, num; 
while (1) { 
printf("\n[1] Insert [2] Delete [3] Display [4] Exit\nEnter your choice: "); 
if (scanf("%d", &choice) != 1) { 
printf("Invalid input. Try again.\n"); 
break; 
} 
switch (choice) { 
case 1: 
printf("Enter value to insert: "); 
scanf("%d", &num); 
insertNode(&head, num); 
break; 
case 2: 
printf("Enter value to delete: "); 
scanf("%d", &num); 
deleteNode(&head, num); 
break; 
case 3: 
displayList(head); 
break; 
case 4: 
printf("Program terminated.\n"); 
return 0; 
default: 
printf("Invalid choice. Please select a valid option.\n"); 
} 
} 
return 0; 
} 
