#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] == 0 || arr[i] == 1 || arr[i]==2)
            arr[i]= arr[i];

        for(int j=2; j<(arr[i]-1); j++){
            if(arr[i]%j==0){
                arr[i]=0;
                a++;
            }
                
        }

   }
   printf("%d\n",(n-a));
    
    for (int i = 0; i < n; i++){
        if (arr[i]!=0){
            
            printf("%d ",arr[i]);
        }
    }

}


/*

// p1--Fionacci Series
    int n;
    scanf("%d",&n);
    int arr[n];
    arr[0] =0;
    arr[1] =1;
    for (int i = 2; i<=n; i++){
        arr[i] = arr[i-2]+arr[i-1];
    }
    for (int i = 0; i<n; i++){
        printf("%d  ", arr[i]);
    }

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


//P3--
     int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    for (int i=0; i< n; i++){
        if (arr[i]%2!=0)
        {
            sum+=arr[i];
        }

    }
    if (sum%2==0)
        printf("YES");
    else
        printf("NO");



//P4-- K-th smallest value
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
        arr[input[i]] =1;
    }
    int k, count = 0;
    printf("Input k");
    scanf("%d",&k);
    for (i=1; i<=largest; i++){
        if (arr[i]==1){
            count++;
        }
        if (count==k){
           printf("%d-th smallest value is %d",k,i);
            break;
        }

    }

    return 0;

}

//p5-- Prime
#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] == 0 || arr[i] == 1 || arr[i]==2)
            arr[i]= arr[i];

        for(int j=2; j<(arr[i]-1); j++){
            if(arr[i]%j==0){
                arr[i]=0;
                a++;
            }
                
        }

   }
   printf("%d\n",(n-a));
    
    for (int i = 0; i < n; i++){
        if (arr[i]!=0){
            
            printf("%d ",arr[i]);
        }
    }

}










//p6-- pattern 
#include <stdio.h>

int main(){
    int n,max;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        for (int j= 0; j<i; j++){
            printf(" ");
        }
        for (int j=1 ; j<=n-i; j++){
            printf("%d ",j);
        }
        for (int j=0; j<=i; j++){
            printf(" ");
        }
        
        
        
        printf("\n");
        
    }
    


}




*/
