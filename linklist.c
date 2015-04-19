//https://github.com/ankurjain41282/CDatastructure.git
#include<stdio.h>
#include<stdlib.h>
struct node{
int number;
struct node*next;
};
void insert(struct node**);
void read1(struct node*);
void delete(struct node*);
int main()
{
    int choice;
    struct node*head;
    head= (struct node*)malloc(sizeof(struct node*));
    head= NULL;
    for(;;)
    {
        printf("(1)to insert\n(2)to read\n(3) to delete\n(4)to exit\n enter your choice");
        scanf("%d",&choice);
        switch(choice)
            {
            case 1:
            insert(&head);
            break;
            case 2:
            printf("going to read");
            read1(head);
            break;
            case 3:
            delete(head);
            break;
            case 4:
            exit(0);
            default:
            printf("sorry this choice does not exist");

            }
        }

}
void insert(struct node** head)
{
    struct node* new1;
    struct node* temp1;
    int counter=0;
    new1=(struct node*)malloc(sizeof(struct node*));
    printf("enter the value");
    scanf("%d",&(new1)->number);
    printf("value entered %d\n",new1->number);
    if(*head==NULL)
    {
        
        new1->next=NULL;
        *head=new1;
        
    }
    else
    {
        temp1=*head;
        //printf("address in temp is %p\n",temp1);
        while(temp1->next!=NULL)
        {
            counter++;
            temp1=temp1->next;
            
        }
    temp1->next=new1;
    new1->next=NULL;    
    }
        //printf("counter value is %d\n",counter);
        //printf("value of head %p\n",*head);
        //printf("%d\n",new1->number);
}


void read1(struct node* head)
{
        //printf("in  read");
        struct node* temp2;
        temp2=head;
        //printf("%p\n",temp2);
        while(temp2!=NULL)
        {
                printf("%d\n",temp2->number);
                temp2=temp2->next;
                
            
        }
    
}
void delete(struct node *head)
{
        int deletechoice;
        struct node*temp3;
        //struct node*temp4;
        temp3=head;
        printf("(1)delete the head\n(2)delete from the end\n(3)delete from position\n");
        scanf("%d",&deletechoice);
        switch(deletechoice)
        {
                case 1:
                    head=head->next;
                    free(temp3);
                    break;
                case 2:
                    break;
                
                case 3:
                    break;
            
        }
        
        
    
}
