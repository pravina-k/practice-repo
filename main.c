#include<stdio.h>
int main()
{
    int a=10;
    int flag=0;
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
        flag=1;
        break;
    }

    if(flag==0)
    printf("Prime");
    else
    printf("Not Prime");
}
