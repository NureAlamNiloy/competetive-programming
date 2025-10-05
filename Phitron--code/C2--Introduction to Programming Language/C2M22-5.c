#include<stdio.h>
#include <string.h>


int checkBinary(char str[]);
int primePattern(){
    
}
int prime(int n){

    for (int i =2; i <n; i++){
        if (n%i==0){
           return 0;
        }
        
    }
    return 1;
}


int main(){
    
    int n;
    scanf("%d",&n);
    // for (int i = 0; i <n; i++)
    // {
    //     for (int j=i; j>=0; j--){
    //         printf("*");
    //     }
    //     printf("\n");
        
    // }

   
   int m =prime(n);
   printf("%d",m);
    
    

    return 0;
}


int checkBinary(char str[]){
    int flag =1;
    int size = strlen(str);
    for (int i = 0; i <size; i++){
        if (str[i]=='0' || str[i]=='1'){
            flag =1;
        }
        else{
            flag =0;
            break;
        }
    }
    if (flag==1){
        printf("YES");
    }
    else if (flag==0){
        printf("NO");
    }
}