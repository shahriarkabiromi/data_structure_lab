struct Node {
    int data;
    struct Node *next;
};

#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Node*head =NULL;
    struct Node*temp =NULL;
    int numNodes,i;

    printf("Enter the number of nodes: ");
    scanf("%d",&numNodes);

    for (i =0;i<numNodes;i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data for node %d:",i+1);
        scanf("%d", &temp->data);
        temp->next =NULL;

        if (head==NULL) {
            head=temp;  
        } else {

            struct Node *lastNode=head;
            while (lastNode->next!=NULL) {
                lastNode=lastNode->next;
            }
            lastNode->next=temp; 
        }
    }

    printf("Created linked list:");
    temp = head;
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

    return 0;
}
