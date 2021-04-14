#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
struct node *head = NULL;
void displayList()
{
    node *p = head;
    while (p != NULL)
    {
        printf("\n Val is %d   ", p->data);
        p = p->next;
    }
}
node *createLinkList(int n)
{
    node *temp = NULL;
    node *p = NULL;

    for (int i = 0; i < n; i++)
    {

        temp = (node *)malloc(sizeof(node));
        printf("\nEnter %d element   ", i);
        scanf("%d", &temp->data);

        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while (p->next != NULL)
            {

                p = p->next;
            }
            p->next = temp;
        }
    }

    return head;
}

int main()
{
    int n;

    printf("\nEnter num of elements   ");
    scanf("%d", &n);
    head = createLinkList(n);
    // print list

    displayList();
    return 0;
}