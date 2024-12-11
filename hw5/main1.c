#include <stdio.h>

int main()
{
    int n=7;
    for(int i=1;i<=7;++i){
        for(int j=0;j<=7;++j){
            if(j<7-(i-1)){
                printf(" ");    
            }else{
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}
