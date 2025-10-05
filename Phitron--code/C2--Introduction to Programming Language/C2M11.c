#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int arr[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d%%\n", &arr[i]);
    }
    int X, Y, Z;
    for (int i = 0; i < T; i++)
    {
        if(arr[i] >= 0 && arr[i] < 60){
            X = 60 - arr[i];
            X = X + 40;
            printf("%d minutes\n", (X+60));
        }
        if(arr[i] >= 60 && arr[i] < 80){
            Y = 80 - arr[i];
            Y = Y * 2;
            printf("%d minutes\n", (Y+60));
        }
        if(arr[i] >= 80 && arr[i] <= 100){
            Z = 100 - arr[i];
            Z = Z * 3;
            printf("%d minutes\n", Z);
        }
    }
    return 0;



/*

//different pattren
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
     
    for(int i=1; i<=n; i++){
        for (int j=i; j>0; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

// Hight Number
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int sn =n;
    int max,arr[sn];
    max = arr[0];
    
    
        for (int i = 0; i < sn; i++)
            scanf("%d",&arr[i]);
        
        for (int i=0; i<sn; i++){
            if (arr[i]>max){
                max = arr[i];
            }
                
        }
    

        for (int i=0; i<sn; i++){
            arr[i]=max-arr[i];
        }
        for (int i=0; i<sn; i++){
            printf("%d ",arr[i]);
        }
    
    
    
}



*/