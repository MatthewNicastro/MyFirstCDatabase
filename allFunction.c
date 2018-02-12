#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "methodCheck.h"


int getAll(){
    //Opens a file pointer
    FILE *f;
    f = fopen(filename, "rb");
    //gets the # of employee 
    size = numOf();
    
    int numEMread;
    numEMread = 0;
    
    
    if(f == 0){
        printf("**************ERROR************ \n");
        printf("DATA BASE WAS NOT FOUND!!!!!!!! \n");
    }
    else{
        //Relocates memory recently created in empCol
        emplCol = realloc(emplCol, size*sizeof(employee));
        //Rewindes the file pointer
        rewind(f);
        //Loads the data base into emplCol and saves the num of employees into a variable
        numEMread = fread(emplCol, sizeof(employee), size, f);
        fclose(f);
    }
        return numEMread;
}

void viewAll(){
    int numEMread;
    
    char status[20];
    numEMread = getAll();
    
    employee thisemp;
    //Prints all the employees 
     if(numEMread != 0){
            for(int i = 0; i < numEMread; i++){
                thisemp = emplCol[i];
                switch(thisemp.current){
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
            }
        }
        else{
            printf("There are currently no employee's! \n");
        }
        free(emplCol);
}
