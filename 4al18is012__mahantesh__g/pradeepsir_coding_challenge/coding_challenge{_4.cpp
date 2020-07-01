/*
task: 1) Write a C++ Program Create a linked list and Append the nodes using class and object.


*/


#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

// only for the 1st Node
void initNode(struct Node *head,int n){
	head->data = n;
	head->next =NULL;
}

// apending
void addNode(struct Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

void insertFront(struct Node **head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = *head;
	*head = newNode;
}

struct Node *searchNode(struct Node *head, int n) {
	Node *cur = head;
	while(cur) {
		if(cur->data == n) return cur;
		cur = cur->next;
	}
	cout << "No Node " << n << " in list.\n";
}

bool deleteNode(struct Node **head, Node *ptrDel) {
	Node *cur = *head;
	if(ptrDel == *head) {
		*head = cur->next;
		delete ptrDel;
		return true;
	}
	
	while(cur) {
		if(cur->next == ptrDel) {
			cur->next = ptrDel->next;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
}

/* reverse the list */
struct Node* reverse(struct Node** head) 
{
	Node *parent = *head;
	Node *me = parent->next;
	Node *child = me->next;

	/* make parent as tail */
	parent->next = NULL;
	while(child) {
		me->next = parent;
		parent = me;
		me = child;
		child = child->next;
	}
	me->next = parent;
	*head = me;
	return *head;
}

/* Creating a copy of a linked list */
void copyLinkedList(struct Node *node, struct Node **pNew)
{
	if(node != NULL) {
		*pNew = new Node;
		(*pNew)->data = node->data;
		(*pNew)->next = NULL;
		copyLinkedList(node->next, &((*pNew)->next));
	}
}

/* Compare two linked list */
/* return value: same(1), different(0) */
int compareLinkedList(struct Node *node1, struct Node *node2)
{
	static int flag;

	/* both lists are NULL */
	if(node1 == NULL && node2 == NULL) {
		flag = 1;
	}
	else {
		if(node1 == NULL || node2 == NULL) 
			flag = 0;
		else if(node1->data != node2->data) 
			flag = 0;
		else
			compareLinkedList(node1->next, node2->next);
	}

	return flag;
}

void deleteLinkedList(struct Node **node)
{
	struct Node *tmpNode;
	while(*node) {
		tmpNode = *node;
		*node = tmpNode->next;
		delete tmpNode;
	}
}

void display(struct Node *head) {
	Node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}

int main() 
{
	struct Node *newHead;
	struct Node *head = new Node;
	
	initNode(head,10);
	display(head);

	addNode(head,20);
	display(head);

	addNode(head,30);
	display(head);

	addNode(head,35);
	display(head);

	addNode(head,40);
	display(head);

	insertFront(&head;,5);
	display(head);

	int numDel = 5;
	Node *ptrDelete = searchNode(head,numDel);
	if(deleteNode(&head;,ptrDelete)) 
		cout << "Node "<< numDel << " deleted!\n";
	display(head);

	cout << "The list is reversed\n";
	reverse(&head;);
	display(head);

	cout << "The list is copied\n";
	copyLinkedList(head,&newHead;);
	display(newHead);

	cout << "Comparing the two lists...\n";
	cout << "Are the two lists same?\n";
	if(compareLinkedList(head,newHead)) 
		cout << "Yes, they are same!\n";
	else
		cout << "No, they are different!\n";
	cout << endl;

	numDel = 35;
	ptrDelete = searchNode(newHead,numDel);
	if(deleteNode(&newHead;,ptrDelete)) {
		cout << "Node "<< numDel << " deleted!\n";
		cout << "The new list after the delete is\n";
		display(newHead);
	}
	cout << "Comparing the two lists again...\n";
	cout << "Are the two lists same?\n";
	if(compareLinkedList(head,newHead)) 
		cout << "Yes, they are same!\n";
	else
		cout << "No, they are different!\n";
    
	cout << endl;
	cout << "Deleting the copied list\n";
	deleteLinkedList(&newHead;);
	display(newHead);
	return 0;
}

-------------------------------------------------------------------------------------------------------------

/*
 
task: 2) Write a C++ Program to find the sum of series 1+x+x(pow)2+...+x(pow)n using constructor.



*/


#include <bits/stdc++.h> 
using namespace std; 
  
 
double sum(int x, int n) 
{ 
    double i, total = 1.0, multi = x; 
    for (i = 1; i <= n; i++) 
    { 
        total = total + multi / i; 
        multi = multi * x; 
    } 
    return total; 
} 
  

int main() 
{ 
    int x = 2; 
    int n = 5; 
    cout << fixed << setprecision(2) << sum(x, n); 
    return 0; 
} 


-------------------------------------------------------------------------------------------------------------
/*

 task: 3) Write a c++ Program to find the area of square, triangle and rectangle using function overloading.

*/
  

#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
	int s,l,b;
	float r,bs,ht;
	cout<<"Enter side of a square:";
	cin>>s;
	cout<<"Enter length and breadth of rectangle:";
	cin>>l>>b;
	cout<<"Enter radius of circle:";
	cin>>r;
	cout<<"Enter base and height of triangle:";
	cin>>bs>>ht;
	cout<<"Area of square is"<<area(s);
	cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of triangle is "<<area(bs,ht);
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}
  

-------------------------------------------------------------------------------------------------------------
/*

 task: 4) Write a C++ Program to Find All Roots of a Quadratic Equation


*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}


-------------------------------------------------------------------------------------------------------------
