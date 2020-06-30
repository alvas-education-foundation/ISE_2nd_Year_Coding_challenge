// 1. Write a C++ Program Create a linked list and Append the nodes using class and object.


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


// 2. Write a C++ Program to find the sum of series 1+x+x(pow)2+...+x(pow)n using constructor.


#include <iostream>
using namespace std;
int main()
{
    float x, sum, no_row;
    int i, n;
    cout << "\n\n Display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input the value of x: ";
    cin >> x;
    cout << " Input number of terms: ";
    cin >> n;
    sum = 1;
    no_row = 1;
    for (i = 1; i < n; i++) 
    {
        no_row = no_row * x / (float)i;
        sum = sum + no_row;
    }
    cout << " The sum  is : " << sum << endl;
}


// 3. Write a c++ Program to find the area of square, triangle and rectangle using function overloading.


#include<iostream>
#include<cstdlib>
using namespace std;

int area(int s)
{
    return(s*s);
}
float area(float b,float h)
{
        return(0.5 * b * h);
}
float area(float l,float b)
{
        return (l * b);
}
int main()
{
        float b,h,s,l;
        int ch;

        do
        {
                cout<<"\n\n *****Menu***** \n";
                cout<<"\n 1. Area of Square";
                cout<<"\n 2. Area of Triangle";
                cout<<"\n 3. Area of Rectangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                               cout<<"Enter side of a square:";
                                cin>>s;
                                cout<<"\n Area of Square : "<<area(s);
                                break;
                        }
                        case 2:
                        {
                                cout<<"\n Enter the Base & Height of Triangle : ";
                                cin>>b>>h;
                                cout<<"\n Area of Triangle : "<<area(b,h);
                                break;
                        }
                        case 3:
                        {
                                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of Rectangle : "<<area(l,b);
                                break;
                        }
                        case 4:
                                exit(0);
                        default:
                                cout<<"\n Invalid Choice... ";
                }
        }while(ch!=4);
        return 0;
}


// 4. Write a C++ Program to Find All Roots of a Quadratic Equation


#include<iostream>
#include<cmath>
using namespace std;
int main() {
   int a = 1, b = 2, c = 1;
   float discriminant, realPart, imaginaryPart, x1, x2;
   if (a == 0) {
      cout << "This is not a quadratic equation";
   }else {
      discriminant = b*b - 4*a*c;
      if (discriminant > 0) {
         x1 = (-b + sqrt(discriminant)) / (2*a);
         x2 = (-b - sqrt(discriminant)) / (2*a);
         cout << "Roots are real and different." << endl;
         cout << "Root 1 = " << x1 << endl;
         cout << "Root 2 = " << x2 << endl;
      } else if (discriminant == 0) {
         cout << "Roots are real and same." << endl;
         x1 = (-b + sqrt(discriminant)) / (2*a);
         cout << "Root 1 = Root 2 =" << x1 << endl;
      }else {
         realPart = (float) -b/(2*a);
         imaginaryPart =sqrt(-discriminant)/(2*a);
         cout << "Roots are complex and different." << endl;
         cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" <<end;
         cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" <<end;
      }
   }
   return 0;
}








