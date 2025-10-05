#include <stdio.h>

int main(){
    int n,h,i,x;
    scanf("%d %d",&n, &h);
    int w =0;
    for(i =1; i<=n; i++){
        scanf("%d",&x);
        if(x>h){
            w += 2;
        }
        else{
            w++;
        }
    }
    printf("%d",w);
}

/*

int n,h,w;
    scanf("%d",&n, &h);
    int sum=0;
    for(int i =1; i<=n; i++){
        scanf("%d",&w);
        if(w>h){
            sum+=2;
        }
        else{
            sum++;
        }
    }
    printf("%d",sum);


*/
