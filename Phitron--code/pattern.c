#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){
        
        if (i==1){
            for (int j = 1; j<=n; j++){
                printf("%d",j);
            }
        }
        
        else if (i==n){
            for (int j = n; j>0; j--){
                printf("%d",j);
            }
        }
        else{
            for (int j=1; j<=n; j++){
                if (j==1){
                    printf("%d",i);
                }
                else if (j==n){
                    printf("%d",n-i+1);
                }
                else{
                    printf(" ");
                }
                
            }
        }
        
         printf("\n");
    }
}
