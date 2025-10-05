#include <stdio.h>

int main()
{   
   long long int n;
     scanf("%lld",&n);
     while (n>1)
     {
        printf("%lld, ",n);
        if(n%2==0){
            n =n/2;
        }
        else{
            n = n-1;
        }
        
     }

     printf("%lld",n);
}







/*
1--- #include <stdio.h>
 int main(){ 
int a=5, b=13,c;
 c = a;
 a = b;
 b = c;
 printf("%d and %d" , a, b);
 }



2-- #include <stdio.h>

Int main()
{   
    int a, b, c, d, sm;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d){
      if (b<c && b<d){
        sm = b;
      }
      else if (c<b && c<d){
        sm = c;
      }
      else if (d<b && d<c){
        sm = d;
      }

      printf("Largest= %d\n", a);
      printf("Smallest= %d", sm);
    }

    else if (b>a && b>c && b>d){
      if (a<c && a<d){
        sm = a;
      }
      else if (c<a && c<d){
        sm = c;
      }
      else if (d<a && d<c){
        sm = d;
      }

      printf("Largest= %d\n", b);
      printf("Smallest= %d", sm);
    }


    else if (c>a && c>b && c>d){
      if (a<b && a<d){
        sm = a;
      }
      else if (b<a && b<d){
        sm = b;
      }
      else if (d<a && d<b){
        sm = d;
      }

      printf("Largest= %d\n", c);
      printf("Smallest= %d", sm);
    }


    else if (d>a && d>b && d>c){
      if (a<b && a<c){
        sm = a;
      }
      else if (b<a && b<c){
        sm = b;
      }
      else if (c<a && c<b){
        sm = c;
      }

      printf("Largest= %d\n", d);
      printf("Smallest= %d", sm);
    }
    

  return 0; 
}



3---  #include <stdio.h>

Int main()
{   
    long long int x;
    int i;
    scanf("%lld",&x);
    for (i = 0; x!=0 ; i++)
    {
        int dig = x%10;
        x/=10;
        
    }
    printf("%d digits",i);
    
  return 0; 
}



4-- #include <stdio.h>

int main()
{   
    long long int x;
    int sum;
    scanf("%lld",&x);
    for (int i = 0; x!=0 ; i++)
    {
        int dig = x%10;
        sum +=dig;
        x/=10;
        
    }
    printf("%d",sum);

  return 0; 
}


5--- #include <stdio.h>

int main()
{   
   long long int n;
     scanf("%lld",&n);
     while (n>1)
     {
        printf("%lld, ",n);
        if(n%2==0){
            n =n/2;
        }
        else{
            n = n-1;
        }
        
     }

     printf("%lld",n);
}



6---  #include <stdio.h>

int main()
{   
   int a,b;
     scanf("%d %d",&a,&b);
     if (a%b==0){
        printf("The first number is divisible by the second number.");
     }
     else if (b%a==0){
        printf("The second number is divisible by the first number.");
     }
     else{
        printf("None of them are divisible by the other.");
     }
     return 0;
}


7---  #include <stdio.h>

int main()
{
	int a, b,sum;
   scanf("%d %d", &a,&b);
   for (int i = 1; i<=a && i<=b; i++)
   {
      if (a%i==0 && b%i==0){
         sum = i;
      }
      
   }
	printf("The GCD of %d and %d is %d.", a, b, sum);

}


8--  #include <stdio.h>

int main()
{
	int a, b,sum;
   scanf("%d %d", &a,&b);
   for (int i = 1; i<=a && i<=b; i++)
   {

      if (a>b){
         sum = (a*i);
         if(sum%b==0)
            break;
         
      }
      if (b>a){
         sum = (b*i);
         if(sum%a==0)
            break;
      }
      
   }
   
	printf("The LCM of %d and %d is %d.", a, b, sum);
}


9--- #include <stdio.h>

int main()
{   
   int n;
     scanf("%d",&n);
     printf("The factors of %d are: ",n);
     for (int i = 1; i<=n; i++)
     {
        if(n%i==0){
            printf("%d, ",i);
        }
     }
     
}



10---  #include <stdio.h>

int main()
{   
   int n,sum;
     scanf("%d",&n);
     for (int i = 2; i<n; i++)
     {
       sum = n%i;
       if (sum==0)
            break;
            
     }

    if(n==2){
        printf("Prime");
    }
    else if (sum==0)
     {
        printf("Composite");
     }
     
     
     else{
        printf("Prime");
     }
     
}









*/


