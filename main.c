// create a main function in language C
// compile: gcc main.c -o main
// run: ./main

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[50][50], i, j, x = 0, y = 0, k, d, px[20], py[20], p, s = 0, x1 = 0, y1 = 0, choix, l, c;
    system("color 1F");
    printf("INSERER LE NOMBRE L ET C DE LA GRILLE CA COMMENCE DE 0\n");
    scanf("%d%d", &l, &c);
    printf("\n");
    for (i = 0; i <= l; i++)
    {
        for (j = 0; j <= c; j++)
        {
            m[i][j] = 1;
        }
    }

    for (k = 0; k <= l; k++)
    {
        for (j = 0; j <= c; j++)
        {
            printf("     %d", m[k][j]);
        }
        printf("\n");
    }
    printf("\n");
    do
    {
        printf("inserer le nombre de point:\n");
        scanf("%d", &p);
    } while (p > (l * c));

    for (i = 1; i <= p; i++)
    {
        printf("inserer x et y:\n");
        scanf("%d%d", &x, &y);
        px[i - 1] = x;
        py[i - 1] = y;
        if ((px[i - 1] > l) || (py[i - 1] > c))
        {
            do
            {
                system("cls");
                printf("reessayer pour le %d point \n", i + 1);
                scanf("%d%d", &x, &y);
                px[i - 1] = x;
                py[i - 1] = y;
            } while ((px[i - 1] > l) || (py[i - 1] > c));
        }
        else
        {
            m[x][y] = 0;
        }
    }
    printf("\n");

    for (k = 0; k <= l; k++)
    {
        for (j = 0; j <= c; j++)
        {
            printf("     %d", m[k][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = p - 1; i >= 0; i--)
    {
        printf("|         |\n");
        printf("|  (%d,%d)  |\n", px[i], py[i]);
        printf("|_________|\n");
    }
    printf("\n");
    do
    {
        printf(" _________MENU__________\n");
        printf("|       1.AVANCER       |\n");
        printf("|       2.RECULER       |\n");
        printf("|       3.RENITIALISER  |\n");
        printf("|_______4.QUITTER_______|\n");

        printf("    Entrer un choix: ");
        scanf("%d", &choix);

        system("cls");
        switch (choix)
        {
        case 1:
            if (s >= p - 1)
            {
                printf("impossible vous depassez le max \n");
                printf("\n");
                printf("|         |\n");
                printf("| (full)  |\n");
                printf("|_________|\n");
                break;
            }
            else
            {
                printf("\n");
                printf(" vous avancez \n");
                printf("\n");
                s++;
                for (i = 0; i <= l; i++)
                {
                    for (j = 0; j <= c; j++)
                    {
                        m[i][j] = 1;
                    }
                }

                for (i = s; i >= 0; i--)
                {
                    x1 = px[i];
                    y1 = py[i];
                    m[x1][y1] = 0;
                }

                for (k = 0; k <= l; k++)
                {
                    for (j = 0; j <= c; j++)
                    {
                        printf("     %d", m[k][j]);
                    }
                    printf("\n");
                }

                for (i = s; i >= 0; i--)
                {
                    printf("|         |\n");
                    printf("|  (%d,%d)  |\n", px[i], py[i]);
                    printf("|_________|\n");
                }
            }
            break;
        case 2:
            if (s <= 0)
            {
                printf("impossible vous depassez le min \n");
                printf("\n");
                printf("|         |\n");
                printf("| (empty) |\n");
                printf("|_________|\n");
                break;
                printf("\n");
            }
            else
            {
                printf("\n");
                printf(" vous reculez\n");
                printf("\n");
                s--;
                for (i = 0; i <= l; i++)
                {
                    for (j = 0; j <= c; j++)
                    {
                        m[i][j] = 1;
                    }
                }

                for (i = s; i >= 0; i--)
                {
                    x1 = px[i];
                    y1 = py[i];
                    m[x1][y1] = 0;
                }

                for (k = 0; k <= l; k++)
                {
                    for (j = 0; j <= c; j++)
                    {
                        printf("     %d", m[k][j]);
                    }
                    printf("\n");
                }

                for (i = s; i >= 0; i--)
                {
                    printf("|         |\n");
                    printf("|  (%d,%d)  |\n", px[i], py[i]);
                    printf("|_________|\n");
                }
                break;
        case 3:
            printf("INSERER LE NOMBRE L ET C DE LA GRILLE\n");
            scanf("%d%d", &l, &c);
            printf("\n");
            for (i = 0; i <= l; i++)
            {
                for (j = 0; j <= c; j++)
                {
                    m[i][j] = 1;
                }
            }

            for (k = 0; k <= l; k++)
            {
                for (j = 0; j <= c; j++)
                {
                    printf("     %d", m[k][j]);
                }
                printf("\n");
            }

            do
            {

                printf("inserer le nombre de point:\n");
                scanf("%d", &p);
            } while (p > (l * c));

            for (i = 1; i <= p; i++)
            {
                printf("inserer x et y:\n");
                scanf("%d%d", &x, &y);
                px[i - 1] = x;
                py[i - 1] = y;
                if ((px[i - 1] > l) || (py[i - 1] > c))
                {
                    do
                    {
                        printf("%d");
                        system("cls");
                        printf("reessayer pour le %d point \n", i + 1);
                        scanf("%d%d", &x, &y);
                        px[i - 1] = x;
                        py[i - 1] = y;
                    } while ((px[i - 1] > l) || (py[i - 1] > c));
                }
                else
                {
                    m[x][y] = 0;
                }
            }

            for (k = 0; k <= l; k++)
            {
                for (j = 0; j <= c; j++)
                {
                    printf("     %d", m[k][j]);
                }
                printf("\n");
            }
            printf("\n");

            for (i = p - 1; i >= 0; i--)
            {
                printf("|         |\n");
                printf("|  (%d,%d)  |\n", px[i], py[i]);
                printf("|_________|\n");
            }
            break;
        case 4:
            printf("------------------------BELLA CIAO---------------------");
            break;
        default:
            printf("\n les choix entre 1 et 4\n");
            }
            break;
        }

    } while (choix != 4);

    return 0;
}
