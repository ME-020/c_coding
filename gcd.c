// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int a,b,gcd;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    
    
    for(int i=1;i<=a && i<=b; i++){
    if(a%i==0 && b%i==0){    
      gcd =i; 
    }
    }
    printf("%d",gcd);
    return 0;.
}
