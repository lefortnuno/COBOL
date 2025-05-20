#include <stdio.h>

int main() {
    FILE *file = fopen("../files/count_characters.txt", "r");
    if (!file) {
        perror("Erreur d'ouverture du fichier");
        return 1;
    }

    int count = 0;
    while (fgetc(file) != EOF) {
        count++;
    }

    fclose(file);
    printf("Nombre de caractères : %d\n", count);
    return 0;
}
