/* 1.Program to check if given expression contains redundant braces
Published on 06 Mar 2020
A string of characters is given as input and it is checked if it has redundant braces or not. This can be done using stacks as it is one of the important applications of stack data structure. If the expression or sub-expression is surrounded by extra or unnecessary braces, then the expression is said to have redundant brackets.
For example:
(( a - b )) has redundant brackets as it is having an extra set of parenthesis.
(( a * b ) - (c) + d) has redundant brackets as (c) is having unnecessary braces.
*/

#include <iostream> 
#include <stack> 
using namespace std; 

bool redundant_braces(string& str) 
{ 
  stack<char> st; 
    for (auto& ch : str) 
     { 
       if (ch == ')') 
        { 
          char top = st.top(); 
          st.pop(); 
             
          bool flag = true; 
          while (top != '(') 
        { 
            if (top == '+' || top == '-' ||  top == '*' || top == '/') 
            flag = false; 
                
               top = st.top(); 
               st.pop(); 
        } 
            if (flag == true) 
                return true; 
        } 
            else
              st.push(ch);
    } 
    return false; 
} 
void redundancy_check(string& str) 
{ 
    bool ans = redundant_braces(str); 
    if (ans == true) 
        cout << "Yes\n"; 
    else
        cout << "No\n"; 
} 
int main() 
{ 
    string str = "(a*b-(c+d))"; 
    redundancy_check(str); 
    str = "((a+b))"; 
    redundancy_check(str); 
    str = "(a/b*((c-d)))"; 
    redundancy_check(str); 
    return 0; 
} 



/* 3.Program to find the median of two sorted arrays of same size and different size are discussed here. Firstly, let us see what is median of the array?
Median is an element which divides the array into two parts - left and right. So the number of elements on the left side of the array will be equal or less than the number of elements on the right side. Now, let us consider the case of an array with odd number of elements.
*/

#include<stdio.h>
int Calculate_median(int a1[], int a2[], int n)
{
    int i = 0;
    int j = 0;
    int cnt;
    int x = -1, y = -1;
    for (cnt = 0; cnt <= n; cnt++)
    {
       if (i == n)
        {
            x = y;
            y = a2[0];
            break;
        }
       else if (j == n)
        {
            x = y;
            y = a1[0];
            break;
        }
       if (a1[i] < a2[j])
        {
            x = y;
            y = a1[i];
            i++;
        }
       else
        {
            x = y;
            y = a2[j];
            j++;
        }
    }
}
int main()
{
    int n, i;
    printf(“Enter the size: “);
    scanf(“%d”,&n);
    int a1[n], a2[n];
    printf(“\n Enter the first Array elements: \n”);
    for(i=0; i<n; i++)
        scanf(“%d”,&a1[i]);
    printf(“\n Enter the Second Array elements: \n”);
    for(i=0; i<n; i++)
        scanf(“%d”,&a2[i]);
    printf(“Median: %d”, Calculate_median(a1, a2, n));
    return 0;
}

/* 3.Program to check for balanced parenthesis with and without using stack is discussed here. You can develop a parenthesis checker without using stack as well. But using stack can have several advantages.
•Using a stack to balance parenthesis will help you balance different types of grouping operators such as[],{}and()and verify that they are correctly nested.
•Using a stack will also help improve the efficiency of the code
*/


#include
#include
char st[20];
int top=-1;
void psh(char);
char pop();
int main()
{
    char a[20],t;
    int i,f=1;
    scanf(“%s”,a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='(‘||a[i]=='{‘||a[i]=='[‘)
           psh(a[i]);
            if(a[i]==’)’||a[i]==’}’||a[i]==’]’)
        {
            if(top==-1)
                f=0;
            else
            {
		t=pop();
             if(a[i]==’)’&&(t=='[‘||t=='{‘))
                 f=0;
             if(a[i]==’}’&&(t=='(‘||t=='[‘))
                  f=0;
             if(a[i]==’]’&&(t=='{‘||t=='(‘))
                  f=0;
            }
        }
     }
           if(top>=0)
              f=0;
           if(f==0)
              printf(“Unbalanced\n”);
           else
              printf(“Balanced\n”);
   return 0;
}
void psh(char a)
{
   st[++top]=a;            
}
 char pop()          
{
   return st[top–];
}
