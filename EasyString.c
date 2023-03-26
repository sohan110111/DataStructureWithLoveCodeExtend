#include <stdio.h>
#include <string.h>

int main()
{

    char string[100];
    scanf("%s", string);
    int i = 0;
    while (string[i] != '\0')
    {
        int intValuestring = (int)string[i];

        if (intValuestring >= 65 && intValuestring <= 90)
        {
            string[i] = intValuestring + 32;
        }

        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' && string[i] != 'y')
        {
            printf(".%c", string[i]);
        }
        i++;
    }

    return 0;
}