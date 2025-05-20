      *--1----+----2----+----3----+----4----+----5----+----6----+----7--
       IDENTIFICATION DIVISION.
       PROGRAM-ID. COBOL002.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01   WS-PRENOM PIC X(7).

       PROCEDURE DIVISION.
            MOVE 'TROFEL' TO WS-PRENOM
            PERFORM 8000-AFFICHAGE-DEB
                THRU 8000-AFFICHAGE-FIN
            STOP RUN.

        8000-AFFICHAGE-DEB.
            DISPLAY WS-PRENOM.
        8000-AFFICHAGE-FIN.
            EXIT.
