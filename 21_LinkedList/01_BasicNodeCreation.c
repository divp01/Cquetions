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
struct node* NodeCreate(void)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("For Creation of new Node, input data = ");
    scanf("%d",&(ptr->data));
    ptr->ptrToNext=NULL;
    return ptr;
}
void AddNode_AtEnd(struct node** Head)
{   
    struct node *temp = *Head;

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("For Creation of new Node, input data = ");
    scanf("%d",&(ptr->data));
    ptr->ptrToNext=NULL;

    if(*Head == NULL)
    {
      *Head = ptr;
    }
    else{
        while(temp->ptrToNext != NULL)
        {
            temp = temp->ptrToNext;
        }
        temp->ptrToNext = ptr;
    }
    
}
void AddNode_InBetween(struct node** Head,int afterNode)
{   
    struct node *temp = *Head;
    
    int NodeCount=1;

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("For Creation of new Node, input data = ");
    scanf("%d",&(ptr->data));
    ptr->ptrToNext=NULL;



    while((temp->ptrToNext != NULL) && NodeCount<afterNode)
    {   
        //initially temp point to 1st node as head is doing
        temp = temp->ptrToNext; //now point to next node
        NodeCount++;
    }
    ptr->ptrToNext = temp->ptrToNext;
    temp->ptrToNext = ptr;

    
    
}
void AddNode_AtBeginning(struct node** Head)
{   

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("For Creation of new Node, input data = ");
    scanf("%d",&(ptr->data));
    ptr->ptrToNext=NULL;

    if(*Head == NULL)
    {
      *Head = ptr;
    }
    else{
        ptr->ptrToNext = *Head;
        *Head = ptr;
    }
    
}

int main(void)
{
    struct node *head = NULL, *temp;
    PrintLL(head);
    struct node *NewNode = NodeCreate();
    head=NewNode ;
    PrintLL(head);
    AddNode_AtEnd(&head);
    AddNode_AtEnd(&head);
    PrintLL(head);
    AddNode_AtBeginning(&head);
    PrintLL(head);
    AddNode_InBetween(&head,2);
    PrintLL(head);
    return 0;
}