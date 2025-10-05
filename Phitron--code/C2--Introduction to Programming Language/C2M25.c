#include<stdio.h>
int main()
{
    int x= 10,*ptr;
    ptr = &x;
    *ptr += 2;
    printf("%d, %d", *ptr, x);
    return 0;

}




/*


#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    int a=12;
    int* p=&a;
    printf("%p\n",p);
    int** z=&p;
    printf("%p\n",z);
    **z=324;
    printf("%d\n",a);
    

    return 0;
}
int a=12,b=13;
    int* p;
     p=&a;
    *p+=b;
    printf("%d\n",a);

*/
