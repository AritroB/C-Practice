#include <stdio.h>
#define MAXLINE 1000 //max input line length

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//print the longest input line
main()
{
    int length;            //current line length
    int max;               //max length seen so far
    char line[MAXLINE];    // current input line
    char longest[MAXLINE]; //longest line saved here

    max = 0;
    while ((length = getline(line, MAXLINE)) > 0)
    {
        if (length > max)
        {
            max = length;
            copy(longest, line);
        }
    }

    if (max > 0) // there was a line
    {
        printf("%s", longest);
    }

    return 0;
}