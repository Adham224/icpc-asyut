#include <stdio.h>
int main(){
    int n,x,y=0;
    int score[50];
    printf("Enter the number of participants and the position of the participant whose score is to be compared: ");
    scanf("%d %d",&n,&x); 
    for(int i=0;i<n;i++){
        printf("Enter the score of participant %d: ",i+1);
        scanf("%d",&score[i]);
    }
    for(int i=0; i<n;i++){
        if(score[i]<=0)
        break;  
        else if(score[i]>=score[x-1])
        y++;
    }
    printf("%d participants advanced.",y);
    return 0;
    
}