#include <stdio.h>
int part(int x){
if(x%2==0 && x>2)
printf("YES");
else
printf("NO");

}
int main(){
    int x;
    scanf("%d",&x);
part(x);
return 0;
}