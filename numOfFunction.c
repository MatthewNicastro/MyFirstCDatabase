#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "methodCheck.h"

int numOf(){
    FILE *f; 
    f = fopen(filename, "rb");
    int eof;
    int empNum = 0;
    
    if(f == 0){
        printf("**************ERROR************");
        printf("DATA BASE WAS NOT FOUND!!!!!!!!");
    }
    else{
       fseek(f, 0, SEEK_END);
       eof = ftell(f);
       empNum = eof/sizeof(employee);
    }
    fclose(f);
    return empNum;
}