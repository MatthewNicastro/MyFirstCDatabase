#include <stdio.h>
#include "methodCheck.h"

char* inflush(char chr[], int len){
    fgets(chr, len, stdin); 
    int x = 1;
    char ch;
    
    while(x <= len){ //runs loop
        if(chr[0]=='\n'){ //Sets base case so if nothinf is entered will return nothing
        break;
        }
        if(x == len && chr[x] !='\n'){  //if the array is full 
            while ((ch = getchar()) != '\n' && ch != EOF);
            break;
        }
        if(chr[x]=='\n'){
            break;
        }
        x++;
    }
    return chr;
}

/*Buffers the user input so only one character is taken and rest 
  are removed from memory*/
  
char flush(char inpt){
    inpt = getchar(); 
    char chr;
    while((chr = getchar()) != '\n' && chr != EOF);
    return inpt;
}
