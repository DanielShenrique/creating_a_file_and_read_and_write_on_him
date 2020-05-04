#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *file;

    unsigned int size, i, numbers_of_char;
    char *character, c;

    printf("Digite a quantidade de caracteres que tera no arquivo:\n");
    scanf("%u", &size);

    character = (char *)calloc(size, sizeof(char));

    file = fopen("guardar_caractere.txt", "w");

    if (!file)
    {
        printf("Erro na abertura do arquivo\n");
        exit(0);
        system("Pause");
    }

    printf("Digite os caracteres:\n");
    scanf("%s", character);

    for (i = 0; i <= strlen(character); i++)
    {
        putc(character[i], file);
    }

    fclose(file);


    file = fopen("guardar_caractere.txt", "r");

    while ((c = getc(file)) != EOF)
    {
        printf("%c\n", c);
    }

    numbers_of_char = strlen(character);

    printf("%u\n", numbers_of_char);

    fclose(file);

    system("Pause");
    return 0;
}