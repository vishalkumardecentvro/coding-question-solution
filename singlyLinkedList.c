#include <stdio.h>
int n;
struct node{
    int data;
    struct node* next;
};

int main()
{
    int nodeCount;
    struct node *first,*t;
    printf("Enter number of nodes you want in your lnked list\n");
    scanf("%d",&n);
    struct node *head = (struct node*) malloc(sizeof(struct node));
    printf("Enter node 1 value\t");
    scanf("%d",&head->data);
    head->next = NULL;
    first = head;
    for(nodeCount=1;nodeCount<n;nodeCount++){
        t=(struct node*)malloc(sizeof(struct node));
        printf("Enter node %d value\t",nodeCount+1);
        scanf("%d",&t->data);
        first->next = t;
        first = t;
        t->next = NULL;
    }
    reverseLinkedList(head);
    //display(head);
    
}
void reverseLinkedList(struct node *head){
    printf("exitChk 1");
    struct node *p=NULL,*q=NULL,*r=head;
    printf("exit chk2");
    while (q->next != NULL)
    {
        p=q;
        q=r;
        r=r->next;
        q->next = p;
    }
    printf("exit check3");
    head = q;
    display(head);
}

void display(struct node *traverse){
    while(traverse != NULL){
        printf("%d",traverse->data);
        traverse = traverse->next;
    }
}