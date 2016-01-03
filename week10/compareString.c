/*************************************************************************
	> File Name: compareString.c
	> Author: 
	> Mail: 
	> Created Time: 三 12/16 19:59:12 2015
 ************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80],c,d;
    int m,n,i;
    gets(a);
    gets(b);
    m=strlen(a);
    n=strlen(b);
    a[m+1]='0';
    b[n+1]='0';

    for(i=0; i<81; i++)
    {
        c=a[i];
        d=b[i];
        if(c>90) c=c-32;
        if(d>90) d=d-32;
    if(c=='0'||d=='0')
        {
            printf("=");
            break;
        }
        if(c==d) continue;
        if(c<d)
        {
            printf("<");
            break;
        }
        if(c>d)
        {
            printf(">");
            break;
        }

    }

    printf("\n");
    return 0;
}
