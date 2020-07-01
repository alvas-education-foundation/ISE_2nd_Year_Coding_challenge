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
/*

	Question: 2)

	Write a program that takes an integer and displays the English name of that value.

	You should support both positive and negative numbers, in the range supported by a 32-bit integer 
	(approximately -2 billion to 2 billion).

*/

#include <string>
#include <iostream>

using namespace std;

string num_to_text[] = { 
    "", "one", "two", "three", "four", "five", 
    "six", "seven", "eight", "nine", "ten", 
    "eleven", "twelve", "thirteen", "fourteen", 
    "fifteen", "sixteen", "seventeen", "eighteen", 
    "nineteen" };

string tens_to_text[] = { "", "", "twenty", "thirty", 
    "forty", "fifty", "sixty", "seventy", "eighty", 
    "ninety" };

string power_to_text[] = { "", "thousand", "million", "billion" };

string padIfNeeded (string ans)
{
        if ( ans == "" )
        {
                return "";
        }
        return " " + ans;
}

string translateHundred (int hundred_chunk)
{
        // handle special cases in the teens
        if ( hundred_chunk < 20 ) {
                return num_to_text[ hundred_chunk ];
        }
        int tens = hundred_chunk / 10;
        int ones = hundred_chunk % 10;
        return tens_to_text[ tens ] + padIfNeeded( num_to_text[ ones ] );
}


string translateThousand (int thousand_chunk)
{
        if ( thousand_chunk < 100 )
        {
                return translateHundred( thousand_chunk );
        }
        else
        {
                int hundreds = thousand_chunk / 100;
                int hundred_chunk = thousand_chunk % 100;
                return num_to_text[ hundreds ] 
                    + " hundred" 
                    + padIfNeeded( translateHundred( hundred_chunk ) );
        }
}
                
                
int main()
{
        int n;
        cin >> n;
        string number;
        bool is_negative = false;
        if ( n < 0 ) 
        {
                is_negative = true;
                n *= -1;
        }

        int chunk_count = 0;
        while ( n > 0 )
        {
                if ( n % 1000 != 0 ) {
                        number = translateThousand( n % 1000 ) 
                            + padIfNeeded( power_to_text[ chunk_count ] 
                            + padIfNeeded( number ) );
                }
                n /= 1000;
                chunk_count++;
        }       
        if ( number == "" )
        {
                number = "zero";
        }
        if ( is_negative )
        {
                number = "negative " + number;
        }
        cout << number << endl;
}