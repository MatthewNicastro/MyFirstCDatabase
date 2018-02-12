#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "methodCheck.h"

void remvEm(char inpt[]){
    FILE *f;
    f = fopen(filename, "rb+");
    
    size = numOf();
    
    getAll();
    
    if(f == 0){
        printf("**************TITTIES************");
        printf("DATA BOOBIES WERE NOT FOUND!!!!!!!!");
    }
    else{
        for(int i = 0; i<size; i++){
            if(strcmp(emplCol[i].empID, inpt) == 0){
                tempCol = (employee*)malloc(sizeof(employee)*(size-1));
                emplCol[i] = emplCol[size-1];
                for(int a = 0; a<(size-1); a++){
                    tempCol[a] = emplCol[a];
                }
                clearDb();
                rewind(f);
                fwrite(tempCol, sizeof(employee), (size-1), f);
                fclose(f);
                printf("******************************************** \n");
                printf("Employee %s, has been erased!\n", inpt);
                printf("******************************************** \n");
                free(tempCol);
                break;
            }
            if(i == (size-1) && strcmp(emplCol[i].empID, inpt) != 0){
                printf("******************************************** \n");
                printf("Employee not found! \n");
                printf("******************************************** \n");
            }
        }
    }
    free(emplCol);
}