#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i = 0; i<n; i++){
        char str[100];
        fgets(str,sizeof(str),stdin);
        int len = strlen(str)-1;
        if (len>10){
            printf("%c%d%c\n",str[0],(len-2),str[len-1]);
        }
        else{
            puts(str);
        }
    }

    return 0;
}


/*


#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i = 0; i<n; i++){
        char str[100];
        fgets(str,sizeof(str),stdin);
        int len = strlen(str)-1;
        if (len>10){
            printf("%c%d%c\n",str[0],(len-2),str[len-1]);
        }
        else{
            puts(str);
        }
    }

    return 0;
}



int main(){
    char str[10000];
    scanf("%s", str);
    gets(str);
    int count=0;
    fgets(str,sizeof(str),stdin);
    for (int i = 0; str[i]!='\0'; i++){
        if ( str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            count ++;
        
    }
    
    printf("%d",count);
}


*/
