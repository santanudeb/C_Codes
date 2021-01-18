#include <stdio.h>
#include <stdlib.h>

typedef struct list
    {
        int item;
        struct list *next;
    }list;

    list *head=NULL;
    void insert_end(list *);
    void display(list *);

int main()
{
    int ch;

    while(-30000)
    {
         printf("\n 1.Insertion at end");
         printf("\n 2.Display");
         printf("\n 3.Exit");
         printf("\n Enter Choice: ");
         scanf("%d",&ch);


     switch(ch)
      {
         case 1: insert_end (head);
                break;
         case 2: display (head);
                break;
         case 3: exit (0);
                break;
         default: printf("Wrong entry");

      }

    }


    return 0;
}

void insert_end(list *p)
{
    list * tmp;
    tmp=(list*)malloc(sizeof(list));
    printf("\n Enter the item: ");
    scanf("%d",&tmp->item);
    tmp->next=NULL;

    if (p==NULL)
    {
        head=tmp;
    }
    else
    {
        while(p->next!=NULL)
            p=p->next;

        p->next=tmp;
    }
}
 void display(list *p)
 {
     if(p==NULL)
        printf("\nList empty\n");
     else
    {
            while(p!=NULL)
            {
                printf("%d\t",p->item);
                p=p->next;
            }


     }
 }
