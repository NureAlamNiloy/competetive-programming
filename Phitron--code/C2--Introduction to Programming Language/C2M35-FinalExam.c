#include <stdio.h>
#include <string.h>


int main(){
    
    char str[1000];
    char ch[]={"champions"};
    scanf("%s",&str);
    int flag=0,n = strlen(str);
    for (int i = 0; i < n; i++){
        if (str[i]>='A' && str[i]<'Z'){
            str[i]+=32;
        }
        
    }
    
    for (int i = 0; i < 9; i++){
        flag=0;
        for (int j = 0; j < n; j++){
            if (ch[i]==str[j]){
                flag=1;
                break;
            }
        }
        if (flag==0){
            printf("No");
            return 0;
        } 
    }
    printf("Yes");
        
    return 0;
}