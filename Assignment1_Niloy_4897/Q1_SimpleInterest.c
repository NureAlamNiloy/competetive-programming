#include <stdio.h>

int main(){
    //Declare variables Principal amount as p, Rate of interest as r,  Time in years as t, Simple Interest as si..
    float p,r,t,si;

    //Input value of Principal amount, Rate of interest,  Time in years from user
    printf("Enter Principal amount = ");
    scanf("%f", &p);
    printf("Enter Rate of interest = ");
    scanf("%f", &r);
    printf("Enter Time in years = ");
    scanf("%f", &t);

    // Calculate Simple Interest
    si = (p*r*t)/100;

    // Print Simple Interest
    printf("Your Simple Interest = %f",si);


}