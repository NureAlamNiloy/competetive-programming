#include<stdio.h>
#include <string.h>


int main()
{
    char str[1000];
    scanf("%s",&str);
    int n;
    scanf("%d",&n);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]=str[i]+5;
        if (str[i]>'z'){
            str[i]=96+(n-('z'-str[i]));
        }
    }
    puts(str);
    return 0;
}

