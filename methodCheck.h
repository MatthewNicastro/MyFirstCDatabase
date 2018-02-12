//General acess

typedef struct employee{
    char first[50]; 
    char last[50];
    char current;
    char empID[50]; 
}employee;

#define filename "database.txt" 
#define cont 20
int size;
char loop;
employee *emplCol;
employee *tempCol;
employee temp;
employee inptName;

//Character flush function
char flush(char); 

//Number of employee's function
int numOf();

//String flush function
char* inflush(char[], int);

//Clear all function 
void clearDb();

//Add employee function
void addFuntion(employee);

//See all employee's
void viewAll();
int getAll();

//Creates malloc
void createDb();

//Search function
void search(char[]);

//Edit function
void editEm(char[]);

//Remove function
void remvEm();