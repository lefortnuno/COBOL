       IDENTIFICATION DIVISION.
       PROGRAM-ID. CountCharacters.

       ENVIRONMENT DIVISION.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL.
           SELECT Fichier ASSIGN TO "../files/count_characters.txt"
               ORGANIZATION IS LINE SEQUENTIAL.

       DATA DIVISION.
       FILE SECTION.
       FD Fichier.
       01 LigneFichier         PIC X(1024).

       WORKING-STORAGE SECTION.
       01 FinFichier           PIC X VALUE 'N'.
       01 CompteurCaracteres   PIC 9(9) VALUE 0.
       01 LongueurLigne        PIC 9(4) VALUE 0.
       01 Index                PIC 9(4) VALUE 0.

       PROCEDURE DIVISION.
       Debut.
           OPEN INPUT Fichier
           PERFORM UNTIL FinFichier = 'O'
               READ Fichier
                   AT END
                       MOVE 'O' TO FinFichier
                   NOT AT END
                       COMPUTE LongueurLigne = FUNCTION LENGTH(LigneFichier)
                       PERFORM VARYING Index FROM 1 BY 1 UNTIL Index > LongueurLigne
                           ADD 1 TO CompteurCaracteres
                       END-PERFORM
               END-READ
           END-PERFORM
           CLOSE Fichier
           DISPLAY "Nombre de caractEres : " CompteurCaracteres
           STOP RUN.
