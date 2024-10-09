#include<stdio.h>
int main()
{
    int x=31,y=0,z,p=0,q,data,bit=31;
    scanf("%d",&data);
    while(bit>=0)
    {
        printf("%d",(data<<bit)&(2*1073741884));
        if((data<<bit)&(2*1073741884))
        {
            p=2**x;
        }
            x--;
            y+=p;
            bit--;
    }
    printf("%d",r);
    return 0;
}