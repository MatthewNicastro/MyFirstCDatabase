#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "methodCheck.h"
//Asks how many aspects you wish to change
static char amnt(char in){
    while(in != 'a'&& in != 'b'&& in !='c' && in!='d'){
    printf("How many criteria do you want to change? \n");
    printf("    'a' = 1, 'b' = 2, 'c' = 3, 'd' = 4 \n");
    in = flush(in);
    }
    return in;
}
//Asks which aspects you would like to change
static char aspCh(char in){
    char asp;
    printf("******************************************** \n");
    do{
        switch(in){
            case 'a':
                while(asp != 'a' && asp != 'b'&& asp !='c' && asp !='d'){
                printf("What would you like to change? \n");
                printf("    'a' = first name, 'b' = last name, 'c' = ID, 'd' = status \n");
                asp = flush(asp);
                }
                break;
            case 'b':
                while(asp != 'e' && asp != 'f'&& asp !='g' && asp !='h' && asp != 'i' && asp != 'j'){
                printf("What would you like to change? \n");
                printf("    'e' = first & last name, 'f' = first name & ID, 'g' = first name & status \n");
                printf("    'h' = last name & ID, 'i' = last name & status, 'j' = ID & status \n");
                asp =flush(asp);
                }
                break;
            case 'c': 
                while(asp != 'k' && asp != 'l'&& asp !='m'){
                printf("What would you like to change? \n");
                printf("    'k' = first & last name & ID, 'l' = first name & last name & status \n");
                printf("    'm' = last name & ID & status \n");
                asp = flush(asp);
                }
                break;
            case 'd':
                asp = 'n';
                break;
            default:
                printf("Enter Valid command! \n");
        }
    }   while(asp != 'a' && asp != 'b'&& asp !='c' && asp !='d' && asp != 'e'&& asp != 'f'&& asp !='g' && asp !='h' && asp != 'i'&& asp != 'j'&& asp !='k' && asp !='l' && asp != 'm'&& asp != 'n');
    printf("******************************************** \n");
    return asp;
}
//All choices for every possible employee change
static employee ouP(char ins, employee inp){
    printf("******************************************** \n");
    switch(ins){
        case 'a':
            printf("Please enter employee's new first name: \n");
            inflush(temp.first, cont);
            strcpy(temp.last,inp.last);
            strcpy(temp.empID, inp.empID);
            temp.current = inp.current;
            break;
        case 'b':
            printf("Please enter employee's new last name: \n");
            inflush(temp.last, cont);
            strcpy(temp.first, inp.first);
            strcpy(temp.empID, inp.empID);
            temp.current = inp.current;
            break;
        case 'c':
            printf("Please enter employee's new ID: \n");
            inflush(temp.empID, cont);
            strcpy(temp.first, inp.first);
            strcpy(temp.last, inp.last);
            temp.current = inp.current;
            break;
        case 'd':
            do{
                printf("Please enter employee's new status: \n");
                printf("    For employed enter: a \n");
                printf("    For retired enter: b \n");
                printf("    For terminated enter: c \n");
                temp.current = flush(temp.current);
            }while(temp.current != 'a' && temp.current != 'b' && temp.current != 'c');
            strcpy(temp.first, inp.first);
            strcpy(temp.empID, inp.empID);
            strcpy(temp.last, inp.last);
            break;
        case 'e':
            printf("Please enter employee's new first name: \n");
            inflush(temp.first, cont); 
            printf("Please enter employee's new last name: \n");
            inflush(temp.last, cont);
            strcpy(temp.empID, inp.empID);
            temp.current = inp.current;
            break;
        case 'f':
            printf("Please enter employee's new first name: \n");
            inflush(temp.first, cont); 
            printf("Please enter employee's new ID: \n");
            inflush(temp.empID, cont);
            strcpy(temp.last, inp.last);
            temp.current = inp.current;
            break;
        case 'g':
            printf("Please enter employee's new first name: \n");
            inflush(temp.first, cont); 
            do{
                printf("Please enter employee's new status: \n");
                printf("    For employed enter: a \n");
                printf("    For retired enter: b \n");
                printf("    For terminated enter: c \n");
                temp.current = flush(temp.current);
            }while(temp.current != 'a' && temp.current != 'b' && temp.current != 'c');
            strcpy(temp.last, inp.last);
            strcpy(temp.empID, inp.empID);
            break;
        case 'h':
            printf("Please enter employee's new last name: \n");
            inflush(temp.last, cont); 
            printf("Please enter employee's new ID: \n");
            inflush(temp.empID, cont);
            strcpy(temp.first, inp.last);
            temp.current = inp.current;
            break;
        case 'i':
            printf("Please enter employee's new last name: \n");
            inflush(temp.last, cont); 
            printf("Please enter employee's new ID: \n");
            flush(temp.current);
            strcpy(temp.first, inp.first);
            strcpy(temp.empID, inp.empID);
            break;
        case 'j':
            printf("Please enter employee's new empID: \n");
            inflush(temp.empID, cont); 
            do{
                printf("Please enter employee's new status: \n");
                printf("    For employed enter: a \n");
                printf("    For retired enter: b \n");
                printf("    For terminated enter: c \n");
                temp.current = flush(temp.current);
            }while(temp.current != 'a' && temp.current != 'b' && temp.current != 'c');
            strcpy(temp.first, inp.first);
            strcpy(temp.last, inp.last);
            break;
        case 'k':
            printf("Please enter employee's new first name: \n");
            inflush(temp.first, cont); 
            printf("Please enter employee's new last name: \n");
            inflush(temp.last, cont);
            printf("Please enter employee's new ID: \n");
            inflush(temp.empID, cont);
            temp.current = inp.current;
            break;
        case 'l':
            printf("Please enter employee's new first name: \n");
            inflush(temp.first, cont); 
            printf("Please enter employee's new last name: \n");
            inflush(temp.last, cont);
            do{
                printf("Please enter employee's current working status: \n");
                printf("    For employed enter: a \n");
                printf("    For retired enter: b \n");
                printf("    For terminated enter: c \n");
                printf("Enter employee status here: \n");
                temp.current = flush(temp.current);
            }while(temp.current != 'a' && temp.current != 'b' && temp.current != 'c');
            strcpy(temp.empID, inp.empID);
            break;
        case 'm':
            printf("Please enter employee's new last name: \n");
            inflush(temp.last, cont); 
            printf("Please enter employee's new ID name: \n");
            inflush(temp.empID, cont);
            do{
                printf("Please enter employee's current working status: \n");
                printf("    For employed enter: a \n");
                printf("    For retired enter: b \n");
                printf("    For terminated enter: c \n");
                printf("Enter employee status here: \n");
                temp.current = flush(temp.current);
            }while(temp.current != 'a' && temp.current != 'b' && temp.current != 'c');
            strcpy(temp.first, inp.first);
            break;
        case 'n':
            printf("Please enter employee's new first name: \n");
            inflush(temp.first, cont);
            printf("Please enter employee's new last name: \n");
            inflush(temp.last, cont);
            printf("Please enter employee's new ID: \n");
            inflush(temp.empID, cont);
            do{
                printf("Please enter employee's current working status: \n");
                printf("    For employed enter: a \n");
                printf("    For retired enter: b \n");
                printf("    For terminated enter: c \n");
                printf("Enter employee status here: \n");
                temp.current = flush(temp.current);
            }while(temp.current != 'a' && temp.current != 'b' && temp.current != 'c');
            break;
    }
    printf("******************************************** \n");
    return temp;
}

