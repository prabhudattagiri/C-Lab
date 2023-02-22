/*Write a program that copies the content of one file to another, where the file names are
supplied to the program on command line.
*/
#include<stdio.h>
#include<conio.h>

int main(int argc, char* argv[])
{
    FILE *source, *sink;

    if(argc < 3) return printf("Insufficient Arguments...");

    source = fopen(argv[1], "r");
    sink = fopen(argv[2], "a");

    if (source == NULL || sink == NULL)
    {
        printf("Error while accessing the file\n");
        return -1;
    }
    if (feof(source) || ferror(source) || feof(sink) || ferror(sink))
    {
        printf("Error in handleing the file\n");
        return -1;
    }
    char temp = getc(source);
    while(temp != EOF)
    {
        fprintf(sink,"%c", temp);
        temp = getc(source);
    }
    return 0;
}
