
#include<stdio.h>
int main()
{

    int n=10;
    for(int i=1; i<=n; i++){
        if (i==1 || i==2 || i==n)
        {
            for (int j = 0; j<i; j++){
                printf("*");
                
                
            }
        }
        else{
            printf("*");
            for (int j = 0; j <i; j++) {
                printf(" ");
            }
            printf("*");
        }
        
        
        printf("\n");
    }
}



/*

    long long int i,n,x;
    long long int arr[2000001];
    scanf("%lld",&n);
    
    for (i=1; i<n; i++){
        scanf("%lld ",&x);
        arr[x]=1;
    }
 
    for (i=1; i<=n; i++){
        if (arr[i]==0){
            printf("%lld",i);
        }
    }



int n=10;
    for(int i=1; i<=n; i++){
        if (i==1 || i==2 || i==n)
        {
            for (int j = 0; j<i; j++){
                printf("*");
                
                
            }
        }
        else{
            printf("*");
            for (int j = 0; j <i; j++) {
                printf(" ");
            }
            printf("*");
        }
        
        
        printf("\n");
    }






*/