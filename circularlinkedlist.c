#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(){
    struct Node *n, *t;
    n = (struct Node*)malloc(sizeof(struct Node));  // FIXED

    printf("Enter the data: ");
    scanf("%d", &n->data);

    if(head == NULL){
        head = n;
        n->next = head;   // FIXED
    }
    else{
        t = head;
        while(t->next != head){
            t = t->next;
        }
        t->next = n;
        n->next = head;
    }
}

void display(){
    struct Node *t;

    if(head == NULL){
        printf("List is empty");
    }
    else{
        t = head;
        do{
            printf("%d ", t->data);
            t = t->next;
        } while(t != head);
    }
}

int main(){
    int ch;
    do{
        printf("\n1.Insert\n2.Display\n3.Exit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
        }
    } while(1);
}
