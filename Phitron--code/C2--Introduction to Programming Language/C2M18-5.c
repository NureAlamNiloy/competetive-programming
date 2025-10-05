/*


//p1----
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n>0){
        for (int i = n; i>=-n; i--){
            printf("%d ", i);
        }
    }
    else{
        for (int i = n; i<=-n; i++){
            printf("%d ", i);
        }
    }
}

//p2---
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n; i++){
        for (int k=n-1; k>i; k--)
        {
            printf(" ");
        }
        
        for (int j = 0; j<n; j++){
            printf("*");
        }
         printf("\n");
    }
}

//p3---
#include <stdio.h>
#include <string.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i<n; i++){
        sum += arr[i]%10;
    }
    printf("Sum = %d",sum);
}

//p4---
#include <stdio.h>
#include <string.h>

int main(){
    char arr[100];
    scanf("%s",&arr);
    int size = strlen(arr);
    for (int i = 0; i<size; i++){
        if (arr[i]!=arr[i-1])
        {
            printf("%c",arr[i]);
        }
        
    }
    
}

//p5---

#include <stdio.h>
#include <string.h>

int main(){
    int a,b,sum=0;
    char ch;
    scanf("%d%c%d",&a,&ch,&b);
    if (ch=='+'){
        sum=a+b;
    }
    else if (ch=='-'){
        if (a>b){
            sum =a-b;
        }
        else{
            sum =b-a;
        }
        
    }
    else if (ch=='*'){
        sum=a*b;
    }
    else if (ch=='/'){
        sum=a/b;
    }
    printf("%d",sum);
}


//p6--
#include <stdio.h>
#include <string.h>

int main(){
    int sum;
    scanf("%d",&sum);
    if (sum%4==0){
        printf("YES");
    }
    else if(sum%4!=0){
        printf("NO");
    }
    
}

*/