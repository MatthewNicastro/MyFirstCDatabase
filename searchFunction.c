#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "methodCheck.h"

void search(char inpt[]){
    FILE *f;
    f = fopen(filename, "rb");
    
    size = numOf();
    
    char status[cont];
    
    if(f == 0){
        printf("**************ERROR************ \n");
        printf("DATA BASE WAS NOT FOUND!!!!!!!! \n");
    }else{
        getAll();
        for(int i = 0; i<size; i++){
            if(strcmp(emplCol[i].empID, inpt) ==0){
                switch(emplCol[i].current){
                    case 'a':
                        strcpy(status,"employed");
                        break;
                    case 'b':
                        strcpy(status, "retired");
                        break;
                    case 'c':
                        strcpy(status, "terminated");
                        break;
                }
                printf("******************************************** \n");
                printf("Employee first name: %s \n", emplCol[i].first);
                printf("Employee last name: %s \n", emplCol[i].last);
                printf("Employee ID: %s \n", emplCol[i].empID);
                printf("Employee Status: %s \n", status);
                printf("******************************************** \n");
                break;
            }
            if(i == size-1 && strcmp(emplCol[i].empID, inpt) != 0){
                printf("Employee not found \n");
            }
        }
        free(emplCol);
        fclose(f);
    }
}