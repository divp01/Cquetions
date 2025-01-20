#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *ptrToNext;
};

void PrintLL(struct node *Head)
{
 struct node *temp;
 temp = Head;
 int i=1;
 printf("Data: ");
  while(temp != NULL)
  {
    printf("node %d = %d \n ",i,temp->data);
    temp = temp->ptrToNext;
    i++;
  }
}
void AddNode_AtEnd(struct node** Head)
{
    static struct node *last = NULL; // Static pointer to keep track of the last node

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("For Creation of new Node, input data = ");
    scanf("%d", &(ptr->data));
    ptr->ptrToNext = NULL;

    if (*Head == NULL) {
        // If the list is empty, initialize head and last
        *Head = ptr;
        last = ptr;
    } else {
        // Use the last pointer for efficient addition
        last->ptrToNext = ptr;
        last = ptr; // Update the last pointer to the new node
    }
}

int main(void)
{
    struct node *head = NULL, *temp;
    PrintLL(head);
    AddNode_AtEnd(&head);
    AddNode_AtEnd(&head);
 
   PrintLL(head);
    return 0;
}