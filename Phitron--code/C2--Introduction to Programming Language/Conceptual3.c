
 
 
 
 
 
 
 
 
 
/*
 
 //P2-- Orderd Of array
#include <stdio.h>
 
int main(){
    int n,i;
    scanf("%d", &n);
    int input[n+5];
    int largest = input[0];
    for (i = 0; i<n; i++){
        scanf("%d", &input[i]);
    }
    for (i=0; i<n; i++)
    {
        if (input[i]>largest)
        {
            largest = input[i];
        }
 
    }
    int arr[largest+1];
    for (i = 0; i<=largest; i++){
        arr[i]=0;
    }
    for (i=0; i<n; i++){
        arr[input[i]] +=1;
    }
    int count = 0;
    for (i=1; i<=largest; i++){
        if (arr[i]==1){
            printf("%d ",i);
        }
 
    }
 
}
 
 
//unique or duplicate
#include <stdio.h>
 
int main(){
    int n,i;
    scanf("%d", &n);
    int input[n];
    int largest = input[0];
    for (i = 0; i<n; i++){
        scanf("%d", &input[i]);
    }
    for (i=0; i<n; i++)
    {
        if (input[i]>largest)
        {
            largest = input[i];
        }
    }
 
    int arr[largest+1];
    for (i = 0; i<=largest; i++){
        arr[i]=0;
    }
    for (i=0; i<n; i++){
        arr[input[i]] +=1;
    }
    int duplicate = 0, unique = 0;
    for (i=1; i<=largest; i++){
        if (arr[i]==1)
            unique++;
 
        else if (arr[i]>1)
            duplicate++;
 
 
    }
    printf("Total uniue %d\n" ,unique);
    printf("Total duplicate %d", duplicate);
 
}

//Codeforce problem spy

#include <stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t; i++){
    int n,index,max=101;
        scanf("%d",&n);
        int arr[n+1];
        for(int i=1; i<=n;i++){
            scanf("%d",&arr[i]);
        }
        int brr[max];
        for(int i=0; i<=max; i++){
            brr[i]=0;
        }
        for(int i=1; i<=n; i++){
            brr[arr[i]] +=1;
        }
        for(int i=1; i<=n; i++){
            if(brr[arr[i]]==1){
                index =i;
                break;
            }
        }
        printf("%d\n",index);
    }
 
 
 
 
 
    return 0;
 
}
 
 
 
 
 
 
*/






