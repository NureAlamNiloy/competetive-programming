#include <stdio.h>

int main(){
    
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","w");

    return 0;
}

/*


//Log file
#include <stdio.h>

int main(){
    
    FILE *logfile = fopen("log.txt","a");
    fprintf(logfile,"Hello Sumooo\n");

    return 0;
}



//Sum Usin file
#include <stdio.h>

int main(){
    FILE *inputfile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","w");
    if (inputfile==NULL){
        fprintf(outputFile,"No File Found");
        return 0;
    }
    
    int n,x;
    fscanf(inputfile,"%d",&n);
    int sum =0;
    for (int i = 0; i < n; i++){
        fscanf(inputfile,"%d",&x);
        sum+=x;
    }
    fprintf(outputFile,"The sum is == %d",sum);
    
}



// Basic file 
#include <stdio.h>

int main(){
    FILE *inputFile= fopen("input2.txt","r");
    if (inputFile==NULL){
        printf("No File Found");
        return 0;
    }
    
    FILE *outputFile=fopen("output.txt","w");
    while (1)
    {
        char ch = fgetc(inputFile);
       if (ch==EOF)break;
       fputc(ch,outputFile);
    }
    
}






*/