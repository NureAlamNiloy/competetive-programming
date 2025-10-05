#include <stdio.h>

int vowel(char ch);
int arrSum(int n,int arr[]){
    int sum =0;
    for (int  i = 0; i <n; i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return sum;
    
}


int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9};
    arrSum(9,arr);
   
    return 0;
}



int vowel(char ch){
    if ('A'<=ch<='Z'){
        ch+=32;
    }
    if (ch=='a' || ch=='u' || ch=='o' || ch=='i' || ch=='e'){
        return 1;
    }
    else
        return 0;
}