#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "methodCheck.h"

void createDb(){
    //Allocates the first memory slot of emplCol for the buffer
    emplCol = (employee*)malloc(1*sizeof(employee));
    emplCol[0].current = '\0';
    strcpy(emplCol[0].empID, "");
    strcpy(emplCol[0].first, "");
    strcpy(emplCol[0].last, "");
}