/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* link;
} Node;

// Check if the list is empty
bool isEmpty(Node* top) {
    return top == NULL;
}

// Create list (not necessary in C, just init with NULL)
void create(Node** top) {
    *top = NULL;
}

// Insert at beginning (no return)
void push(Node** top, int data) {
    Node* aux = (Node*)malloc(sizeof(Node));
    aux->data = data;
    aux->link = *top;
    *top = aux;
}

// Remove from beginning (no return)
int restore(Node** top) {
    if (!isEmpty(*top)) {
        Node* aux = *top;
        *top = aux->link;
        int value = aux->data;
        free(aux);
        return value;
    }
    return -1;
}

int pop(Node** top){
    return restore(top);
}

void destroy(Node** top){
    while (!isEmpty(*top)){
        restore(top);
    }
}

// Print the list
void printList(Node* top) {
    if(isEmpty(top)){
        printf("Pilha Vazia\n");
    } else{
        while (top != NULL) {
            printf("%d ", top->data);
            top = top->link;
        }
        printf("\n");   
    }
}

int conta(Node* top){
    int value = 0;
    while(top != NULL){
        value = value + 1;
        top = top->link;
    }
    return value;
}

int soma(Node* top){
    int value = 0;
    while(top != NULL){
        value = value + top->data;
        top = top->link;
    }
    return value;
}

int main() {
    Node* pilha;
    create(&pilha);
    push(&pilha, 10);
    push(&pilha, 2);
    push(&pilha, 25);
    printf("Quantidade de elementos: %d\n", conta(pilha));
    printf("Soma dos elementos: %d\n", soma(pilha));
    printf("Valor do topo: %d\n",pop(&pilha));
    printf("Valor do topo: %d\n",pop(&pilha));
    destroy(&pilha);
    printf("Quantidade de elementos: %d\n", conta(pilha));
    return 0;
}
