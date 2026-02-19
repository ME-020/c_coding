#include <stdio.h>

int main() {
    int a[4]={2,3,1,8};
    int i,j;
    printf("{}\n");
    for(i =0;i<4;i++){
        printf("{%d}\n",a[i]);
        for(j=i+1;j<4;j++){
            printf("{%d %d}\n",a[i],a[j]);
        }
    
    printf("{%d %d %d %d}\n",a[0],a[1],a[2],a[3]);}

    return 0;
}
