//take input of a 2D array and display it in a matrix format
#include <stdio.h>
int main(){
    int a[3][3], i=0 , j=0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Enter elements : ");
            scanf("%d", &a[i][j]);          //till here we are just taking input from user
        }
    }
    for (i=0; i<3; i++){
        printf("\n");
        for (j=0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
    }                                       //printing the actual matrix
    return 0;
}
