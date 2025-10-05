#include <stdio.h>

int main(){
    int n,x;
    int arr[20000];
    scanf("%d",&n);
    
    for (int i=1; i<n; i++){
        scanf("%d ",&x);
        arr[x]=1;
    }

    for (int i=1; i<=n; i++){
        if (arr[i]==0){
            printf("%d",i);
            break;
        }
    }
    
    
}


/* 

P1- int a,b;
    printf("Enter tow integer");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("A is learg");
    }
    else if(a== b){
        printf("They are equle");
    }
    else{
        printf("B is learg");
    }
    
    
P2- int a,b,c;
    printf("Enter 3 integer number:  ");
    scanf("%d %d %d", &a, &b, &c );
    if(a>b && a>c){
        printf("A is learge Number");
    }
    else if(b>a && b>c){
        printf("B is learge Number");
    }
    else if(c>b && c>a){
        printf("C is learge Number");
    }
    else if(a==b==c){
        printf("They are equle");
    }
    else if(a==b){
        printf("A and B are equle");
    }
    else if(a==c){
        printf("A and C are equle");
    }
    else if(c==b){
        printf("C and B are equle");
    }
    else{
        printf("This Programme ar not possible");
    }

*/