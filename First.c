#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* get_string(char *prompt);


int main()
{
    char *name = get_string("Enter your name : ");
    printf("Welcome %s",name);
    return 0;
}

char* get_string(char *prompt)
{
    int count = 0;
    char *s = malloc(1 * sizeof(char));
    char c;
    printf("%s", prompt);
    while (1)
    {
        c = getchar();
        count++;
        s = realloc(s, count * sizeof(char));

        if (c == '\n')
        {
            s[count - 1] = '\0';
            break;
        }
        else
        {
            s[count - 1] = c;
        }
    }

    return s;
}