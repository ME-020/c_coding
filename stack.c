// Online C compiler to run C program online
#include <stdio.h>
int stack[5];
int top=-1;

void push(int val){
 if(top<5)
     
     stack[++top]=val;
}
 int main(){
     push(4);
     push(5);
printf("%d",stack[top]);
return 0;}
