#include <stdio.h>

int main()
{
     //Filebase
     //read, write, append
     //r => read
     //w => write
     //a => append
     //r+ => read, write
     //w+ => read, write
     //a+ => append, read
     //open, process, close

     char text[100];
     FILE *dataFile;

     //Change to r when want to see the output on terminal
     dataFile = fopen("Data.txt", "a+"); //This can modify

     //Write the value for stored to the file .txt
     fprintf(dataFile, "Sendy"); //Commend this when, see the output on terminal
     rewind(dataFile); //For comeback the pointer

     //For show the data in the compiler
     fscanf(dataFile, "%[^\n]", text);
     printf("%s",text);

     fclose(dataFile);

     return 0;
}