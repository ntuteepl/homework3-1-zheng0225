#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,a;
scanf("%d",&num);
for(a=2;a<num-1;a++)
{
    if (num%a==0)
    {
           printf("no");
          break;
    }
    else{

        printf("yes");
        break;
    }}
return 0;










}
