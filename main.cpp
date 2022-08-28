#include <stdio.h>
#include "my_string.hpp"
#include "string.h"


int main ()
{
    const char *s1 = "456";
    char s2[7] = "123";
    
    my_strncat (s2, s1, 4);
    printf("%s", s2);
    
    return 0; 
}