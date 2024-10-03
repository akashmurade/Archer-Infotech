#include <stdio.h>
#include <stdlib.h>
/**
// init and display of structure variable
struct Student 
{
    int regno;
    int rno;
    char nm[50];
    int age;
    char gen;
    float per;
};

int main()
{
    struct Student s = {11, 1, "Someone", 12, 'F', 80.00};
    printf("\nRegister Number: %d\nRoll No: %d\nName: %s\nAge: %d\nGender: %c\nPercentage: %f", s.regno, s.rno, s.nm, s.age, s.gen, s.per);
    return 0;
}

// input and display
struct Student 
{
    int regno;
    int rno;
    char nm[50];
    int age;
    char gen;
    float per;
};

int main()
{
    struct Student s;
    // Input
    printf("Enter Register Number, Roll Number, Name, Age, Gender and Percentage: ");
    scanf("%d %d", &s.regno, &s.rno);
    fflush(stdin);
    gets(s.nm);
    scanf("%d %c %f", &s.age, &s.gen, &s.per);
    // Output
    printf("\nRegister Number: %d\nRoll No: %d\nName: %s\nAge: %d\nGender: %c\nPercentage: %.2f", s.regno, s.rno, s.nm, s.age, s.gen, s.per);
    return 0;
}

// WAP to input and display the information of 2 books
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

int main()
{
    struct Book b1, b2;
    
    // Input for book 1
    printf("\nEnter Name, ISBN, Price, Number of Topics for Book 1:\n");
    fflush(stdin);
    gets(b1.name);
    scanf("%d %f %d", &b1.isbn, &b1.price, &b1.not);

    // Input for book 2
    printf("\nEnter Name, ISBN, Price, Number of Topics for Book 2:\n");
    fflush(stdin);
    gets(b2.name);
    scanf("%d %f %d", &b2.isbn, &b2.price, &b2.not);

    // Output for books
    printf("\nBook Details\n");
    printf("\nBook 1: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", b1.name, b1.isbn, b1.price, b1.not);
    printf("\nBook 2: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", b2.name, b2.isbn, b2.price, b2.not);

    return 0;
}

// passing structure variable to function
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

struct Book input();
void output(struct Book b);

int main()
{
    struct Book b1, b2;
    
    // Input for books
    b1 = input();
    b2 = input();

    // Output for books
    printf("\nBook Details\n");
    output(b1);
    output(b2);

    return 0;
}

struct Book input() 
{
    struct Book b;
    printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
    fflush(stdin);
    gets(b.name);
    scanf("%d %f %d", &b.isbn, &b.price, &b.not);
    return b;
}

void output(struct Book b) 
{
    printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", b.name, b.isbn, b.price, b.not);
}

// Using pointer to structure variable
// when we use the pointer to structure variable, then use -> rather than .
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

void input(struct Book *);
void output(struct Book);

int main()
{
    struct Book b1, b2;
    
    // Input for books
    input(&b1);
    input(&b2);

    // Output for books
    printf("\nBook Details\n");
    output(b1);
    output(b2);

    return 0;
}

void input(struct Book *b) 
{
    printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
    fflush(stdin);
    gets(b->name);
    scanf("%d %f %d", &b->isbn, &b->price, &b->not);
}

void output(struct Book b) 
{
    printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", b.name, b.isbn, b.price, b.not);
}

// Array of structure variables
// WAP to input and display the info of 3 books
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

void input(struct Book *);
void output(struct Book);

int main()
{
    int cnt = 3;
    struct Book b[3];

    for(int i = 0; i < cnt; i++) {
        printf("\nBook %d: ", i+1);
        input(b + i);
    }

    for(int i = 0; i < cnt; i++) {
        printf("\nBook %d: ", i+1);
        output(b[i]);
    }

    return 0;
}

void input(struct Book *b) 
{
    printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
    fflush(stdin);
    gets(b->name);
    scanf("%d %f %d", &b->isbn, &b->price, &b->not);
}

void output(struct Book b) 
{
    printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", b.name, b.isbn, b.price, b.not);
}

// passing the array of structure variable to function
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

void input(struct Book[], int);
void output(struct Book[], int);

int main()
{
    int cnt = 3;
    struct Book b[3];

    input(b, cnt);
    output(b, cnt);

    return 0;
}

void input(struct Book b[], int cnt) 
{
    printf("\nInput Book Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
        fflush(stdin);
        gets(b[i].name);
        scanf("%d %f %d", &b[i].isbn, &b[i].price, &b[i].not);
    }
}

void output(struct Book b[], int cnt) 
{
    printf("\nBook Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", b[i].name, b[i].isbn, b[i].price, b[i].not);
    }
}

// passing the pointer structure variables to function
// Enter the info. of N Books and display the list. (access using array notations)
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

void input(struct Book *, int);
void output(struct Book *, int);

int main()
{
    int cnt;
    printf("Enter number of books: ");
    scanf("%d", &cnt);
    struct Book *b;

    b = (struct Book *)malloc(sizeof(struct Book) * cnt);

    input(b, cnt);
    output(b, cnt);

    return 0;
}

void input(struct Book *b, int cnt) 
{
    printf("\nInput Book Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
        fflush(stdin);
        gets(b[i].name);
        scanf("%d %f %d", &b[i].isbn, &b[i].price, &b[i].not);
    }
}

void output(struct Book *b, int cnt) 
{
    printf("\nBook Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", b[i].name, b[i].isbn, b[i].price, b[i].not);
    }
}

// access using Pointer notations
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

void input(struct Book *, int);
void output(struct Book *, int);

int main()
{
    int cnt;
    printf("Enter number of books: ");
    scanf("%d", &cnt);
    struct Book *b;

    b = (struct Book *)malloc(sizeof(struct Book) * cnt);

    input(b, cnt);
    output(b, cnt);

    return 0;
}

void input(struct Book *b, int cnt) 
{
    printf("\nInput Book Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
        fflush(stdin);
        gets((b+i)->name);
        scanf("%d %f %d", &(b+i)->isbn, &(b+i)->price, &(b+i)->not);
    }
}

void output(struct Book *b, int cnt) 
{
    printf("\nBook Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", (b+i)->name, (b+i)->isbn, (b+i)->price, (b+i)->not);
    }
}

// returning the array from function
// returning single element
// get max price book
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

void input(struct Book *, int);
void output(struct Book *, int);
struct Book getMaxPriceBook(struct Book[], int);

int main()
{
    int cnt;
    printf("Enter number of books: ");
    scanf("%d", &cnt);
    struct Book *b;

    b = (struct Book *)malloc(sizeof(struct Book) * cnt);

    input(b, cnt);
    output(b, cnt);

    struct Book max[] = {getMaxPriceBook(b, cnt)};
    printf("\n\nMax Priced Book");
    output(max, 1);
    
    return 0;
}

struct Book getMaxPriceBook(struct Book b[], int cnt)
{
    int pos = 0;
    for(int i = 1; i < cnt; i++) {
        if(b[i].price > b[pos].price) {
            pos = i;
        }
    }
    return b[pos];
}

void input(struct Book *b, int cnt) 
{
    printf("\nInput Book Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
        fflush(stdin);
        gets((b+i)->name);
        scanf("%d %f %d", &(b+i)->isbn, &(b+i)->price, &(b+i)->not);
    }
}

void output(struct Book *b, int cnt) 
{
    printf("\nBook Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", (b+i)->name, (b+i)->isbn, (b+i)->price, (b+i)->not);
    }
}

// returning array
// getcopy
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};

void input(struct Book *, int);
void output(struct Book *, int);
struct Book* getCopy3(struct Book[]);

int main()
{
    int cnt;
    printf("Enter number of books: ");
    scanf("%d", &cnt);
    struct Book *b;

    b = (struct Book *)malloc(sizeof(struct Book) * cnt);

    input(b, cnt);
    output(b, cnt);

    struct Book *temp = getCopy3(b);
    printf("\n\nCopy of 3 Elements: ");
    output(temp, 3);
    output(getCopy3(b+3), 3);
    output(temp, 3);
    return 0;
}

struct Book* getCopy3(struct Book b[])
{
    static struct Book t[3];
    for(int i = 0; i < 3; i++) {
        t[i] = b[i];
    }    
    return t;
}

void input(struct Book *b, int cnt) 
{
    printf("\nInput Book Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
        fflush(stdin);
        gets((b+i)->name);
        scanf("%d %f %d", &(b+i)->isbn, &(b+i)->price, &(b+i)->not);
    }
}

void output(struct Book *b, int cnt) 
{
    printf("\nBook Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", (b+i)->name, (b+i)->isbn, (b+i)->price, (b+i)->not);
    }
}

// returning pointer
struct Book {
    char name[50];
    int isbn;
    float price;
    int not; // Number of topics
};
int pmt = 0;

void input(struct Book *, int);
void output(struct Book *, int);
struct Book* getPriceMoreThan(struct Book[], int, int);

int main()
{
    int cnt;
    printf("Enter number of books: ");
    scanf("%d", &cnt);
    struct Book *b;

    b = (struct Book *)malloc(sizeof(struct Book) * cnt);

    input(b, cnt);
    output(b, cnt);

    struct Book *p = getPriceMoreThan(b, cnt, 100);
    output(p,pmt);

    return 0;
}

struct Book* getPriceMoreThan(struct Book b[], int eleCnt, int price)
{
    pmt = 0;
    for(int i = 0; i < eleCnt; i++) {
        if(b[i].price > price) {
            pmt++;
        }
    }
    struct Book *t = (struct Book *)malloc(sizeof(struct Book) * pmt);
    for(int i = 0, j = 0; i < eleCnt; i++) {
        if(b[i].price > price) {
            t[j++] = b[i];
        }
    }
    return t;
}

void input(struct Book *b, int cnt) 
{
    printf("\nInput Book Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nEnter Name, ISBN, Price, Number of Topics:\n");
        fflush(stdin);
        gets((b+i)->name);
        scanf("%d %f %d", &(b+i)->isbn, &(b+i)->price, &(b+i)->not);
    }
}

void output(struct Book *b, int cnt) 
{
    printf("\nBook Details");
    for(int i = 0; i < cnt; i++) {
        printf("\nBook Info: %s\nISBN: %d\tPrice: %.2f\tNumber of topics: %d", (b+i)->name, (b+i)->isbn, (b+i)->price, (b+i)->not);
    }
}

// Implementing (insert-HW) and Delete Operations
// Structure Definition
 struct Node{
    int data;
    struct Node *next;
};

// Global Variables
struct Node *start = NULL;
struct Node *end = NULL;

// Function Declarations
struct Node *createNode(int);
void insertEnd(int);
void display(struct Node *);

// Main
int main()
{
    printf("\n ----- Linked List -----");
    
    while(1) {
        
        // Menu Option Selection
        int opt, n;
        printf("\n ----- Menu ----- \n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit");
        printf("\n Select Option: ");
        scanf("%d", &opt);

        switch(opt) {
            // 1.Insert
            case 1:
                printf("\n ----- Insert-Menu -----");
                printf("\n 1.Insert at start \n 2.Insert at end \n 3.Insert at position \n 4.Cancel");
                printf("\n Select Option: ");
                scanf("%d", &opt);
                switch(opt) {
                    // 1.Insert at start
                    case 1:
                        break;
                    
                    // 2.Insert at end
                    case 2:
                        printf("\n Enter value: ");
                        scanf("%d", &n);
                        insertEnd(n);
                        break;
                    
                    // 3.Insert at pos
                    case 3:
                        break;

                    // 4.Cancel
                    case 4:
                        break;

                    // Invalid Option
                    default:
                        printf("\n Invalid Option.");
                }
                break;
            
            // 2.Delete
            case 2:
                printf("\n ----- Delete-Menu -----");
                printf("\n 1.Delete from start \n 2.Delete from end \n 3.Delete from position \n 4.Delete by value \n 5.Cancel");
                printf("\n Select Option: ");
                scanf("%d", &opt);
                switch(opt) {
                    // 1.Delete from start
                    case 1:
                        if(start == NULL) {
                            printf("\n Linked List is Empty.");
                        }
                        else {
                            struct Node *temp = start;
                            start = start -> next;
                        }
                        break;
                    
                    // 2.Delete from end
                    case 2:
                        break;
                    
                    // 3.Delete from position
                    case 3:
                        break;

                    // 4.Delete by value
                    case 4:
                        break;

                    // 5.Cancel
                    case 5:
                        break;

                    // Invalid Option
                    default:
                        printf("\n Invalid Option.");
                }
                break;
            
            // 3.Display
            case 3:
                display(start);
                break;
            
            // 4.Exit
            case 4:
                exit(0);
            
            // Invalid Option
            default:
                printf("\n Invalid Option.");
        }

    }
    return 0;
}

// Function Definitions
// Create Node
struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n -> data = data;
    n -> next = NULL;
    return n;
}

// Insert at end
void insertEnd(int data) 
{
    struct Node *n = createNode(data);
    if(start == NULL) {
        start = n;
        end = n;
    }
    else {
        end -> next = n;
        end = n;
    }
}

// Display
void display(struct Node *it) 
{
    printf("\n Linked List: ");
    while(it) {
        printf("\t %d", it -> data);
        it = it -> next;
    }
}

// Normal Implementation
*/

