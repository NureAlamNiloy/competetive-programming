#include<stdio.h>
int solve(int arr[],int i, int n){
    if (i==n)return 0;
    int sum=solve(arr,i+1,n);
    return sum+arr[i];
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int a=solve(arr,0,n);
    printf("%d",a);
    
    return 0;
}

/*

//Sum of array using recursion
#include<stdio.h>
int solve(int arr[],int i, int n){
    if (i==n)return 0;
    int sum=solve(arr,i+1,n);
    return sum+arr[i];
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int a=solve(arr,0,n);
    printf("%d",a);
    
    return 0;
}



//Sum of 1 to n by recursion
#include<stdio.h>
int foo(int n){
    if(n==0) return 0;
    return foo(n-1)+n;
}
int main(){
    printf("%d\n",foo(3));
    return 0;
}


//Print 1 to n by recursion
void refun(int i,int n){
    if (i<=n){
        printf("%d ",i);
        refun(i+1,n);
    }
    
}

//Print n to 1 by recursion
void refun(int n){
    if (n>0){
        printf("%d ",n);
        refun(n-1);
    }
    
}








*/