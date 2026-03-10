#include <stdio.h>
int main(){
    int n,x,problems=0;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
       
       int y=0;
        for(int z=0; z<3; z++){
            scanf("%d",&x);
            if(x==1){
                y++;
            }
printf(" ");
        }
    
    if(y==2 || y==3)
    problems++;
    printf("\n");
    }
printf("%d",problems);
return 0;
}