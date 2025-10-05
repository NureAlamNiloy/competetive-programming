#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    scanf("%s",&str1);
    int n= strlen(str1)-1,largest =26,total=0;
    int frq[largest+1];
    for (int i = 1; i <= largest; i++){
        frq[i] = 0;
    }
    for (int i = 0; i<n; i++){
        frq[(str1[i]-'a')+1]++ ;
    }
    for (int i = 1; i<=largest; i++){
        total++;
    }
    

    for (int i = 0; i < total; i++){
       int max = -1,index = -1;
        char ch;
        for (int i = 1; i <=26; i++){
            if (frq[i]>max){
                max = frq[i];
                ch = i+96;
                index =i;
            }
        }
        for (int i = 1; i <= max; i++)
        {
            printf("%c",ch);
        }
        frq[index]=0;
        
    }
    
    
    
    
    // for (int i = 0; i < largest; i++)
    // {
    //     printf("%d ",frq[i]);
    // }
    
    
    

    return 0;
}

/*


// riverce str
  char str[100];
    fgets(str,sizeof(str),stdin);
    int n = strlen(str)-1;
    for (int i = n-1; i>=0; i--)
        printf("%c ",str[i]);


// String Concatinetion
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    scanf("%s %s",&str1,&str2);
    int len1 = strlen(str1);
    for ( int i = 0; i < len1; i++)
    {
        str1[len1+i]=str2[i];
    }
    printf("%s",str1);
    


    return 0;
}


// Convert Char to digit 
#include <stdio.h>
#include <string.h>

int main(){
    char str1[]={"abcdefghijklmnopqrstuvwxyz"};
    for (int i = 0; i < strlen(str1); i++)
    {
        int value = (str1[i]-'a')+1;
        printf("%c is = %d\n",str1[i],value);
    }

    return 0;
}





*/