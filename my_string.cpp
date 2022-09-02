#include "my_string.hpp"
#include <string.h>

int my_puts (const char *string)
{
    if (string == NULL) return EOF;
    
    int index = 0;
    
    for (index; string[index] != '\0'; index++)
    {
        if (putchar(string[index]) == EOF)
            return EOF;
    }
    
    if (putchar ('\n') == EOF)
        return EOF;
    
    return '\n';     
}
// рисунок к строковой функции

char * my_strchr (const char *string, int symbol)
{
    if (string == NULL) return NULL;

    int index = 0;
    
    for (index; string[index] != '\0'; index++)
    {
        if (string[index] == symbol) return (char *)string + index;
    }
    
    return NULL;
}


size_t my_strlen (const char *string)
{
    int index = 0;
    
    for (index; string[index] != '\0'; index++);
    
    return index;
}


char * my_strcpy (char *destination, const char *source)
{
    if (destination == NULL or source == NULL) 
        return NULL;
    
    char *ptr = destination;

    for (int index = 0; source[index] != '\0'; index++)
    {
        destination[index] = source[index];
    }

    return destination;
}


char * my_strncpy (char *destination, const char *source, size_t len)
{
    if (destination == NULL or source == NULL) 
        return NULL;
    
    for (int index = 0; index < len; index++)
    {
        if (index <= my_strlen(source))
            destination[index] = source[index];
        else
            destination[index] = '\0';
    }

    return destination;
}


char * my_strcat( char * destination, const char * source )
{   
    if (destination == NULL or source == NULL) 
        return NULL;

    int len_dst = my_strlen(destination);
    
    for (int index = 0; source[index] != '\0'; index++)
    {
        destination[len_dst + index] = source[index];
        
    }
    
    return destination;
}


char * my_strncat (char *destination, const char *source, size_t len)
{
    if (destination == NULL or source == NULL) 
        return NULL;

    int len_dst = my_strlen(destination);
    
    for (int index = 0; (source[index] != '\0') and (index < len); index++)
    {
        destination[len_dst + index] = source[index];
    }
    
    return destination;  
}

char * my_fgets(char *string, int num, FILE *stream)
{
    if (string == NULL or stream == NULL) 
        return NULL;
    
    int index = 0;
    
    char symbol = '\0';

    for (index; (index < num) and (symbol) != '\n'; index++)
    {
        symbol = fgetc(stream);

        if (symbol == EOF) return NULL;
        
        string[index] = symbol;
    }

    string[index + 1] = '\0';
    
    return string;
}

char * my_strdup(const char *string)
{
    if (string == NULL) return NULL;

    char * buf = (char *) malloc (my_strlen (string) + 1); 

    if (buf == NULL) return NULL;

    return my_strcpy (buf, string);
}

char * my_getline (FILE *file, char *buf, char delim)
{
    if (file == NULL or buf == NULL) 
        return NULL;

    int index = 0;
    char symbol = '\0';
    char delim = '\n';
    
    for (index ; symbol != delim; index++)
    {
        
        symbol = fgetc(file);

        if (symbol == EOF) return NULL;
        
        buf[index] = symbol;
        
    }
    return buf;
}