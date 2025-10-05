#include <stdio.h>
int main(){

    long long int n,sum=0;
    scanf("%lld",&n);
    long long int arr[n];
    for (long long int i=0; i<n; i++)
        scanf("%lld",&arr[i]);
        
    for (long long int i=1; i<n; i++){
        if (arr[i]<arr[i-1]){
            sum += arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
        
    }
    
    printf("%lld",sum);
    
    
    

}








/*



//p1-- Problem match
#include <stdio.h>

int main(){

    int n,a,sum=0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j=0; j<3; j++)
        {
            scanf("%d", &a);
            count+=a;
        }
        
        
        if (count>=2)
        {
            sum++;
        }
        
    }
    printf("%d",sum);
}

//p2---

int n,k;
    scanf("%d %d",&n, &k);
    for (int i = 0; i <k; i++)
    {
        if (n%10==0)
            n=n/10;
        else
            n--;
    }
    printf("%d",n);



//p--3 -- IQ test

#include <stdio.h>
int main(){

    int n, ec=0, oc=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i<=n; i++){
        if (arr[i]%2==0)
            ec++;
        else
            oc++;
    }
    if (ec<2){
        for (int i = 1; i<=n; i++){
            if (arr[i]%2==0)
                printf("%d ",i);
        }
    }
    else{
        for (int i = 1; i<=n; i++){
            if (arr[i]%2!=0)
                printf("%d ",i);
        }
    }
    
    

}


//P4-- Next Round

int n,k,sum=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i = 1; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 1; i<=n; i++){
        if (arr[i]>=arr[k] && arr[i]>0)
            sum++;
    }
    
    printf("%d",sum);








*/

