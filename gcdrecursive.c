// Online C compiler to run C program online
#include <stdio.h>
int gcd(int a,int b);

int main(){
    int a;
    int b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("%d",gcd(a,b));
    return 0;}
    
    
    int gcd(int a ,int b){
        if(b==0){return a;}
        return gcd(b, a%b);}
