#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,num,count=0;
    scanf("%d",&num);
    for(a=1;a<num+1;a++)
    {
        if(num%a==0)
        {
            count=count+1;
        }

    }
    if(count==2)
        {
            printf("yes");
        }
        else
        {printf("no");}
}











}
