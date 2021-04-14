#include<stdio.h>
#include<stdlib.h>
 typedef struct Node
{
   int data;
   struct  node *link;

}Node;
struct Node *head=NULL;

void insertFirst(int val){
struct Node *temp=( Node *) malloc(sizeof(struct Node));
temp->data=val;
temp->link=head;
head=temp;
}

void insertLast(int val){
struct Node* newEle=(Node *)malloc(sizeof(Node));
newEle->data=val;
newEle->link=NULL;
struct Node *temp=NULL ;
if(head==NULL){
    head=newEle;
}else 
{
   temp=head;
   while (temp->link!=NULL)
   {
     temp=temp->link;
   }
    temp->link=newEle;
}

}
void print(){
struct Node *element=head;
while (element!=NULL)
{
     printf("\nList is %d    ",element->data);
    element=element->link;
 
}

}
int main(){
int n;
    struct Node *head = NULL;
    printf("\nEnter num of elements    ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int x;
        printf("\nEnter the %d element    ",i);
        scanf("%d",&x);
        insertLast(x);
        print();
    }
  return 0;
}