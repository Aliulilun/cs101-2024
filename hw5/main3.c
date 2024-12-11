#include <stdio.h>

int main() {
    for(int i=1,k=1;i<=9&&k<=9;i=i){
        printf("%d*%d=%d \t",i,k,i*k);
        if(k==9){
            ++i;
            k=0;
            printf("\n");
        }
        ++k;
    }
    return 0;
}
