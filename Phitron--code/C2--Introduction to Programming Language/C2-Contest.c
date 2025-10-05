#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    char s[20];
   
    for (int j = 0; j < t; j++)
    {
        int n,head=0,taill=0;
        scanf("%d",&n); 
        scanf("%s",&s);
        for (int i = 0; i <n; i++){
            if (s[i]=='H'){
                head++;
            }
            else if(s[i]=='T'){
                taill++;
            } 
        }
        if (head >taill){
            printf("England\n");
        }
        else if(taill >head){
            printf("Pakistan\n");
        }
    }

    return 0;
}




/*

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for (int j = 0; j<t; j++){ 
        int mid =0;
        int run[6];
        for (int i = 0; i <6; i++){
            scanf("%d",&run[i]);
            if(run[i]!=0){
                mid =1;
                break;
            }
        }
        if (mid==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            
        }
        
    }

    return 0;
}









#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,head=0,taill=0;
    scanf("%d",&t);
   
    for (int j = 0; j < t; j++)
    {
        scanf("%d",&n); 
        char s[n];
        getchar();
        for (int i = 1; i <=n; i++){
            scanf("%c",&s[i]);
            if (s[i]=='H'){
                head++;
            }
            else{
                taill++;
            } 
        }
        if (head >taill){
            printf("England\n");
        }
        else if(taill >head){
            printf("Pakistan\n");
        }
    }

    return 0;
}






*/