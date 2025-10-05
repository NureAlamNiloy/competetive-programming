#include<stdio.h>
struct Course {
    char name[10];
    int price;
};

int main()
{
    struct Course c1 ={"C Programming",5000};
    printf("%s",c1.name);
    return 0;
}


/*


//Pointer In structre
#include <stdio.h>

struct Niloy{
    double weight;
    int age;
};

int main(){
    
    struct Niloy std={94.4334,34};
    struct Niloy* s = &std;
    printf("%lf %d",s->weight, s->age);
    return 0;
}



// Array in structre
#include <stdio.h>

struct Niloy{
    double weight;
    int age;
};

int main(){
    
    struct Niloy a[10];
    for (int i = 0; i < 10; i++){
        a[i].weight=50.324+i;
        a[i].age = 20+i;
    }
    for (int i = 0; i < 10; i++){
        printf("%lf %d\n",a[i].weight, a[i].age);
    }
    return 0;
}




//Structre Input
#include <stdio.h>

struct Niloy{
    char name[100];
    int roll;
    int age;
    float weight;
};


int main(){
    
    struct Niloy a = {"Niloy",581567,20,56.800};
    //scanf("%s %d %d %f",&a.name, &a.age, &a.roll, &a.weight);
    struct Niloy b = {.weight=68.54,.age=21,.name ="Jonyr Heda",.roll = 581593};//Designated Inatialization
    printf("Name of studen =%s\nroll of studen =%d\nage of studen =%d\nweight of studen =%f\n", a.name, a.roll, a.age, a.weight);
    printf("Name of studen =%s\nroll of studen =%d\nage of studen =%d\nweight of studen =%f\n", b.name, b.roll, b.age, b.weight);
    return 0;
}



// Simple Structre code
#include <stdio.h>

struct Niloy{
    char name[100];
    int roll;
    int age;
    float weight;
};


int main(){
    int b;
    struct Niloy a = {581567,20,56.800};
    strcpy(a.name,"Niloy");
    printf("Name of studen =%s\n", a.name);
    printf("roll of studen =%d\n", a.roll);
    printf("age of studen =%d\n", a.age);
    printf("weight of studen =%f\n", a.weight );
    return 0;
}













*/





