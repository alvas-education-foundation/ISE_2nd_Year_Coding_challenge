/* 1. Develop the programs in c, c++, java or python to the solve the following problem statements
Given an array, , of  integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    double a[2510],sum=0,temp,mode,count,temp_count,temp_mode;
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%g\n",sum/n);
    if(n%2==1){
        printf("%g\n",a[n/2]);
    }
    else{
        printf("%g\n",(a[n/2]+a[n/2-1])/2);
    }
    count = 0;
    temp_count = 1;
    temp_mode = a[0];
    mode = a[0];
    for(i=1;i<n;i++){
        if(a[i]!=temp_mode){
            temp_count=1;
            temp_mode=a[i];
        }
        else{
            temp_count++;
            if(count<temp_count){
                count=temp_count;
                mode=temp_mode;
            }
        }
    }
    printf("%g\n",mode);
    return 0;
}

/* 2. Given an array,A, of  N integers and an array, W, representing the respective weights of A's elements, calculate and print the weighted mean of A's elements. Your answer should be rounded to a scale of  decimal place */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,i,j,a[50],b[50],s=0;
    float wt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
        scanf("%d",&b[i]);
        s=s+b[i];
    }
    for(i=0;i<n;i++)
        {
        wt=wt+a[i]*b[i];
    }
    printf("%.1f",wt/s);
    return 0;
}


/* 3. Given an array,X , of n  integers, calculate the respective first quartile (Q1), second quartile (Q2), and third quartile (Q3). It is guaranteed that ,Q1,Q2,Q3  are integers.  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
       int n,a[50],i,nn=0,mid=0,temp=0,j=0,q1=0,q2=0,q3=0;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if(a[i] > a[j])
                {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    if((n % 2) != 0)
        {
        nn = n/2;
        mid = nn + 1;
        q2 = a[nn];
        q1 = (a[nn/2]+a[(nn/2)-1])/2;
        q3 = (a[mid+(nn/2)] + a[mid+(nn/2)-1])/2;
    }
    else
        {
        q2 = (a[n/2] + a[(n/2) - 1])/2;
        mid = n/2;
        if((mid % 2) != 0)
            {
            q1 = a[mid/2];
            q3 = a[mid+(mid/2)];
        }
        else
            {
            q1 = (a[mid/2] + a[(mid/2)-1])/2;
            q3 = (a[mid+(mid/2)] + a[mid+(mid/2)-1])/2;
        }
    }
    printf("%d\n",q1);
    printf("%d\n",q2);
    printf("%d\n",q3);
    return 0;
}


/*4.The interquartile range of an array is the difference between its first (Q1) and third (Q3) quartiles. Given an array,X,
 of  n integers and an array, F,representing the respective frequencies of X's elements, construct a data set,S, where each  occurs at frequency f. 
Then calculate and print S's interquartile range, rounded to a scale of  
1 decimal place. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,x[1000],N,count1,count2,temp,F[50],y[50],count;
    float Q1,Q2,Q3,a[100],b[100],interquartile;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&y[i]);
    }
    for(i=0;i<N;i++){
        scanf("%d",&F[i]);
    }
    count = 0;
    for(i=0;i<N;i++){
        for(j=0;j<F[i];j++){
            x[count] = y[i];
            count += 1;
        }
    }
    for(i=0;i<count;i++){
    for(j=i+1;j<count;j++){
        if(x[i] > x[j])
            {
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
            }
        }
    }
    if (count%2==0){
        Q2 = (x[count/2]+x[(count-2)/2])/2;
    }
    else{
        Q2 = x[(count-1)/2];
    }
    count1 = 0;
    count2 = 0;
    for(j=0;j<count;j++){
        if(x[j]<Q2){
            a[count1] = x[j];
            count1 = count1 + 1;
        }
        else if(x[j]>Q2){
            b[count2] = x[j];
            count2 = count2 + 1;
        }
    }
    if (count1%2==0){
        Q1 = (a[count1/2]+a[(count1-2)/2])/2;
    }
    else{
        Q1 = a[(count1-1)/2];
    }
    if (count2%2==0){
        Q3 = (b[count2/2]+b[(count2-2)/2])/2;
    }
    else{
        Q3 = b[(count2-1)/2];
    }
    interquartile = Q3 - Q1;
    printf("%.1f",interquartile);
    return 0;
}


