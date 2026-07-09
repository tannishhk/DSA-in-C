//5 x 5 sparse matrix
#include<stdio.h>
int main(){
    int a[5][5], i=0, j=0;
    //taking input
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf("enter [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //printing the output
    for (i = 0; i<5; i++){
        printf("\n");
        for (j = 0; j<5; j++){
            printf("%d\t", a[i][j]);
        }
    }
return 0;
}
