#include <stdio.h>
#include <stdlib.h>

    
int main(){
    int matrix[5][5];
    int pos1, pos2;
    for(int i=0; i<5;i++){
     for (int j=0; j<5; j++){
        scanf("%d", &matrix[i][j]);
     }
     printf("\n");}
    int count=0;
    for(int i=0; i<5;i++)
     for (int j=0; j<5; j++)
        if(matrix[i][j]==1){
             pos1=i;
             pos2=j;}

            while(pos1!=2){
            if(pos1<2)
            pos1++;
            else            pos1--;
        count++;}
            while(pos2!=2){
            if(pos2<2)            pos2++;
            else            pos2--;
        count++;}
printf("%d", count);
}