void editEm(char inpt[]){
    //Creates a file pointer and opens the file in read/write mode
    FILE *f;
    f = fopen(filename, "rb+");
    
    char inChg1;
     
    inChg1 = 'w';
     //gets the size of the employee data base aka all the employees
    size = numOf();
    //Allocates memory in the emplCol employee poiter
    getAll();
    
    if(f == 0){
        printf("**************ERROR************");
        printf("DATA BASE WAS NOT FOUND!!!!!!!!");
    }
    else{
        fread(emplCol, sizeof(employee), size, f); //loads the data of the data base into the emplCol pointer
        //Search's the loaded data base for the entered employee number
        for(int i = 0; i < size; i++){
            if(strcmp(emplCol[i].empID, inpt) == 0){
                emplCol[i] = ouP(aspCh(amnt(inChg1)), emplCol[i]);//Changes value of that employee to the new edited value
                //Moves the file pointer to the start of the file
                rewind(f);
                //Rewrites the data of the file with updated values
                fwrite(emplCol, sizeof(employee), size, f);
                printf("******************************************** \n");
                printf("Employee has been updated! \n");
                printf("******************************************** \n");
                break;
            }
            else if(i == size-1 && strcmp(emplCol[i].empID, inpt) != 0){
                printf("******************************************** \n");
                printf("Employee not found! \n");
                printf("******************************************** \n");
            }
        }
        fclose(f); //Closes the file pointer
    }
    free(emplCol);//Free's the allocated memory
}