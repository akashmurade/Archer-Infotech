#include <stdio.h>
/**
// File Handling
// Opening the file
int main()
{
    FILE *fp = fopen("D:\\Archer-Infotech\\C\\File\\fopen.txt", "w");
    if(fp) {
        printf("\n File Opened Successfully");
    } 
    else {
        printf("\n Error");
    }
    fclose(fp);
    return 0;
}

// Using fgetc() and fputc() to read and write the data character by character.
*/
int main()
{
    char ch;

    // Opening file
    FILE *fp = fopen("D:\\Archer-Infotech\\C\\File\\data.txt", "r");
    printf("Data in \"data.txt\":\n");
    
    // Iterating and printing every char
    while(!feof(fp)) {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
