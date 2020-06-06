
	/*    1.....Write a C++ Program to print right angled pyramid of numbers.   */ 


#include <iostream>
using namespace std;

int main()
{

	int i, rows, j, k=1;

	cout<<"Enter the number of rows: ";
	cin>>rows;
	
	for(i=1; i<=rows; i++) {
		for(j=1; j<=i; j++) {
			cout<<k<<"\t";
			k++;
		}
		cout<<"\n";
	}

	return 0;
}


----------------------------------------------------------------------------------------------------------------------


	/*     2......Write a C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays   */



#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

   
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}



------------------------------------------------------------------------------------------------------------


	/*   3....Write A C++ Program To Implement Queue Operations Using Switch Statement.     */


#include<iostream>
#include<cstdlib>
using namespace std;
 
struct node
{
    int info;
    struct node *link;    
}*front, *rear;
 

class queue_list
{
    public:
        void insert(int);
        void display();
        void del();
        queue_list()
        {
            front = NULL;
            rear = NULL;
        }               
};
 

int main()
{
    int choice, item;
    queue_list ql;
    while (1)
    {
        cout<<"\n-------------"<<endl;
        cout<<"Operations on Queue"<<endl;
        cout<<"\n-------------"<<endl;
        cout<<"1.Insert Element into the Queue"<<endl;
        cout<<"2.Delete Element from the Queue"<<endl;
        cout<<"3.Traverse the Queue"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be inserted into the queue: ";
            cin>>item;
            ql.insert(item);
            break;
        case 2:
            ql.del();
            break;
        case 3:
            ql.display();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
 
     				  /*  ---Insert Element into the Queue ----  */


void queue_list::insert(int item)
{
    node *tmp;
    tmp = new (struct node);
    tmp->info = item;
    tmp->link = NULL;
    if (front == NULL)
        front = tmp;
    else
        rear->link = tmp;
    rear = tmp;
}
 
				/*-----Delete Element from the Queue-----*/


void queue_list::del()
{
    node *tmp;
    if (front == NULL)
        cout<<"Queue Underflow"<<endl;
    else
    {       
        tmp = front;
        cout<<"Element Deleted: "<<tmp->info<<endl;
        front = front->link;
        free(tmp);
    }
}
 
				/*------Traversing the Stack-------*/


void queue_list::display()
{       
    node *ptr;
    ptr = front;
    if (front == NULL)
        cout<<"Queue is empty"<<endl;
    else
    {
        cout<<"Queue elements :"<<endl;
        while (ptr != NULL)
        {
            cout<<ptr->info<<" ";
            ptr = ptr->link;
        }
        cout<<endl;
    }



---------------------------------------------------------------------------------------------------------------



	/*  4....Write A C++ Program For Selection Sort */


#include<iostream>
using namespace std;

void swapping(int &a, int &b) {      
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
        
         swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}



----------------------------------------------------------------------------------------------------------------

	/*  5.....C++ Program to Find All Roots of a Quadratic Equation  */

#include<bits/stdc++.h> 
using namespace std; 
  

int main() 
{ 
    int a = 1, b = -7, c = 12; 
    findRoots(a, b, c); 
    return 0; 
} 

void findRoots(int a, int b, int c) 
{ 
     
     if (a == 0) 
     { 
        cout << "Invalid"; 
        return; 
     } 
  
     int d  = b*b - 4*a*c; 
     double sqrt_val = sqrt(abs(d)); 
  
     if (d > 0) 
     { 
         cout << "Roots are real and different \n"; 
         cout << (double)(-b + sqrt_val)/(2*a) << "\n"
              << (double)(-b - sqrt_val)/(2*a); 
     } 
     else if (d == 0) 
     { 
         cout << "Roots are real and same \n"; 
         cout << -(double)b / (2*a); 
     } 
     else 
     { 
         cout << "Roots are complex \n"; 
         cout << -(double)b / (2*a) << " + i" << sqrt_val 
              << "\n"  << -(double)b / (2*a) << " - i"
              << sqrt_val; 
     } 
} 
  
 
