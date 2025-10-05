#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, a=0,b=0,evCunt=0,oddCunt=0,x=0,y=0;
    scanf("%d" , &n);

    int arr[n+5],even[n],odd[n];

    for(int i=0; i<n; i++){
        scanf("%d" , &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[j] > arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even[evCunt] = arr[i];
            evCunt++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            odd[oddCunt] = arr[i];
            oddCunt++;
        }
    }
    x = even[0];
    for(int i=1; i<evCunt; i++){
        if(even[i] != x){
            y = even[i];
            break;
        }
    }

    if(oddCunt>1){
        a = odd[0];
        for(int i=1; i<oddCunt; i++){
            if(odd[i] != a){
                b = odd[i];
                break;
            }
        }
    }

    int sum1= (x+y);
    int sum2 = (a+b);

    if( sum1 >= sum2 ){
        printf("%d",sum1);
    }
    else{
       printf("%d",sum2); 
    }

   return 0;
}








































