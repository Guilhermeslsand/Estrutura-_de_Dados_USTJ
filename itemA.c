#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* link;
} Node;

bool isEmpty(Node* list) {
    return list == NULL;
}

void create(Node** list) {
    *list = NULL;
}

void insertBegin(Node** list, int value) {
    Node* aux = (Node*)malloc(sizeof(Node));
    aux->data = value;
    aux->link = *list;
    *list = aux;
}

void insertEnd(Node** list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->link = NULL;

    if (*list == NULL) {
        *list = newNode;
    } else {
        Node* aux = *list;
        while (aux->link != NULL) {
            aux = aux->link;
        }
        aux->link = newNode;
    }
}

void insertAfter(Node** list, int target, int value) {
    Node* aux = *list;

    while (aux != NULL && aux->data != target) {
        aux = aux->link;
    }

    if (aux == NULL) {
        printf("Valor %d não encontrado na lista.\n", target);
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->link = aux->link;

    aux->link = newNode;
}

int removeNode(Node** list, int value) {
    Node* aux = *list;
    Node* prev = NULL;

    while (aux != NULL && aux->data != value) {
        prev = aux;
        aux = aux->link;
    }

    if (aux == NULL) {
        return -1;
    }
    if (prev == NULL) {
        *list = aux->link;
    } else {
        prev->link = aux->link;
    }

    int trash = aux->data;
    free(aux);
    return trash;
}

int removeBegin(Node** list){
    Node* aux = *list;
    *list = aux->link;
    int trash = aux->data;
    free(aux);
    return trash;
}

int removeEnd(Node** list) {
    if (*list == NULL) {
        return -1;
    }

    Node* aux = *list;
    Node* prev = NULL;

    while (aux->link != NULL) {
        prev = aux;
        aux = aux->link;
    }

    int trash = aux->data;

    if (prev == NULL) {
        *list = NULL;
    } else {
        prev->link = NULL;
    }

    free(aux);
    return trash;
}


void printList(Node* list) {
    if(isEmpty(list)){
        printf("Lista Vazia\n");
    } else{
        while (list != NULL) {
            printf("%d ", list->data);
            list = list->link;
        }
        printf("\n");   
    }
}

int count (Node* list){
    int count = 0;
    if(!isEmpty(list)){
        while (list != NULL) {
            count++;
            list = list->link;
        }   
    }
    return count;
}

int sumList (Node* list){
    int sum = 0;
    if(!isEmpty(list)){
        while (list != NULL) {
            sum = sum + list->data;
            list = list->link;
        }   
    }
    return sum;
}

int main (){
    system("clear");
    Node* list;
    int exclude = 0;
    create(&list);
    printf("\nInclui o 5 no comeco\n");
    insertBegin(&list,5);
    printf("Quantidade de Nodes na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));
    
    printf("\nInclui o 7 no comeco\n");
    insertBegin(&list,7);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));
    
    printf("\nInclui o 8 no final\n");
    insertEnd(&list,8);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));

    printf("\nInclui o 9 no final\n");
    insertEnd(&list,9);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));

    printf("\nInclui o 1 depois do 5\n");
    insertAfter(&list,5,1);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));
    
    printf("\nInclui o 25 no final\n");
    insertEnd(&list,25);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));
    
    printf("\nInclui o 37 no final\n");
    insertEnd(&list,37);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));
  
    printf("\nInclui o 68 no comeco\n");
    insertBegin(&list,68);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));
 
    printf("\nInclui o 157 no final\n");
    insertEnd(&list,157);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));
    
    printf("\nInclui o 244 no final\n");
    insertEnd(&list,244);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));
    
    printf("\nExibe toda a lista\n");
    printList(list);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));

    printf("\nExcluindo o valor 37\n");
    exclude = removeNode(&list,37);
    printList(list);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));

    printf("\nExcluindo o primeiro No da lista\n");
    exclude = removeBegin(&list);
    printf("Valor excluido:%d\n",exclude);
    printList(list);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));

    printf("\nExcluindo o ultimo No da lista");
    exclude = removeEnd(&list);
    printf("\nValor excluido:%d\n",exclude);
    printList(list);
    printf("Quantidade de Nós na lista:%d \n", count(list));
    printf("Soma dos valores de Nodes na lista:%d \n", sumList(list));

    return 0;
}
