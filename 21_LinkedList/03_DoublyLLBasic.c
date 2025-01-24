#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *ptrNext;
    struct node *ptrPrevious;
};
struct node* CreateDLL(void)
{   
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data for new Node: ");
    scanf("%d",&(ptr->data));
    ptr->ptrNext = NULL;
    ptr->ptrPrevious = NULL;
    return ptr;
    
}
void PrintDLL(struct node *head)
{   struct node *temp;
    if(head == NULL)
        printf("List is empty\n");
    else
    {   temp = head;
        while(temp!=NULL)
        {
            printf("%d, ",temp->data);
            temp = temp->ptrNext;
        }
        printf("\n");
    }
}
void addInEnd(struct node **head,struct node * newNode)
{   
    struct node *temp,*previousPtr;
    if(*head == NULL)
    {
        *head = newNode;
    }
    else
    {  temp = *head;
        
        while(temp!=NULL)
        {   
            previousPtr= temp;
            temp = temp->ptrNext;
            
        }
        previousPtr->ptrNext = newNode;
        newNode->ptrPrevious = previousPtr;
        
    }
    
}
void addInBegnning(struct node **head,struct node * newNode)
{   
    struct node *temp,*previousPtr;
    if(*head == NULL)
    {
        *head = newNode;
    }
    else
    {   newNode->ptrNext= *head;
        (*head)->ptrPrevious = newNode;
        *head = newNode;
        
    }
    
}
void DeleteInBegnning(struct node **head)
{   
    struct node *temp;
    if(*head == NULL)
    {
        printf("List is empty");
    }
    else
    {   temp =*head;
        *head = (*head)->ptrNext;
        (*head)->ptrPrevious = NULL;
        free(temp);
        
    }
    
}
void DeleteInEnd(struct node **head)
{   
    struct node *temp,*previousPtr;
    if(*head == NULL)
    {
        printf("List is empty");
    }
    else
    {   temp = *head;
        
        while(temp->ptrNext!=NULL)
        {   
            previousPtr= temp;
            temp = temp->ptrNext;
            
        }
        
        previousPtr->ptrNext = NULL;
        free(temp);
        
    }
    
}
void DeleteInBetween(struct node **head,int nodeNummber)
{   
    struct node *temp,*previousPtr;
    int count = 1;
    if(*head == NULL)
    {
        printf("List is Empty");
    }
    else
    {    temp = *head;
        
        while(temp!=NULL && count<nodeNummber)
        {   count++;
            previousPtr= temp;
            temp = temp->ptrNext;
            
        }
        previousPtr->ptrNext = temp->ptrNext;
        (temp->ptrNext)->ptrPrevious = previousPtr;
        free(temp);
        
    }
    
}
void addInBetween(struct node **head,struct node * newNode, int nodeNummber)
{   
    struct node *temp,*previousPtr;
    int count = 1;
    if(*head == NULL)
    {
        printf("List is Empty");
    }
    else
    {    temp = *head;
        
        while(temp!=NULL && count<nodeNummber)
        {   count++;
            previousPtr= temp;
            temp = temp->ptrNext;
            
        }
        previousPtr->ptrNext = newNode;
        newNode->ptrPrevious = previousPtr;
        newNode->ptrNext =temp;
        temp->ptrPrevious =newNode;
        
    }
    
}

int main()
{
    printf("Hello World\n");
    struct node* head = NULL;
    PrintDLL(head);
    struct node* newNode = CreateDLL();
    addInEnd(&head,newNode);
    
    PrintDLL(head);
     newNode = CreateDLL();
     addInEnd(&head,newNode);
    newNode = CreateDLL();
    addInBegnning(&head,newNode);
    PrintDLL(head);
    newNode = CreateDLL();
    addInBetween(&head,newNode,2);
    PrintDLL(head);
    //DeleteInBegnning(&head);
//PrintDLL(head);
    //DeleteInEnd(&head);
    //PrintDLL(head);
    DeleteInBetween(&head,2);
    PrintDLL(head);
    return 0;
}