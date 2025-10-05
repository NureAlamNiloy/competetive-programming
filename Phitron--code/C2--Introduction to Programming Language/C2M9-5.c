#include <stdio.h>
 
int main(){


}

/*
p6-- pattern problem

 int n;
    scanf("%d",&n);
     for ( int i = 0; i < n; i++){
        for ( int j = 0; j<=i; j++){
           printf("*");
           
        }
        printf("\n");
    } 


//p1 reverce array
    int n;
    scanf("%d",&n);
    int arr[n];

    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( int j = n-1; j>=0 ; j--)
    {
        printf("%d ",arr[j]);
        
    }
    
    
 // P2---   
     int n,a,b,c;
    scanf("%d",&n);
    int arr[n];

    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("Input Quary");
     scanf("%d",&a);
    for ( int i = 0; i<a; i++)
    {
        scanf("%d %d",&b,&c);
        arr[b]+=c;
    }
    for ( int i = 0; i < n; i++)
    {
       
        printf("%d ", arr[i]);
    }



// p3--- Matching problem
    int n,x;
    scanf("%d",&n);
    int arr[n];

    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( int j = 0; j<n ; j++)
    {
        if (arr[0]==arr[j])
        {
            x = 0;
        }
        else{
            x = 1;
            break;
        }
        
    }
    if (x==0)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }


    //p4 -- remove ith index in array

 
      
       int n;
    scanf("%d",&n);
    int arr[n];

    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for ( int i = 0; i < n; i++){
        printf("%d- ", arr[i]);
        for ( int j = 0; j<n; j++){
            if (arr[i]!=arr[j])
            {
                printf("%d", arr[j]);
            }
            
           
        }
        printf("\n");
    }



// p5---

p5--- int n,t,sum,a;
    scanf("%d",&n);
    
    int arr[n];

    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Input Target ");
    scanf("%d",&t);

     for ( int i = 0; i < n; i++){
        for ( int j = 0; j<n; j++){
            
            if (arr[i]!=arr[j])
            {
                sum = arr[i]+arr[j];
                if (sum==t){
                    a =1;
                    break;
                }
            }
            
        }
    }

    if (a==1)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }









*/