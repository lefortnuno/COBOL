const fs = require('fs');

fs.readFile('../files/count_characters.txt', 'utf8', (err, data) => {
  if (err) {
    console.error("Erreur de lecture :", err);
    return;
  }
  console.log("Nombre de caractères :", data.length);
});