// Implementing (insert-HW) and Delete Operations
// Structure Definition
struct Node{
    int data;
    struct Node *next;
};

// Main
int main()
{
    struct Node *start = NULL, *end = NULL, *temp = NULL; 
    int opt, n, pos, cnt = 0;
    
    printf("\n ----- Linked List -----");
    while(1) {
        // Menu Option Selection
        printf("\n ----- Menu ----- \n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit");
        printf("\n Select Option: ");
        scanf("%d", &opt);

        switch(opt) {
            // 1.Insert
            case 1:
                printf("\n ----- Insert-Menu -----");
                printf("\n 1.Insert at start \n 2.Insert at end \n 3.Insert at position \n 4.Cancel");
                printf("\n Select Option: ");
                scanf("%d", &opt);
                switch(opt) {
                    // 1.Insert at start
                    case 1:
                        printf("\n Enter value: ");
                        scanf("%d", &n);

                        // Create Node
                        temp = (struct Node *)malloc(sizeof(struct Node));
                        temp -> data = n;
                        temp -> next = start;
                        // if first node is to be inserted set first node as end
                        if(start == NULL) {
                            end = temp;
                        }
                        start = temp;

                        printf("\n %d inserted at start.", n);
                        break;
                    
                    // 2.Insert at end
                    case 2:
                        printf("\n Enter value: ");
                        scanf("%d", &n);
                        
                        // Create Node
                        temp = (struct Node *)malloc(sizeof(struct Node));
                        temp -> data = n;
                        temp -> next = NULL;

                        // Insert
                        if(end == NULL) {
                            end = temp;
                            start = temp;
                        }
                        else {
                            end -> next = temp;
                            end = temp;
                        }
                        cnt++;

                        printf("\n %d inserted at end.", n);
                        break;
                    
                    // 3.Insert at pos
                    case 3:
                        printf("\n Enter value: ");
                        scanf("%d", &n);
                        printf("\n Enter position: ");
                        scanf("%d", &pos);


                        // Create Node
                        temp = (struct Node *)malloc(sizeof(struct Node));
                        temp -> data = n;
                        temp -> next = NULL;

                        // first position
                        if(pos == 1) {
                            temp -> next = start;
                            if(start == NULL) {
                                end = temp;
                            }
                            start = temp;
                            printf("\n %d inserted at position %d", n, pos);
                        }
                        else {
                            int i = 2, valid = 1;
                            struct Node *t = start;
                            while(i < pos) {
                                t = t -> next;
                                if(t == NULL) {
                                    printf("\n Position out of bounds.");
                                    valid = 0;
                                    free(temp);
                                    break;
                                }
                            }
                            if(valid) {
                                temp -> next = t -> next;
                                t -> next = temp;
                                printf("\n %d inserted at position %d", n, pos);
                            }
                        }
                        break;

                    // 4.Cancel
                    case 4:
                        break;

                    // Invalid Option
                    default:
                        printf("\n Invalid Option.");
                }
                break;
            
            // 2.Delete
            case 2:
                // this will make sure that there is atleast one node to delete
                if(start == NULL) {
                    printf("\n Linked List is Empty.");
                }
                else {
                    printf("\n ----- Delete-Menu -----");
                    printf("\n 1.Delete from start \n 2.Delete from end \n 3.Delete from position \n 4.Delete by value \n 5.Cancel");
                    printf("\n Select Option: ");
                    scanf("%d", &opt);
                    switch(opt) {
                        // 1.Delete from start
                        case 1:
                            temp = start;
                            // if only one element is present change end to NULL
                            if(start == end) {
                                end = NULL;
                            }
                            start = start -> next;
                            free(temp);
                            break;
                        
                        // 2.Delete from end
                        case 2:
                            temp = start;
                            // if there is only one element
                            if(!temp -> next) {
                                start = NULL;
                                end = NULL;
                                free(temp);
                            }
                            else {
                                // will make temp point to the node before the one to be deleted
                                while(temp -> next -> next) {
                                    temp = temp -> next;
                                }
                                temp -> next = NULL;
                                free(end);
                                end = temp;
                            }
                            break;
                        
                        // 3.Delete from position
                        case 3:
                            printf("\n Enter Position(starting from 1): ");
                            scanf("%d", &n);
                            temp = start;
                            // if first element is to be deleted
                            if(n == 1) {
                                start = start -> next;
                                // if first element being deleted is the only one in the list then assign NULL to end
                                if(start == NULL) {
                                    end = NULL;
                                }
                                free(temp);
                            }
                            else {
                                int i = 2, validPos = 1;
                                // temp will point to the node whose next node is to be deleted
                                while(i < n) {
                                    temp = temp -> next;
                                    // if at any point there is no node after temp then the position is invalid
                                    if(temp -> next == NULL) {
                                        printf("\n Invalid Position.");
                                        validPos = 0;
                                        break;
                                    }
                                    i++;
                                }
                                if(validPos) {
                                    struct Node *t = temp -> next;

                                    // if element being deleted is the one at the end point it to the intended node
                                    if(t -> next == NULL) {
                                        end = temp;
                                    } 
                                    temp -> next = t -> next;
                                    free(t);
                                }
                            }
                            break;

                        // 4.Delete by value
                        case 4:
                            printf("\n Enter value: ");
                            scanf("%d", &n);
                            temp = start;
                            // if value found at start
                            if(temp -> data == n) {
                                start = start -> next;
                                // if only one node is present change end to NULL
                                if(start == NULL) {
                                    end = NULL;
                                }
                                free(temp);
                            }
                            else {
                                int Valid = 1;
                                while(temp -> next -> data != n) {
                                    temp = temp -> next;
                                    if(temp -> next == NULL) {
                                        printf("\n Value not found.");
                                        Valid = 0;
                                        break;
                                    }
                                }
                                if(Valid) {
                                    struct Node *t = temp -> next;
                                    temp -> next = t -> next;
                                    if(t -> next == NULL) {
                                        end = temp;
                                    }
                                    free(t);
                                }
                            }                            
                            break;

                        // 5.Cancel
                        case 5:
                            break;

                        // Invalid Option
                        default:
                            printf("\n Invalid Option.");
                    }
                }
                break;
            
            // 3.Display
            case 3:
                temp = start;
                printf("\n Linked List: ");
                while(temp) {
                    printf("\t%d", temp -> data);
                    temp = temp -> next;
                }
                break;
            
            // 4.Exit
            case 4:
                exit(0);
            
            // Invalid Option
            default:
                printf("\n Invalid Option.");
        }

    }
    return 0;
}

