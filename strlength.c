#include <stdio.h>

int strlength(char *string)
{
    int length = 0;

    if(string == (char *) 0)
    {
        return -1;
    }

    for(string = string; *string != '\0'; string++)
    {
        length++;
    }

    return length;
}

int main()
{
    char *string = "Example";

    printf("Length: %d\n", strlength(string));

    return 0;
}