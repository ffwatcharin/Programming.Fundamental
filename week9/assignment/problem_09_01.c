#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, l;
    printf("string: ");
    scanf("%s", &str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        if (isupper(str[i]) != 0)
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("Output: %s", str);

    return 0;
}
