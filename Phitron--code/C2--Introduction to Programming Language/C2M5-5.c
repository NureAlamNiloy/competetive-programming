#include <stdio.h>

int main(){
   int n,k,even, odd,x, sum;
    scanf("%d %d",&n,&k);
    if (n%2==0)
    {
        even = n/2;
        odd = n/2;
        
    }
    else{
        even = n/2;
        odd =n/2+1;
    }
    
    if (odd>=k)
    {
        sum = (k*2)-1;
    }
    else{
        k = k- odd;
        sum = (k*2);
    }

    printf("%d", sum);
    
    
    
}



/*


  
int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i!=m;i++){
        if(i>24){
            i=i%24;
        }
        printf("%d ", i);
    }
    printf("%d ", m);
    
    

    

int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i!=m;i++){
        if(i>=24){
            i=0;
        }
        printf("%d ", i);
    }



int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        if(i%m==0){
            printf("%d ",i);
        }
        
    }




 int n;
    scanf("%d",&n);
    if(n<0){
        for(int i=1; i>=n; i--){
            printf("%d ",i);
        }
    }
    else{
        for(int i=1; i<=n; i++){
            printf("%d ",i);
        }
    }



 int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d ",i);
    }


*/