#include <stdio.h>

int main(){

    char str[100],strR[100];
    scanf("%s",&str);
    int flag=1, len =strlen(str)-1;
    for ( int j=0, i = len; i>=0;j++, i--){
        strR[j] = str[i];
    }
    //printf("%s",strR);
    for ( int j=0; j<=len;j++){
        if (str[j]!=strR[j]){
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }


}














// 

/*
//P1----
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    scanf("%s",&str1);
    int n= strlen(str1)-1,largest =26,total=0;
    int frq[largest+1];
    for (int i = 1; i <= largest; i++)
        frq[i] = 0;

    for (int i = 0; i<n; i++)
        frq[(str1[i]-'a')+1]++ ;

    for (int i = 1; i<=largest; i++)
        total++;
    

    for (int i = 0; i < total; i++){
       int max = -1,index = -1;
        char ch;
        for (int i = 1; i <=26; i++){
            if (frq[i]>max){
                max = frq[i];
                ch = i+96;
                index =i;
            }
        }
        for (int i = 1; i <= max; i++)
        {
            printf("%c",ch);
        }
        frq[index]=0;
        
    }
    return 0;
}


//p2----
#include <stdio.h>

int main(){

    char str[100],strR[100];
    scanf("%s",&str);
    int flag=1, len =strlen(str)-1;
    for ( int j=0, i = len; i>=0;j++, i--){
        strR[j] = str[i];
    }
    //printf("%s",strR);
    for ( int j=0; j<=len;j++){
        if (str[j]!=strR[j]){
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }


}




//P3----
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",&str);
    int vc=0,cc=0, len =strlen(str);
    for (int i = 0; i <len ; i++)
    {
        if (str[i]>='A' && str[i]<='Z'){
           str[i]+=32;
        }
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        {
            vc++;
        }
        else{
           cc++;
        }
        
    }
    printf("Voule = %d\n",vc);
    printf("Consonent = %d",cc);
    

    return 0;
}

//p4---
#include <stdio.h>
#include <string.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int mit[n][m],arr[n][m];
    for (int i = 1; i <=n; i++){
        for (int j = 1; j<=m; j++){
            scanf("%d",&mit[i][j]);
        }
        printf("\n");
    }
    for (int i = 1; i <=n; i++){
        for (int j = 1; j<=m; j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 1; i <=n; i++){
        for (int j = 1; j<=m; j++){
            arr[i][j]+=mit[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}


//P6----
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 1; i <=n; i++){
        for (int j = 1; j<=n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 1; i <=n; i++){
        for (int j = 1; j<=n; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
        
    }
}











*/







//#include <stdio.h>
// #include <string.h>

// int main(){
//     int n,a,b;
//     scanf("%d",&n);
//     //int mit[3][3];
//     for (int i = 1; i <=n; i++){
//         scanf("%d %d",&a,&b);
//     }
//     int sum = (9-n);
//     printf("%d\n", sum);
//     for (int i = 1; i <=3; i++){
//         for (int j = 1; j<=3; j++){
//             if(i!=a && j!=b){
//                 printf("%d %d",i,j);
//                 printf("\n");
//             }
            
//         }
        
//     }
    
    

//     return 0;
// }