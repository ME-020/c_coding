#include<stdio.h>
int main(){
    int i,j,num;
    for(int i=0;i<=4;i++){
        if(i% 2 ==0)
        { num =1;}
        else{ num=2;}
        for(int j=0;j<=i;j++){
            
            
            printf("%d ",num);
            num = num +2;
        }
        
     printf("\n");
        
    }
        printf("\n");
        return 0;}
