//displaying of sparse matrix
#include <stdio.h>
int main(){
    int arr[4][5] = 
    {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };
    int i, j;
    printf("The given sparse matrix is: \n");
    for (i=0; i<4; i++){
        printf("\n");
        for (j=0; j<5; j++){
            printf("%d\t", arr[i][j]);
        }
    }
//conditions for compact matrix
    int size = 0;
    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            if (arr[i][j] != 0){
                size++;
            }
        }
    }
    int compact[size][3];                   //3 : rows colm variable
//printing sparse matrix
    printf("\n\nCompact version of the sparse matrix is: \n");
    int k = 0;
    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            if (arr[i][j] != 0){
                compact[k][0] = i;
                compact[k][1] = j;
                compact[k][2] = arr[i][j];
                k++;
            }
        }
    }
    printf("\n\nrow     column     variable\n");
    for (i=0; i<size; i++){
        printf("\n");
        for (j=0; j<3; j++){
            printf("%d\t", compact[i][j]);
        }
    }
    return 0;
}   