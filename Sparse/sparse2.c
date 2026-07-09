//eg. 2, printing normal matrix and then its compact form
#include<stdio.h>
int main(){
    printf("The given sparse matrix is as follows\n");
    int i=0, j=0;
    int sp[3][3] = 
    {
        {0,0,5},
        {3,0,4},
        {9,0,0}
    };
    for (i=0; i<3; i++){
        printf("\n");
        for (j=0; j<3; j++){
            printf("%d\t", sp[i][j]);
        }
    }

    int size=0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (sp[i][j] != 0){
                size++;
            }
        }
    }
    int compact[size][3];
    int k =0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (sp[i][j] != 0){
                compact[k][0] = i;
                compact[k][1] = j;
                compact[k][2] = sp[i][j];
                k++;
                }   
            }
        }
    printf("\nCompact form of the given matrix is\n");
    printf("\nROW   COL   VAR\n");
    for (i=0; i<size; i++){
        printf("\n");
        for (j=0; j<3; j++){
            printf("%d\t", compact[i][j]);
        }
    }
    return 0;
}