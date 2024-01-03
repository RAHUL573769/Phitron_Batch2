#include <stdio.h>
int main()
{
    char asciiCharacter;
    int convertedAsciiValue;

    printf("Enter the Ascii Character");
    scanf("%c", &asciiCharacter); // Explicit type casting done here
    convertedAsciiValue = (int)asciiCharacter;
    printf(" The Ascii value of %c is %d", asciiCharacter, convertedAsciiValue);

    return 0;
}