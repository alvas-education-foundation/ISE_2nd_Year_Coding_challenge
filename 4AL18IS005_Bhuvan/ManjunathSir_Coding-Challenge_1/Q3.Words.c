#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i;
char a[20],b[20],c[20];
	
	printf("\n Enter the first word : ");
    scanf("%s",a);
    printf("\n Enter the second word : ");
    scanf("%s",b);
    printf("\n Enter the third word : ");
    scanf("%s",c);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            a[i]='%';
    }

    for(i=0;b[i]!='\0';i++)
    {
        if((b[i]>='a'&&b[i]<='z') || (b[i]>='A'&&b[i]<='Z'))
            if(!(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U'))
                b[i]='#';
    }

    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>='a'&&c[i]<='z')
            c[i]=c[i]-32;
    }

    printf("The Concatenated string is : %s%s%s",a,b,c);
    return 0;
}
