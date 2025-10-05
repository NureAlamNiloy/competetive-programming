#include<stdio.h>
int main()
{
     char ch;
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
          ch-=32;
    }
    printf("%c",ch);

    return 0;
}

/*
int date;
   scanf("%d",&date);
   if (date%4==0){
        printf("%d is leap year",date);
        
   }
   else{
        printf("%d is not leap year",date);
   }




int n,sum=0;
   scanf("%d",&n);
   n*=2;
   for (int i = 0; i < n; i++)
   {
        if (i%2!=0)
        {
            printf("%d ",i);
            sum+=i;
        }
    
   }
   printf("\nThe Sum of odd Natural Number is %d",sum);




 int a;
    float f;
    a = pow(10,6);
    f =sqrt(49);
    printf("Power of 10^6 is = %d\n",a);
    printf("sqrt of 144 is = %f",f);

*/