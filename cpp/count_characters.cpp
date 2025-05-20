#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("../files/count_characters.txt");
    if (!file) {
        std::cerr << "Erreur d'ouverture du fichier\n";
        return 1;
    }

    int count = 0;
    char c;
    while (file.get(c)) {
        count++;
    }

    file.close();
    std::cout << "Nombre de caractères : " << count << std::endl;
    return 0;
}
