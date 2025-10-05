
#include <stdio.h>
#include <math.h>

int S(int n){
    if(n==1)
        return 1;
    else
        return S(n-1)+n;
}
int main(){
     
    int m = S(3);
    printf("%d",m);
    return 0;
}



/*

Lab1--

#include <stdio.h>
#include <math.h>

void printHash(int n){
    for (int i = 0; i<n; i++){
        printf("NS ");
    }
    printf("\n");
}

int main(){
    for (int i=1; i<=5; i++){
        printHash(i);
    }
    return 0;
}


Lab2--

#include <stdio.h>
#include <math.h>

void findMaxMin(int arr[],int n, int *a, int *b){
    *a =arr[0], *b=arr[0];
    for (int i=0; i < n; i++){
        if (arr[i]<*b)
            *b = arr[i]; 
        if (arr[i]>*a)
            *a = arr[i];
    }
}

int main(){
    
    int size = 7;
    int arr[size];
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);//12 6 9 3 4 21 66;
    }
    int maxx,minn;
    findMaxMin(arr,size,&maxx,&minn);
    printf("%d %d",maxx, minn);

    return 0;
}




Lab3--

#include <stdio.h>
#include <math.h>

int sumOfDig(int n);
int prime(int sum);
int main(){
    int dig;
    scanf("%d",&dig);
    if(prime(sumOfDig(dig))==1){
        printf("Niloy's Number");
    }   
    else{
       printf("NO"); 
    }
        
    
    return 0;
}
int sumOfDig(int n){
    int sum =0;
    while (n!=0){
        int dig = n%10;
        sum+=dig;
        n/=10;
    }
    return sum;
}
int prime(int sum){
    for ( int i = 2; i < sum; i++){
        if (sum%i==0){
            return 0;
        }
    }
   return 1;
}


Lab4--

#include <stdio.h>
#include <math.h>

int S(int n){
    if(n==1)
        return 1;
    else
        return S(n-1)+n;
}
int main(){
     
    int m = S(3);
    printf("%d",m);
    return 0;
}



Lab5--


*/