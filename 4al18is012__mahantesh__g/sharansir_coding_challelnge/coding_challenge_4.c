/*  
QUESTION: 01

Using whatever programming techniques you know, write the cleanest possible function you can think 
of to print a singly linked list in reverse. The format for the node should be a struct containing 
an integer value, val, and a next pointer to the following node.

 using c :
*/

#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;
	struct Node* next;
};


void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->next;
	}

	printf("NULL\n");
}


void push(struct Node** head, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}


void reverse(struct Node** head)
{
	struct Node* prev = NULL;   	
	struct Node* current = *head; 
	
	while (current != NULL)
	{
		
		struct Node* next = current->next;

		current->next = prev;  // fix the current node

		
		prev = current;
		current = next;
	}

	
	*head = prev;
}


int main(void)
{
	
	int keys[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(keys)/sizeof(keys[0]);

	struct Node *head = NULL;
	for (int i = n - 1; i >=0; i--)
		push(&head, keys[i]);

	reverse(&head);

	printList(head);

	return 0;
}


-------------------------------------------------------------------------------------------------------------
QUESTION: 02

Write a program that takes an integer and displays the English name of that value.

You should support both positive and negative numbers, in the range supported by a 32-bit integer 
(approximately -2 billion to 2 billion).
