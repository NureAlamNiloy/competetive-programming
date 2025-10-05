



/*

//Dynamic memory

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int* ptr;
    // calloc()=> eta malloc er motoi sudo sizeof(datatype) aita coma diye bole dite hoy like this code
    ptr = (int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i < n; i++){
        printf("%dth position is = %d\n",i,*(ptr+i));
    }
    free(ptr);
}


#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));
    //malloc()=> dynamic vabe runtime er somy memori ney and je memory khali thake free() function ta free kore day
    for (int i = 0; i < n; i++){
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i < n; i++){
        printf("%dth position is = %d\n",i,*(ptr+i));
    }
    ptr =realloc(ptr,(n+6*sizeof(int)));
    // amar jodi aroo beshi jayga lage tahole ai realloc use koro
    free(ptr);
}


//Type custing
#include <stdio.h>
int main(){
    int a=100;
    double b = (double)342325/a;
    printf("%lf",b);
}
#include <stdio.h>
int main(){
    int a=100,*pa;
    double  b = (double)342325/a,*pb;
    pa = &a;
    pb = (double*)pa;
    printf("%p %p",pa, pb);
}


// return 2 valu from function by pointer
#include <stdio.h>

int consecutiveEven(int a,int b, int* p, int* r){
    *p = a>b?a:b;
    *r = a<b?a:b;
}

int main(){
    int a,b,largr,small;
    scanf("%d %d",&a, &b);
    consecutiveEven(a, b, &largr, &small);
    printf("large is =%d \n",largr);
    printf("small is =%d \n",small);
}

*/

