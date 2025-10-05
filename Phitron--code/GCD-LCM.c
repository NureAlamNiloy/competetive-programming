#include<stdio.h>
int gcd(int a,int b){
    int ans;
    for (int i=a; i>1; i--){
        if (a%i==0 && b%i==0){
            ans =i;
            printf("The GCD Of %d and %d is : %d\n",a,b,ans);
            break;
        }
    }
    return ans;
}


int lcm(int a,int b){
    int sum;
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
   printf("The LCM of %d and %d is :%d\n", a, b, sum);
   return sum;
}

int prime(int x){
    if (x==1){
        printf("%d is not a prime number\n",x);
        return 0;
    }
    else if (x==2){
        printf("%d is a prime number\n",x);
        return 0;
    }
    
    for (int i=2; i<x; i++){
        if (x%i==0){
            printf("%d is not a prime number\n",x);
            return 0;
        }
    }

    printf("%d is a prime number\n",x);
    
}

int main()
{
    gcd(10,20);
    lcm(10,20);
    prime(10);
    return 0;
}

