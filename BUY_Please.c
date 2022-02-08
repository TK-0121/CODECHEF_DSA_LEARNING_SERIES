#include<stdio.h>
#include<unistd.h>
#include<math.h>
int main(){
    int x;
    int y;
    int a;
    int b;
    int total;
    scanf("%d %d %d %d",&x,&y,&a,&b);
    total = a*x+b*y;
    printf("%d",total);
    return 0;
}
