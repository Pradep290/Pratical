 #include <stdio.h>
#include <stdlib.h>
struct Node
 {
    int data;
    struct Node* next;
};
int main()
{
    struct Node *head,*node1, *node2, *node3;
    node1= NULL;
    node2= NULL;
      node3= NULL;
        
    node1 =(struct Node*)malloc(sizeof(struct Node));
    node2 =(struct Node*)malloc(sizeof(struct Node));
    node3 =(struct Node*)malloc(sizeof(struct Node));
    
    node1->data =10;
    node2->data =20;
    node3->data =30;
    
    node1->next=node2;
    node2->next =node3;
    node3->next =NULL;
    head=node1;

    printf("%d",node1->data);
      printf("%d",node2->data);
        printf("%d",node3->data);

    return 0;
}
