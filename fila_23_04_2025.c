#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
	int data;
	struct Node* link;
} Node;

// Check if the list is empty
bool isEmpty(Node* temp) {
	return temp == NULL;
}

// Create list (not necessary in C, just init with NULL)
void create(Node** front, Node** end) {
	*front = NULL;
	*end = NULL;
}

// Insert at beginning (no return)
void store(Node** front, Node** end, int data) {
    if(isEmpty(*front) && isEmpty(*end)){
        Node* aux = (Node*)malloc(sizeof(Node));
        aux->data = data;
        aux->link = NULL;
        *front = aux;
        *end = aux;
    } else{
        Node* aux = (Node*)malloc(sizeof(Node));
	    aux->data = data;
	    aux->link = NULL;
	    (*end)->link = aux;
	    *end = aux;   
    }
}

// Remove from beginning (no return)
int restore(Node** front, Node** end) {
    if(!isEmpty(*front))
    {
        Node* aux = *front;
        if(*front == *end){
            *front = *end = NULL;  // Queue is now empty
        } else {
            *front = aux->link;  // Move front pointer to the next node
        }
        int value = aux->data;
        free(aux);
        return value;
    } else{
        printf("Fila Vazia\n");
    }
	return -1;
}
void destroy(Node** front, Node** end) {
	while (!isEmpty(*front) && !isEmpty(*end)) {
		restore(front,end);
	}
}

int main() {
	Node* front;
	Node* end;
	create(&front, &end);
	store(&front, &end, 10);
	store(&front, &end, 2);
	store(&front, &end, 15);
	printf("Valor do inicio: %d\n",restore(&front, &end));
	printf("Valor do inicio: %d\n",restore(&front, &end));
	printf("Valor do inicio: %d\n",restore(&front, &end));
	printf("Valor do inicio: %d\n",restore(&front, &end));
	return 0;
}
