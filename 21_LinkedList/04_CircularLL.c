#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *ptrNext;
};
void AddNode_AtEnd(struct node** Head)
{   
    struct node *temp = *Head;

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("For Creation of new Node, input data = ");
    scanf("%d",&(ptr->data));
    ptr->ptrNext=NULL;

    if(*Head == NULL)
    {
      *Head = ptr;
    }
    else{
        while(temp->ptrNext != NULL)
        {
            temp = temp->ptrNext;
        }
        temp->ptrNext = ptr;
    }
    
}
void CreateLoop(struct node** head,int Position)
{   int count =1;
    struct node *temp=*head,*PositionNode;
    if(*head==NULL)
    {
        printf("List is Empty");
    }
    else{
       while(temp!= NULL & count<=Position)
       {
        temp=temp->ptrNext;//if target =3rd node then temp have 3nd node address
        count++;
       }
       PositionNode=temp;
       while(temp->ptrNext!=NULL)
       {
        temp=temp->ptrNext;
       }
       temp->ptrNext = PositionNode;

    }
}
void PrintLL(struct node *Head)
{
 struct node *temp;
 temp = Head;
 int i=1;
 printf("Data: ");
  while(temp != NULL)
  {
    printf("node %d = %d \n ",i,temp->data);
    temp = temp->ptrNext;
    i++;
  }
}
int DetectLoop(struct node*head)
{   struct node* temp=head;
    struct node* ptrFast=head;
    struct node* ptrSlow=head;
    if(head==NULL)
        {printf("List is Empty");
        return 0;}
    else{
      while
 
            
    }
}
int main(void)
{

    struct node* Head=NULL;
    AddNode_AtEnd(&Head);
    AddNode_AtEnd(&Head);
    AddNode_AtEnd(&Head);
    AddNode_AtEnd(&Head);
    AddNode_AtEnd(&Head);
    AddNode_AtEnd(&Head);
    AddNode_AtEnd(&Head);
    AddNode_AtEnd(&Head);
    PrintLL(Head);
    //CreateLoop(&Head,3);
    printf("Loop Detected : %d\n",DetectLoop(Head));

    return 0;
}