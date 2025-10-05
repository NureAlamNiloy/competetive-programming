#include <stdio.h>
#include <math.h>


int main(){
    
    return 0;
}


/*


#include <stdio.h>
#include <math.h>

int factorial(int n);
int permotesion(int n,int r);
int febonacci(int n);
int main(){
    febonacci(10);
    permotesion(5,2);
    combination(5,2);
    return 0;
}





int febonacci(int n){
    int a=0,b=1,sum;
    printf("%d %d ",a,b);
    for (int i=0; i<n; i++){
        sum = a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    return sum; 
}
int factorial(int n){
    int fact =1;
    for (int i= 1; i <=n; i++){
        fact*=i;
    }
    return fact;
}
int permotesion(int n,int r){
    int perm = factorial(n)/factorial(n-r);
    printf("%dP%d = %d\n",n,r,perm);
    return perm;
}
int combination(int n,int r){
    int conbi = factorial(n)/(factorial(n-r)*factorial(r));
    printf("%dC%d = %d\n",n,r,conbi);
    return conbi;
}


*/