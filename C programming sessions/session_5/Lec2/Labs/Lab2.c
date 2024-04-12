#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node * next;
}NodeType;

void AddToLastElementNode(int val, NodeType * HEAD);
void DisplayElementsInTheList(NodeType * HEADPtr);

int main(void)
{
    int EnteredVal=0,NodeVal=0;
    //Creating And assigning the HEAD of the linkedlist
    NodeType * HEADPtr = (NodeType*)malloc(sizeof(NodeType));
    printf("Please enter the first Node value: ");
    scanf("%d",&EnteredVal);
    HEADPtr->val = EnteredVal;
    HEADPtr->next = NULL;
     
    while(1)
    {
        printf("To add Node enter 0 \nTo print the linked list enter 1 \nTo remove the last element press 2\nto exit enter anything else\n");
        printf("Your choice: ");
        scanf("%d",&EnteredVal);
        if(EnteredVal == 0)
        {
            printf("Enter the value you want to add to the node: ");
            scanf("%d",&NodeVal);
            AddToLastElementNode(NodeVal,HEADPtr);
        }
        else if(EnteredVal == 1)
        {
            DisplayElementsInTheList(HEADPtr);
        }
        else if(EnteredVal == 2)
        {
            RemoveTheLastElementInTheNode(HEADPtr);
        }
        else
            break;
    }
    return 0;
}

void AddToLastElementNode(int val, NodeType * HEADPtr) 
{
    NodeType * CurrentNodePtr = HEADPtr;
    //Create the new Node
    NodeType * NewNodeptr = (NodeType*)malloc(sizeof(NodeType));
    if(NewNodeptr == NULL)
        printf("ERROR in allocation\n");

    else
    {
        while(1)
        {
            //Assign values to the new node
            NewNodeptr->val=val;
            NewNodeptr->next=NULL;

            if(CurrentNodePtr->next == NULL) //Check if it's the last Node 
            {
                CurrentNodePtr->next = NewNodeptr; //Add the new node after the last node
                break;
            } 
            else
            {
                CurrentNodePtr = CurrentNodePtr->next;
            }
        }   
    }
}
void DisplayElementsInTheList(NodeType * HEADPtr) 
{
    NodeType * Ptr = HEADPtr;
    int Counter=0;
    printf("\n");
    while(Ptr!=NULL)
    {
        Counter++;
        printf("%d element is %d\n",Counter,Ptr->val);
        Ptr=Ptr->next;
    }
    printf("\n");
}