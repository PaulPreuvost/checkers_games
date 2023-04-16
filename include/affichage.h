//Affichage

//Permet d'afficher les couleurs
void Color(int colorInput, int colorBack) {
    printf("\033[%d;%dm", colorInput, colorBack);
}

//Affiche la grille
void afficher_Grille() {
    // Effacer la console
    system("cls");
    // afficher la grille
    for (int i = 0; i < board_Size; i++) {
        for (int j = 0; j < board_Size; j++) {
            if (i == 0 && j == 0) {
                Color(34, 47);
                printf("X");
                Color(0, 49); // X (position actuelle du joueur) avec la couleur de la case + le fond en blanc
            } else if (grid[i][j] == 0) {
                Color(34, 49);
                printf("X");
                Color(0, 49); // X/0 en bleu
            } else if (grid[i][j] == 1) {
                Color(33, 49); //1 en jaune/joueur Blanc
                printf("1");
                Color(0, 49);
            } else if (grid[i][j] == 2) {
                Color(31, 49); //2 en rouge/joueur Rouge
                printf("2");
                Color(0, 49);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}