int main()
{
     int i;
     int num1,num2;
     int length1=0,length2=0;
     int memory1[10],memory2[10];
     int sum1=0,sum2=0;
     int onum1,onum2;
     scanf("%d%d", &num1,&num2);
     onum1=num1;
     onum2=num2;
     while(num1>=1)
     {
         memory1[length1=length1+1]= num1%10;
         num1/=10;
     }
     for(i=length1; i>=1; i--)
     {
         sum1=sum1+memory1[i];
     }
     while(num2>=1)
     {
         memory2[length2=length2+1]= num2%10;
         num2/=10;
     }
     for(i=length2; i>=1; i--)
     {
         sum2=sum2+memory2[i];
     }

     if(sum1>sum2)
     {
         printf("%d",onum2);
     }
     if(sum1<sum2)
     {
         printf("%d",onum1);
     }
     if(sum1==sum2)
     {
         if(onum1>onum2)
         {
             printf("%d",onum2);
         }
         else
         {
             printf("%d",onum1);
         }
     }
     return 0;
}

