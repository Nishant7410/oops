#include<stdio.h>
struct Node
{
int data;
struct Node *next;
};
int main()
{
struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=32;
ptr->next=0;
struct Node *ptr1=(struct Node*)malloc(sizeof(struct Node));
ptr1=ptr;
printf("%d",ptr1->data);
}
