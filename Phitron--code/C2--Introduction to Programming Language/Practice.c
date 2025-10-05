/*
1-ekta string and array diclear korsi
2- array er sob element 0 kore disi
3- string er protita cdhar er accii value bar kore oi jaymjay +1 kore disi
4- aibar ami odd char bar korsi and odd char koto bar ase tar cunt var korsi 
5- eibar even value gula process korte hove tar agee total koyta char ase bar korte hove
6- aibar ami even char bar korsi and even char koto bar ase tar cunt var korsi 
7- total koyta even char ase taa ber korechi
8- fist and name 2 ta sting banasi .. even char gulake oi string ee vag kore disi






*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[1000005];
    scanf("%s",&str);
    int size=strlen(str);
    int frq[27];
    for ( int i =1; i<=26; i++){
        frq[i]=0;
    }
    for ( int i = 0; i<size; i++){
        frq[(str[i]-'A')+1]+=1;
    }    
    
    int oddValue=-1,total=0;
    char oddChar;
    for ( int i=1; i<27; i++){
        if (frq[i]>0){
            total++;
        }
        
        if (frq[i]%2!=0){
            oddValue = frq[i];
            oddChar=i+64;
            frq[i]=0;
        }
        
    }
    int remainingChar =size;
   
    if (oddValue !=-1){
        total--;
        remainingChar-=oddValue;
    }
    int l=0,r=(remainingChar/2)-1;
     char Fstr[remainingChar/2+1],Lstr[remainingChar/2+1];
    Lstr[remainingChar/2]='\0';
    for (int i = 0; i<total; i++){
        int evenValue=-1;
        char evenChar;
        for(int i=1; i<=26; i++)
        {
            if(frq[i]>1)
            {
                evenValue=frq[i];
                evenChar=i+64;
                frq[i]=0;
                break;
            }
        }
        printf("%c======%d\n",evenChar,evenValue);

        // int ii=0,jj=0;
        // for (int k=0; k<(evenValue/2); k++){
        //     Fstr[l]=evenChar;
        //     l++;
        // }
        // for (int k=0; k<(evenValue/2); k++){
        //     Lstr[r]=evenChar;
        //     r--;
        // } 
    }
    
    
    //Fstr[l]='\0';
    
   

    
    
 
 
    return 0;
 
}


/*


int n,sum=0;
    scanf("%d",&n);
    
    for(int i =1; i<=n; i++){
        int a,b,c;
        scanf("%d %d %d",&a, &b, &c);
        if((a==1 && b==1) || (b==1 && c==1)||(a==1 && c==1)){
            sum+=1;
        }
    }
    printf("%d",sum);




*/
