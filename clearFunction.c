#include <stdio.h>
#include <stdlib.h>
#include "methodCheck.h"

//Clears the data base using the write function
void clearDb(){
    //Creates a file pointer to write
    FILE *f; 
    f = fopen(filename, "wb");
    if(f == 0){
        printf("**************ERROR************");
        printf("DATA BASE WAS NOT FOUND!!!!!!!!");
    }else{
        fclose(f);
    }
}