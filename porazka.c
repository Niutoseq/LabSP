#include <stdio.h>
#include <stdlib.h>

typedef struct element{
        int data; //przechowywana wartosc
        struct element *next;
        struct element *prev;
    } element_listy;

    element_listy *head =NULL;
    //element_listy *current;

int WSTAW();
void DRUKUJ();

int main()
{
//POMOC NAUKOWA
/*
    int tab[6] = {1, 2, 5, 9, 6, 1};
    int *pointer = &tab[1];
    int *pointer2 = &tab[2];
    printf("Value of tab[1] = %d\n", *pointer);
    printf("Address of tab[1] = %p\n", pointer);
    printf("Address of tab[2] = %p\n", pointer2);
    //*pointer = tab[3]
    //printf("After doing *pointer = tab[3], *pointer is %d\n", *pointer);
    pointer++;
    printf("After doing *pointer++, *pointer is %d\n", *pointer);
    printf("Adress is now: %p\n", pointer);
    *pointer++;
    printf("After doing *pointer++, *pointer is %d\n", *pointer);
    *pointer++;
    printf("After doing *pointer++, *pointer is %d\n", *pointer);

    */
    printf("\n\n"); //czemu bez tego nie działa???
//POMOC NAUKOWA KONIEC


//NORMALNA CZESC KODU
// int main()

    head = malloc(sizeof(element_listy));
    head->data = 10;
    head->next->data = 15;
    head->next->next->data = 18;
    head->next->next->next = NULL;

    DRUKUJ(head);
    WSTAW(head, 6);
    DRUKUJ(head);

    return 0;
}


    int WSTAW(element_listy *lista, int zmienna){
            element_listy *tmp;
            tmp = (element_listy*)calloc(1, sizeof(element_listy));
            tmp->data = zmienna;
            tmp->next=lista->next;
            lista->next= tmp;
            return 0;


    }

    void DRUKUJ(element_listy *lista){
        element_listy *ptr = lista;
        printf("[");
        while(ptr != NULL)
        {
            printf(" %d ", ptr->data);
            ptr = ptr->next;
        }
        printf("]");
    }
    void SZUKAJ(){

    }
    void USUN(){

    }
    void KASUJ(){

    }
