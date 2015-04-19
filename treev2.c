
#include<stdio.h>
#include<stdlib.h>
//struct node*insert(struct node**,int item);
struct node{
int value;
struct node* left;
struct node* right;
};
void insert(struct node**);
int delete();

int main()
{
int choice=0;
struct node*root;
root=(struct node*)malloc(sizeof(struct node*));
root=NULL;
for(;;)
{
    printf("(1)insert element\n(2)delete element\n(3)view elment\n(4)exit\n");
    printf("enter your choice");
    scanf("%d",&choice);
    printf("choice entered=%d",choice);
    switch(choice)
    {
        case 1:
       
        insert(&root);
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        exit(0);
        break;
        default:
        printf("this option does not exist");
        break;
       
    }
}
return 0;
}

void insert(struct node** root)
{
    int value;
    printf("in insert\n");
    printf("enter the item\n");
    scanf("%d",&value);
printf("\nafter getting value\n");
    struct node* temp;
    temp=*root;
    printf("at temp");
    struct node *new1;
    printf("at new1");
    new1=(struct node*)malloc(sizeof(struct node*));

   
    if(*root==NULL)
    {
        printf("in if");
        (*root)->value=value;
        (*root)->left=NULL;
        (*root)->right=NULL;
       
    }
    else
    {
        printf("in else");
        while(temp!=NULL)
        {
            if(temp->value<value)
            {
                temp=temp->left;
               
            }
            else
            {
                temp=temp->right;
               
            }
           
           
        }
        new1->value=value;
        new1->left=NULL;
        new1->right=NULL;
        temp=new1;
       
       
    }

}
