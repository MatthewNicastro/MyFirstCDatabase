#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "methodCheck.h"

void addFuntion(employee inpt){
    //Opens a file pointer in append and write mode
    FILE *f;
    f = fopen(filename, "ab+");
    
    int counter;
    
    counter = 1;
    //Gets size of data base
    size = numOf();
    //Loads the data base into tempCol
    tempCol = (employee*)malloc(sizeof(employee));
    //Calls get all function
    getAll();
    
    //Checks to see if the entered employee ID has already been entered
    for(int i =0; i<size;i++){
        if(strcmp(emplCol[i].empID, inpt.empID) == 0){
            counter ++;
            break;
        }
    }
    //If it has not then will run the following code
    if(counter == 1){
        //Copies emply data into temporary loaded pointer
        strcpy(tempCol[0].first, inpt.first); 
        strcpy(tempCol[0].last, inpt.last);
        tempCol[0].current = inpt.current;
        strcpy(tempCol[0].empID, inpt.empID);
        
        if(f == 0){
            printf("**************ERROR************");
            printf("DATA BASE WAS NOT FOUND!!!!!!!!");
        }
        else{
            //appends data to bottom of list
            fwrite(tempCol, sizeof(employee), 1, f);
        }
        printf("******************************************** \n");
        printf("You have sucessfully added employee #%s \n", inpt.empID);
        printf("******************************************** \n");
    }
    else{
        printf("******************************************** \n");
        printf("You have already added employee #%s \n", inpt.empID);
        printf("******************************************** \n");
        search(inpt.empID);
        printf("******************************************** \n");
    }
    free(tempCol); //Free's up the temporary memory
    fclose(f); // closes the pointer
}