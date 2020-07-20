// Write a C++ Program Create a linked list and Append the nodes using class and object.


#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    return 0;
}



// Write a C++ Program to find the sum of series 1+x+x(pow)2+...+x(pow)n using constructor.


#include<iostream.h>
#include<conio.h>
#include<math.h>
class sample
{
clrscr();
long i,n,x,sum=1;

public sample(long x,long y)
{
    x=x;
    y=n;
}
void cal()
{

cout<<“1+x+x^2+……+x^n”;

for(i=1;i<=n;++i)
sum+=pow(x,i);
cout<<“nSum=”<<sum;

}
getch(); //to stop the screen
}
int main()
{
   sample a=new sample(5,2);
   a.cal();
}



// Write a c++ Program to find the area of square, triangle and rectangle using function overloading.



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



// Write a C++ Program to Find All Roots of a Quadratic Equation


#include <iostream>
#include <cmath>
using namespace std;
int main() 
{

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
    else if (discriminant == 0) 
     {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
     }
    else 
     {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
     }
    return 0;
}
