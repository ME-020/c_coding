#include<stdio.h>
int main (){
int a[3][4]={{1,2,3,6},{4,5,6,5},{7,8,9,6}};
int b[4][2]={{6,5},{4,3},{5,6},{7,4}};
int c[3][2],i,j,k;

for( i=0;i<3;i++){
for (j =0;j<2;j++){
c[i][j]=0;
for (k =0;k<4;k++){
c[i][j] =c[i][j]+a[i][k]*b[k][j];
}}}
for(i = 0; i<3;i++){
for (j=0;j<2;j++)
printf("%d\t", c[i][j]);

printf("\n");}
return 0;}
