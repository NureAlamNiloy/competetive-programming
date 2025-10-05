#include <stdio.h>

int PtoN(int n);
int patern(int n);
int even(int n);




int main(){
    
   int n,sum=0;
   scanf("%d",&n);
   int arr[n];
   for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
   }
   
   for (int i = 0; i<n; i++){
        int a= arr[i]%10;
        sum+=a;
        int b = arr[i]/1000;
        sum+=b;
    }
    printf("%d",sum);
   
    return 0;
}


int even(int n){
    for (int i = 1; i<=n; i++){
        if (i%2==0){
            printf("%d",i);
        }
        
    }
    
}

int patern(int n){
    for (int i = 1; i<=n; i++){
        for (int j=i; j>0; j--){
            printf(" ");
        }
        for (int j=i; j<n; j++){
            printf("*");
        }
        for (int j=i; j<= n; j++){
            printf("*");
        }
        printf("\n");
    }
}


int PtoN(int n){
    if (n>0){
        for (int i=n; i>=-n; i--){
            printf("%d ",i);
        }/* code */
    }
    else{
        for (int i=n; i<=-n; i++){
            printf("%d ",i);
        }
    }
}