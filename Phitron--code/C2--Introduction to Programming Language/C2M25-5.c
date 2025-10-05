#include <stdio.h>
#include <math.h>


int main(){
    
    return 0;
}







/*


//P1--
#include <stdio.h>

int inputArr(int t,int k){
    int arr[t+7];
    for (int i = 0; i<t; i++){
        scanf("%d",&arr[i]);
    }
     int count=0;
    for (int i = 0; i<t; i++){
        if (arr[i]!=k){
            count++;
        }
    }
    printf("%d",count);
}

int main(){
    inputArr(7,5);
   
}


p2---

#include <stdio.h>

int shortArr(int t, int arr[],int k){ 
  
    
}
int kthMax(){

}

int main(){
    int t,k;
    scanf("%d",&t);
    int arr[1000];
    for (int i =0; i<t; i++){
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&k);
    for (int i=0 ; i<t; i++)
   {
         for (int j=0; j<t-1; j++)
        {
            if (arr[j]>arr[j+1]){
                int tamp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= tamp;
            }
            
        }
   }
   
   printf("\n%dth Smallest value is = %d\n",k,arr[k-1]);
   printf("%dth Largest value is = %d",k,arr[(t-k)]);
   
}

//P3--
#include <stdio.h>
#include <math.h>

int StrSum(); 
int strPow(int sum,int size);

int main(){
    
    StrSum();
}

int StrSum(){ 
    char str[100];
    scanf("%s",&str);
    int  size = strlen(str);
    int sum;
    for (int i=0; i<size; i++){
        sum+= str[i]-96;
    }
    strPow(sum,size);
    return sum;
}
int strPow(int sum,int size){
    int flag = 1;
    for (int i = 0; i <size; i++){
        int strSum = pow(2,i);
        if (strSum==sum){
            printf("YES\nCost = 2^%d",i);
            flag =1;
            break;
        }
        else{
            flag =0;
        }
    }
    if (flag==0){
        printf("NO");
    }
    
}

//P4--
#include <stdio.h>
#include <math.h>

int nTo1(int n){
    if (n>0){
        printf("%d ",n);
        nTo1(n-1);
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    nTo1(n);
}


//P6---
#include <stdio.h>
#include <math.h>


int main(){
    int a,b,c;
    int *x=&a,*y=&b,*z=&c;
    scanf("%d %d %d",&*x,&*y,&*z);
    int sum = *x+*y+*z;
    printf("%d",sum);
}







*/