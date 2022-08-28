#include "my_string.hpp"


int my_puts (const char *str)
{
    if (str == NULL)
        return EOF;
    
    int index = 0;
    
    for (index; str[index] != '\0'; index++)
    {
        if (printf ("%c", str[index]) == EOF)
            return EOF;
    }
    
    if (printf ("\n") == EOF)
        return EOF;
    
    return '\n';     
}
// рисунок к строковой функции

char * my_strchr (const char *str, int symbol)
{
    int index = 0;
    
    for (index; str[index] != '\0'; index++)
    {
        if (str[index] == symbol) return (char *)str + index;
    }
    
    return NULL;
}


size_t my_strlen (const char *str)
{
    int index = 0;
    
    for (index; str[index] != '\0'; index++);
    
    return index;
}


char * my_strcpy (char *dst, const char *src)
{
    for (int index = 0; src[index] != '\0'; index++)
    {
        dst[index] = src[index];
    }
    
    return dst;
}


char * my_strncpy (char *dst, const char *src, size_t len)
{
    for (int index = 0; index < len; index++)
    {
        if (index <= my_strlen(src))
            dst[index] = src[index];
        else
            dst[index] = '\0';
    }
    
    return dst;
}


char * my_strcat( char * dst, const char * src )
{   
    int len_dst = my_strlen(dst);
    for (int index = 0; src[index] != '\0'; index++)
    {
        dst[len_dst + index] = src[index];
        
    }
    
    return dst;
}


char * my_strncat (char *dst, const char *src, size_t len)
{
    int len_dst = my_strlen(dst);
    
    for (int index = 0; (src[index] != '\0') and (index < len); index++)
    {
        dst[len_dst + index] = src[index];
    }
    
    return dst;  
}
