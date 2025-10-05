#include <stdio.h>

int consecutiveEven(int n){
    for (int i = 1; i <= n; i++){
        int sum = i+(i+2)+(i+4)+(i+6);
        if (sum==n){
            printf("%d %d %d %d\n",i,(i+2),(i+4),(i+6));
            break;
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    for (int k = 1; k <= t; k++){
        int n;
        scanf("%d",&n);
        consecutiveEven(n);
    }
}

