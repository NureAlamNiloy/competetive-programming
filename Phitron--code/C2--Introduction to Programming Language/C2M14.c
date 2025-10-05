#include <stdio.h>

int main(){
    char str1[101],str2[100];
    scanf("%s",&str1);
    scanf("%s",&str2);
    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        if (str1[i]>='A' && str1[i]<='Z'){
           str1[i]+=32;
        }
        if (str2[i]>='A' && str2[i]<='Z'){
           str2[i]+=32;
        }
        if (str2[i]>str1[i])
        {
            printf("-1");
            return 0;
        }
        else if (str1[i]>str2[i])
        {
            printf("1");
            return 0;
        }
        
    }
    printf("0");
}






/*

//Selection shot
#include <stdio.h>

int main(){
    int brr[10], arr[10]={100,50, 20,80 ,70, 40,30,90,900,60 };
    
    for (int j = 0; j < 10; j++)
    {
        int min =arr[0],minin=0;
        for (int i = 0; i < 10; i++){
            if (min>arr[i]){
                min =arr[i];
                minin =i;
            }
        }
        brr[j]=min;
        arr[minin]=99999;
    }
    for (int i = 0; i <10; i++)
    {
        printf("%d ",brr[i]);
    }
    
}


// Bubble short
#include <stdio.h>

int main(){
    int tamp,arr[10]={12,7,9,3,15,2,6,5,8,98};
    
   for (int i = 0; i<10; i++)
   {
         for (int j = 0; j < 10; j++)
        {
            if (arr[j]>arr[j+1]){
                tamp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= tamp;
            }
            
        }
        for (int i = 0; i <10; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
   }

// Beautiful Matrix
#include <stdio.h>

int main(){
    int a,b, arr[5][5];
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            scanf("%d",&arr[i][j]);
            if (arr[i][j]==1)
            {
                a=i;
                b=j;
            }
            
        }
        
    }
    int row_c=0,col_c=0;
    if (a>2)
    {
        row_c=(a-2);
    }
    if(a<2){
        row_c=(2-a);
    }
    if(b<2){
       col_c=(2-b);
    }
    if (b>2)
    {
        col_c=(b-2);
    }
    int sum =row_c+col_c;
    printf("%d",sum);
    
    
}  
    
}


//
#include <stdio.h>

int main(){
    char str[101];
    scanf("%s",&str);
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        if (str[i]>='A' && str[i]<='Z'){
           str[i]+=32;
        }
        if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y' )
        {
            printf(".%c",str[i]);
        }
        
    } 
    
    
}



//
#include <stdio.h>

int main(){
    char str1[101],str2[100];
    scanf("%s",&str1);
    scanf("%s",&str2);
    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        if (str1[i]>='A' && str1[i]<='Z'){
           str1[i]+=32;
        }
        if (str2[i]>='A' && str2[i]<='Z'){
           str2[i]+=32;
        }
        if (str2[i]>str1[i])
        {
            printf("-1");
            return 0;
        }
        else if (str1[i]>str2[i])
        {
            printf("1");
            return 0;
        }
        
    }
    printf("0");
}









*/
