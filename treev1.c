#include<stdio.h>
#include<stdlib.h>
//struct node*insert(struct node**,int item);
struct node{
int value;
struct node* left;
struct node* right;
};
void insert(struct node**);
void view(struct node*);
int delete(struct node*);

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
        view(root);
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
    struct node *new1;
    struct node* temp;
    struct node* temp2;
    int counter;
    new1=(struct node*)malloc(sizeof(struct node*));
    int value=0;
    printf("in insert\n");
    printf("enter the item\n");
    scanf("%d",&(new1)->value);
    if(*root==NULL)
    {
       
        new1->left=NULL;
        new1->right=NULL;
        *root=new1;
        //printf("value=%d",*(root)->value);
    }
    else
    {
    temp=(*root);
       
        while(temp!=NULL)
        {
            if(new1->value<temp->value)
            {
                counter=0;
                printf("%d",temp->value);
                printf("in left\n");
                temp2=temp;
                temp=temp->left;
                printf("testing");
            }
            else
            {
                printf("%d",temp->value);
                printf("in right\n");
                temp2=temp;
                temp=temp->right;
              
            //    printf("value=%d",temp->value);
                counter=1;
            }
           
           
        }
        //new1->value=value;
        new1->left=NULL;
        new1->right=NULL;
       
        if(counter)
        {
        printf("in counter");
        temp=new1;
        temp2->left=temp;
        }
        else
        {
            printf("not in counter");
        temp=new1;
        temp2->right=temp;               
        }
       
       
    }

}
void view(struct node* root)
{
   
    if(root!=NULL)
    {
       
     view(root->left);
     printf("%d\n",root->value);   
     view(root->right);   
       
    }
    return;
}
