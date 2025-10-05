#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    scanf("%s",&str);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i]%2==0)
        {
            str[i]-=32;
        }
        
    }
    puts(str);
}

/*

//P1---
#include <stdio.h>

int main(){

    float a,b;
    float* x=&a;
    float* y=&b;
    scanf("%f %f",&*x,&*y);
    float sum = (*x+*y)/2;
    printf("%f",sum);
}

//P2--Boubble short using pointer and function

#include <stdio.h>

int swaping(int* arr,int n){
    
    for (int j = 0; j < n-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            int tamp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]= tamp;
        }
        
    }
}

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++)
        {
            swaping(&arr,n);
            
        }
       
       printf("%d ",arr[i]);
    }
}


//p3--- print 1 to n using pointer
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++){
       printf("%d ",*arr+i);
    }
}

//P4---- Area of a cercal
#include <stdio.h>

float area(int a){
    float r =3.1416*a*a;
    return r;
}

int main(){

    float n;
    scanf("%f",&n);
    printf("%f",area(n));
    
}


//P5--- Sum of array
#include <stdio.h>

int sumLastZero(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%10==0)
        {
            sum+=arr[i];
        }
        
    }
    

    return sum;
}

int main(){

    int n;
    scanf("%d",&n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",sumLastZero(arr,n));

    
}



//P6--- Char case change

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    scanf("%s",&str);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i]%2==0)
        {
            str[i]-=32;
        }
        
    }
    puts(str);
}










*/