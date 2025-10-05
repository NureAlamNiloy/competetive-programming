#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int arr[100];
    scanf("%s",&str);
    int sz=strlen(str);
    for (int i = 0; i <26; i++){
        arr[i]=0;
    }
    for (int i = 0; i <sz; i++){
        str[i]-=97;
        arr[str[i]]+=1;
    }
    for (int i = 0; i <26; i++){
        if (arr[i]>0){
            int a=arr[i];
            arr[i]=i+97;
            for (int j = 0; j < a; j++){
                 printf("%c",arr[i]);
            }
        }
        
    }
    
    return 0;
}
