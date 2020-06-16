#1:
Write a C++ Program to print right angled pyramid of numbers. 



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



###################################################################################################################################################



#2:
Write a C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays




#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
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




##########################################################################################################################################



#3:
Write A C++ Program To Implement Queue Operations Using Switch Statement




#include<iostream.h>
#include<conio.h> 
int queue[100],front=-1,rear=-1,max;
void insert_element();
void delete_element();
void display_queue();

void main()
{ clrscr();
  int option;
  cout<<"Implement Queue operations by-Tarun Rawat\n\n";
  cout<<"Enter the size of Queue : ";
  cin>>max;
  do
  {cout<<"1.Insert an element";
   cout<<"\n2.Delete an element";
   cout<<"\n3.Display queue";
   cout<<"\n4.Exit";
   cout<<"\nEnter your choice : ";
   cin>>option;
   switch(option)
   { case 1: insert_element();
          break;
     case 2: delete_element();
         break;
     case 3: display_queue();
         break;
     case 4: return 0;
   }
 }while(option!=4);
getch();
}

void insert_element()
{
  int num;
  cout<<"\nEnter the item to be inserted : ";
  cin>>num;
  if(front==0 && rear==max-1)
    cout<<"\nQueue OverFlow Occured\n";
  else if(front==-1&&rear==-1)
  {
      front=rear=0;
      queue[rear]=num;

  }
  else if(rear==max-1 && front!=0)
  {
    rear=0;
    queue[rear]=num;
  }
  else
  {
      rear++;
      queue[rear]=num;
  }
}
void delete_element()
{
  int element;
  if(front==-1)
  {
      cout<<"\nUnderflow\n";
  }
  element=queue[front];
  if(front==rear)
     front=rear=-1;
  else
  {
    if(front==max-1)
      front=0;
    else
      front++;
       cout<<"\nThe deleted element is : "<<element;
  }

}
void display_queue()
{
    int i;
    if(front==-1)
      cout<<"\nNo elements to display";
    else
    {
      cout<<"\nThe queue elements are :\n";
      for(i=front;i<=rear;i++)
      {
      cout<<"\t"<<queue[i];
      }
    }
}




#######################################################################################################################################33



#4:	
Write A C++ Program For Selection Sort 




#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int size, arr[50], i, j, temp, index, small, count=0;
    cout<<"Enter Array Size : ";
    cin>>size;
    cout<<"Enter Array Elements : ";
    for(i=0; i<size; i++)
        cin>>arr[i];
    cout<<"Sorting array using selection sort...\n";
    for(i=0; i<(size-1); i++)
    {
        small = arr[i];
        for(j=(i+1); j<size; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                count++;
                index = j;
            }
        }
        if(count!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
        count=0;
    }
    cout<<"Now the Array after sorting is :\n";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";
    getch();
}




#################################################################################################################################


#5:
C++ Program to Find All Roots of a Quadratic Equation




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



