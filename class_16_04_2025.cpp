#include <iostream>
using namespace std;

struct Node{
    char letter;
    Node* link;
};

bool isEmpty(Node* list){
    return list == NULL;
}

void create(Node* list){
    list = NULL;
}

void inicialized(Node* list){
    if(isEmpty(list)){
        list = new Node;
        list->link = NULL;
    }
}

//Sem return
void insertBegin(Node** list, char data){
    if(!isEmpty(*list)){
        Node* aux = new Node;
        aux->letter = data;
        aux->link = *list;
        *list = aux;
    }
}

//Sem return
void removeBegin(Node** list){
    if(!isEmpty(*list)){
        Node* aux = *list;
        *list = aux->link;
        delete(aux);
    }
}


/*
//Com return
Node* insertBegin(Node* list, char data){
    if(!isEmpty(list)){
        Node* aux = new Node;
        aux->letter = data;
        aux->link = list;
        return aux;
    } else {
        return NULL;
    }
}
*/

/*
//Com return
Node* removeBegin(Node* list){
    if(!isEmpty(list)){
        Node* aux = list;
        list = list->link;
        delete(aux);
        return list;
    } 
    return list;
}
*/

void printlist(Node* list){
    while(list!=NULL){
        cout << list->letter << " ";
        list = list->link;
    }
    cout << endl;
}

int main()
{
    Node* list;
    create(list);
    inicialized(list);
    insertBegin(&list,'g'); //sem return
    //list = insertBegin(list,'g'); //com return
    printlist(list);
    insertBegin(&list,'m'); //sem return
    //list = insertBegin(list,'m'); //com return
    printlist(list);
    removeBegin(&list); //sem return
    //list = removeBegin(list); //com return
    printlist(list);
    return 0;
}
