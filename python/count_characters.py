def count_characters(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
        return len(content)

# Exemple d'utilisation
filename = "../files/count_characters.txt"
print("Nombre de caractères :", count_characters(filename))
