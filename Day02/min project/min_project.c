#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_books 100
char title[max_books][100];
char auther[max_books][100];
float prix[max_books];
int qontitye[max_books];
int book_connt = 0;

void Ajouter_livre()
{
    if (book_connt == max_books)
    {
        printf("je ne peux pas en ajouter plus :\n");
        return;
    }else{

        printf(" titre de liver\n");
        scanf("%s", title[book_connt]);

        printf("auteur du livre:\n");
        scanf("%s", auther[book_connt]);

        printf("le prix du liver :\n");
        scanf("%f", &prix[book_connt]);

        printf("quantite de liver :\n");
        scanf("%d", &qontitye[book_connt]);

        book_connt++;
        printf("ajouter un liver");
    }

}

void Exposer_livres()
{
    if (book_connt == 0)
    {
        printf(" pas disponible \n:");
        return;
    }
    printf("livers disponibles \n:");
    for (int i = 0; i < book_connt; i++)
    {
        printf("title liver %s :\nauther liver %s :\nprix liver %.2f dh :\n qontitye de liver %d :", title[i], auther[i], prix[i], qontitye[i]);
    }
}

void Rechercher_livre()
{
    char search_title[100];
    int trouver = 0;
    printf("quel est le livre que souhaitez rechercher :");
    scanf("%s", search_title);
    for (int i = 0; i < book_connt; i++)
    {
        if (strcasecmp(search_title, title[i]) == 0)
        {
            trouver = 1;
            printf("le titre du livre a ete trouve %s  :\nauther liver %s :\nprix liver %.2f dh:\n qontitye de liver %d :", title[i], auther[i], prix[i], qontitye[i]);

            break;
        }
    }

    if (trouver == 0)
    {
        printf("Book introuvable.\n");
    }
}

void update_quantity()
{
    char search_title[100];
    int quantity_liver = 0;
    printf("titre du livre");
    scanf("%s", title);
    for (int i = 0; i < book_connt; i++)
    {
        if (strcasecmp(search_title, title[i]) == 0)
        {
            printf("inserer un nouveau live :");
            scanf("%d", &qontitye);
            break;
        }
    }
    if (quantity_liver == 0)
    {
        printf("la quantite a ete determinee ;");
    }
    else
    {
        printf("quantitye introuvable ;");
    }
}

void supprimer_liver()
{
    char search_title[100];

    printf("trtre du liver :");
    scanf("%s", search_title);

    for (int i = 0; i < book_connt; i++)
    {

        if (strcasecmp(title[i], search_title) == 0)
        {

            for (int j = i; j < book_connt; j++)
            {
                strcpy(title[j], title[j + 1]); // strcpy
                strcpy(auther[j], auther[j + 1]);
                prix[j] = prix[j + 1];
                qontitye[j] = qontitye[j + 1];
            }
            book_connt--;
        }
    }
}

void total_liver()
{
    int total =0;
    for(int i=0;i<book_connt;i++){
        total = total +qontitye[i];
    }
    printf("le nomber total de liver est %d \n",total);
}

int main()
{
    int choix;

    do
    {
        printf("\n");
        printf("1- ajuter unr liver au stock .\n");
        printf("2- aFFICHER TIUS LES LIVER disponibles .\n");
        printf("3- recharcher un liver par son titer .\n");
        printf("4- Metter a jour la quntite d un liver \n");
        printf("5- supprime un liver du stock .\n");
        printf("6- afficher le number total de liver en stcok .\n");
        printf("7- exit \n");

        printf("Entrez la choix :");
        scanf("%d", &choix);



        switch (choix)
        {
        case 1:
            Ajouter_livre();
            break;
        case 2:
        Exposer_livres();
            break;
        case 3:
        Rechercher_livre();
            break;
        case 4:
        update_quantity();
            break;
        case 5:
        supprimer_liver();
            break;
        case 6:
            total_liver();
            break;
        case 7:
        printf("exit \n");
            break;
        default:
            printf("indisponible");
            break;
        }
    } while (choix!=7);


    return 0;
}