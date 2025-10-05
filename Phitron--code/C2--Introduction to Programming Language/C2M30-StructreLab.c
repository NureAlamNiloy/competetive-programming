


/*



//Complex Number using struct

#include <stdio.h>
struct Comp{
    double real;
    double img;
};
void printComp(struct Comp c ){
    printf("%0.2lf + %0.1lfi\n",c.real,c.img);
}
struct Comp add_Comp(struct Comp x, struct Comp y){
    struct Comp ans;
    ans.real = x.real+y.real; 
    ans.img = x.img+y.img; 
    return ans;
};


int main(){
    struct Comp a={5.65,3.1};
    struct Comp b={-2.5,3.7};
    printComp(add_Comp(a,b));
    return 0;
}




// Array using struct

#include <stdio.h>
struct student{
    double marks;
    int roll;
    char name[100];
};
void printStudent(struct student s){
    
        printf(" Name = %s\n Roll = %d\n Marks = %0.3lf\n\n",s.name, s.roll,s.marks);
    
}

int main(){
    struct student Cls[5];
    for (int i = 0; i < 5; i++){
        scanf("%s %d %lf",&Cls[i].name, &Cls[i].roll,&Cls[i].marks);
    }
    double sum = 0;
    for (int i = 0; i < 5; i++){
        if (Cls[i].roll%2==0){
            printStudent(Cls[i]);
            sum+=Cls[i].marks;
        }
    }
    printf("%lf",sum);


    return 0;
}



// Borkendro using struct function

#include <stdio.h>
struct point{
    float x;
    float y;
};
struct triangle
{
    struct point A;
    struct point B;
    struct point C;
};
struct point borkendro(struct triangle t){
    struct point ans;
    ans.x = (t.A.x + t.B.x + t.C.x)/3;
    ans.y = (t.A.y + t.B.y + t.C.y)/3;
    return ans;
};

int main(){
    struct point p1={1,1};
    struct point p2={4,5};
    struct point p3={1,5};
    struct triangle t ={p1,p2,p3};
    struct point tb  = borkendro(t);
    printf("The centroed is (x,y)=(%0.2f,%0.2f)",tb.x,tb.y);
    return 0;
}



// Mid point using struct function

#include <stdio.h>
#include <math.h>

struct point{
    float x;
    float y;
};
struct point mid(struct point a,struct point b){
    struct point ans;
    ans.x = (a.x+b.x)/2; 
    ans.y = (a.y+b.y)/2; 
    return ans;
};


int main(){
    struct point p1={1,1};
    struct point p2={4,5} ;
    struct point p3 = mid(p1,p2);
    // double ans = mid(p1,p2);
    printf("Mid Point is (x,y) = (%0.2f,%0.2f)",p3.x, p3.y);
    return 0;
}



// Distance of 2 point using structre

#include <stdio.h>
#include <math.h>

struct point{
    int x;
    int y;
};

double distance(struct point a, struct point b){
    double result = sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
    return result;
}

int main(){
    struct point p1;
    struct point p2 ;
    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);
    double ans = distance(p1,p2);
    printf("Distance is = %lf",ans);
    return 0;
}



// manhattan distance using structre

#include <stdio.h>
struct point{
    int x;
    int y;
};

int manhattan(struct point p1,struct point p2){
    int result = abs(p1.x-p2.x)+abs(p1.y-p2.y);
    return result;
}

int main(){

    struct point p1;
    struct point p2 ;
    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);
    int ans = manhattan(p1,p2);
    printf("Manhattan Distance is = %d",ans);
    return 0;
}




*/