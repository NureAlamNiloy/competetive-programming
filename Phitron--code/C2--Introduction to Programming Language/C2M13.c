#include <stdio.h>
int main() {

    int row, col,ans=1;
    scanf("%d %d", &row, &col);
    int arr [row] [col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    int x = 1;
    if (row==col){
        
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++)
            {
                if (i==j){
                    if (x!=arr[i][j]){
                        ans = 0;
                    }
                    continue;
                }
                if (arr[i][j]!=0){
                    ans =0;
                }
                
            }
            
        }
        if (ans==1){
            printf("Identy Matrix\n");
        }
        else{
            printf("Not a Identy Matrix\n");
        }
        
        
    }
    else{
       printf("Diagonal No Possble");
    }

}






/*

// Diagonal matrix
#include <stdio.h>
int main() {

    int row, col,ans=1;
    scanf("%d %d", &row, &col);
    int arr [row] [col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    if (row==col){
        
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++)
            {
                if (i==j){
                    continue;
                }
                if (arr[i][j]!=0){
                    ans =0;
                }
                
                
            }
            
        }
        if (ans==1){
            printf("Diagonal\n");
        }
        else{
            printf("Not a Diagonal\n");
        }
        
        
    }
    else{
       printf("Diagonal No Possble");
    }
}

// Sclar matrix 
#include <stdio.h>
int main() {

    int row, col,ans=1;
    scanf("%d %d", &row, &col);
    int arr [row] [col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    int x = arr[0][0];
    if (row==col){
        
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++)
            {
                if (i==j){
                    if (x!=arr[i][j]){
                        ans = 0;
                    }
                    continue;
                }
                if (arr[i][j]!=0){
                    ans =0;
                }
                
            }
            
        }
        if (ans==1){
            printf("Sclar\n");
        }
        else{
            printf("Not a Sclar\n");
        }
        
        
    }
    else{
       printf("Diagonal No Possble");
    }

}






*/