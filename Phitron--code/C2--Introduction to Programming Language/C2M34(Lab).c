#include <stdio.h>
#include <stdbool.h>

void design(int a[4][4],int n){
    printf("\n");
     for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j]==-1) printf(" ");
            if (a[i][j]==1) printf("X");
            if (a[i][j]==2) printf("O");
            if(j<n)printf("\t|\t"); 
        }
        printf("\n");
        if (i<n) printf("_________________________________________");
        printf("\n\n");
    }
}

int winer(int a[4][4],int n){
    for (int i = 1; i <= n; i++){
        if (a[i][1]==a[i][2] && a[i][3]==a[i][2] && a[i][3]!=-1){
            return a[i][1];
        }
        if(a[1][i]==a[2][i] && a[3][i]==a[2][i] && a[3][i]!=-1){
            return a[1][i];
        }
    }
    if (a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[1][1]!=-1){
        return a[1][1];
    }
    if (a[3][1]==a[2][2] && a[2][2]==a[1][3] && a[2][2]!=-1){
        return a[2][2];
    }
    
    return -1;
}


int main(){
    int n =3;
    int a[4][4];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            a[i][j] = -1;
        }
    }
    
    bool player1=true,player2=false;
    while (true){
        design(a,n);
        if (player1==true){
            int r,c;
            printf("Player1 Enter row and coloum: ");
            if (r==-123){
                flag:printf("Player1 Enter row and coloum again: ");
            }
            scanf("%d %d",&r,&c);
            if (a[r][c]!=-1){
                printf("Invalid Cell\n");
                goto flag;
            }
            a[r][c]=1;
            player2=true;
            player1=false;
        }
        else{
            int r,c;
            
            printf("Player2 Enter row and coloum: ");
            if (r==-123){
                flag2:printf("Player2 Enter row and coloum again: ");
            }
            scanf("%d %d",&r,&c);
            if (a[r][c]!=-1){
                printf("Invalid Cell\n");
                goto flag2;
            }
            a[r][c]=2;
            player2=false;
            player1=true;
        }
        //check winer
        if (winer(a,n)==1){
            printf("Player1 is win\n");
            design(a,n);
            break;
        }
        else if (winer(a,n)==2){
            printf("Player2 is win\n");
            design(a,n);
            break;
        }
    }
    
    return 0;
}