#include <stdio.h>
int main()
{
    char D;
    printf("Enter a character:D");
    scanf("%D",&D);

    if( (D>='a' && D<='z') || (D>='A' && D<='Z'))
        Printf("%c is an alphabet.",D);
    else
        printf("%c is not an alphabet.",D);

    return 0;
}
