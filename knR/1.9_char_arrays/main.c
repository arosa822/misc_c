/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description: example from 1.9 
 *
 *        Version:  1.0
 *        Created:  07/24/2019 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
/*  macimum input line size  */
#define MAXLINE 1000 

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*  print longest input line */
int main()
{
    /*  current line length */
    int len;
    /*  maximum length seen so far */
    int max;
    /* current input line*/
    char line[MAXLINE];
    /* longest line saved here` */
    char longest[MAXLINE];

    max = 0;
    while ((len = getLine(line,MAXLINE)) > 0 )
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    /* there was a line  */
    if (max > 0)
        printf("%s", longest);

    return 0;
}

/* getLine: read a line into s, return length  */
int getLine(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}

















