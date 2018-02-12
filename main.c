#include <stdio.h>
#include <string.h>
#include "methodCheck.h"

int main(int argc, char **argv)
{
    char input;
    char value; 
    int num;
    char srch[cont];
    char edit[cont];
    
    input = 'w';
    value = 'w';
    
    printf("**************WELCOME TO TECHNOVIS DATABASE************ \n");
    while(value != 'q'){                                        //Creates loop to run data base
        
        printf("****************************************************************************** \n");
        printf("List of comands: \n");
        printf("    Type 'a' and press enter to add an employee \n");
        printf("    Type 'c' and press enter to see how many employee's there are \n");
        printf("    Type 'v' and press enter to view all employee's \n");
        printf("    Type 'e' and press enter to edit employee data \n");
        printf("    Type 's' and press enter to search employees by last name \n");
        printf("    Type 'r' and press enter to remove employee data \n");
        printf("    Type 'd' and press enter to delete database \n");
        printf("    Type 'q' and press enter to quit data base \n");
        printf("****************************************************************************** \n");
        printf("Type command here: ");
        
        value = flush(input);
        
        switch(value){
            case 'a':
                printf("******************************************** \n");
                printf("Please enter employee's first name: \n");
                inflush(inptName.first, cont); //Gets first name
                printf("******************************************** \n");
                printf("Please enter employee's last name: \n");
                inflush(inptName.last, cont);//Gets last name
                printf("******************************************** \n");
                printf("Please enter employee's ID: \n");
                inflush(inptName.empID, cont);//Gets employee ID
                printf("******************************************** \n");
                while(loop != 'a' && loop != 'b' && loop != 'c'){ 
                    printf("******************************************** \n");
                    printf("Please enter employee's current working status: \n");
                    printf("    For employed enter: a \n");
                    printf("    For retired enter: b \n");
                    printf("    For terminated enter: c \n");
                    printf("Enter employee status here: \n");
                    inptName.current = flush(inptName.current);
                    loop = inptName.current;
                    printf("******************************************** \n");
                    }
                loop = 'w';
                createDb();
                addFuntion(inptName); //Calls the add employee function
                break;
                
            //Gets number of employee's
            case 'c':
                num = numOf();//Calls number of employee's function
                if(num == 1){
                printf("******************************************** \n");
                printf("There is currently %d employee \n", num);
                printf("******************************************** \n");
                }
                else{
                    printf("******************************************** \n");
                    printf("There are currently %d employee's \n", num);
                    printf("******************************************** \n");
                }
                break;
                
            //Shows list of all employee's
            case 'v':
                createDb(); //Uses malloc to allocate the database ptr & sets \0 for malloc buffer
                viewAll(); //Calls view all function
                break;
            //Edit an employee
            case 'e':
                printf("******************************************** \n");
                printf("Enter ID of employee data you wish to change: \n");
                inflush(edit, cont);
                createDb();
                editEm(edit);
                break;
            //Search's database
            case 's':
                printf("******************************************** \n");
                printf("Enter # and employee ID you want to search for: \n");
                inflush(srch, cont);
                createDb();
                search(srch);
                strcpy(srch, " ");
                break;
            
            case 'r':
                printf("******************************************** \n");
                printf("Enter ID of employee data you wish to delete: \n");
                inflush(edit, cont);
                createDb();
                remvEm(edit);
                break;
            //Clears database
            case 'd' :
                clearDb();//Deletes all items in database 
                printf("******************************************** \n");
                printf("Deleting...\n");
                printf("DONE! \n");
                printf("******************************************** \n");
                break;
                
            //Closes database
            case 'q':                                           
                break;
                
            //If invalid comand is entered resets
            default:                                            
                printf("******************************************** \n");
                printf("Please enter valid command! \n"); 
                printf("******************************************** \n");
                break;
        }
    }
    printf("******************************************** \n");
    printf("Thank you for using technovis database! \n");
    printf("Good bye! \n");
    printf("******************************************** \n");
	return 0;
}