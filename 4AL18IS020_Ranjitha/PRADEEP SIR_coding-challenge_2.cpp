// 1) Write a C++ Program to print right angled pyramid of numbers.

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

===========================================================================================================================================================================

// 2)  Write a C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays

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

    // Initializing elements of matrix mult to 0.
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

===========================================================================================================================================================================

// 3) Write A C++ Program To Implement Queue Operations Using Switch Statement


#include<iostream>
using namespace std;
class queue
{
  public:
  int q[5],front,rear,x,result;
  void enq();
  void dque();
  void disp();
  queue()
  {
    front=0;
    rear=0;
  }
};
void queue::enq()
{
  if(rear>=5)
  cout<<"\nQueue overflow!!\n";
  else
  {
    cout<<"\nEnter the number to be inserted: ";
    cin>>x;
    rear++;
    q[rear]=x;
    cout<<"\nNumber pushed in the queue:"<<q[rear];
  }
}
void queue::dque()
{
  if(rear==0)
  cout<<"\nQueue underflow!!\n";
  else
  {
    if(front==rear)
    {
      front=0;
      rear=0;
    }
    else
      front++;
  }
  cout<<"\nDeleted element is:";
  result=q[front];
  cout<<result;
}
void queue::disp()
{
  if(rear==0)
    cout<<"\nQueue underflow!!\n";
  else
    cout<<"\nContents of queue is:";
  for(int i=front+1;i<=rear;i++)
    cout<<q[i]<<"\t";
}

int main()
{
  int c;
  queue qu;
 cout<<"\n**********";
 cout<<"QUEUE";
 cout<<"**********\n";
  do
  {
    cout<<"\n1.Insertion\n2.Deletion\n3.Display\n";
    cout<<"\nEnter your choice:";
    cin>>c;
    switch(c)
    {
      case 1:
    qu.enq();
    break;
      case 2:
    qu.dque();
    break;
      case 3:
    qu.disp();
    break;
      default:
    cout<<"\nInvalid choice!!\n";
    }
  }
  while(c<4);
  return 0;
}

===========================================================================================================================================================================

// 4) Write A C++ Program For Selection Sort 

#include <bits/stdc++.h> 
using namespace std; 
void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 
void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 
	for (i = 0; i < n-1; i++) 
	{
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
int main() 
{ 
	int arr[] = {64, 25, 12, 22, 11}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 

===========================================================================================================================================================================

// 5) C++ Program to Find All Roots of a Quadratic Equation

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



