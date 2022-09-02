#include <stdio.h>
#include <stdlib.h>


#ifndef MY_STRING_HPP_INCLUDED
#define MY_STRING_INCLUDED

int my_puts (const char *);
char * my_strchr (const char *, int);
size_t my_strlen (const char *);
char * my_strcpy (char *, const char *);
char * my_strncpy (char *, const char *, size_t);
char * my_strcat( char *, const char *);
char * my_strncat (char *, const char *, size_t);
char * my_fgets(char *str, int num, FILE *stream);
char * my_strdup(const char *);
char * my_getline (FILE *, char *, char);

#endif // MY_STRING_INCLUDED