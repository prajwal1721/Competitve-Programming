#include<stdio.h>
#include<stdlib.h>
#define MQ 20
 typedef struct 
 { 
 	int key;
 }element;

 struct node
 {
 	element data;
    struct node *link;
 };

typedef struct node *qptr;
qptr f[MQ], r[MQ];

 void insert(int i,element item)
 {
 	qptr temp;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp->data=item;
 	temp->link=NULL;
 	if(f[i])
 		{
             r[i]->link=temp;
            r[i]=temp;
        }
 	else
 		r[i]=f[i]=temp;
 }

 int delete(int i)
 {
 	qptr temp=f[i];
 	element item=temp->data;
 	f[i]=f[i]->link;
    free(temp);
    return item.key;
 }
 void display(int i)
 {
 	qptr temp=f[i];
 	if(!f[i])
 	{
 		printf("queue empty\n");
 	}
 	else{
 		for(temp=f[i];temp!=NULL;temp=temp->link)
 		{
           printf("%d\t",temp->data.key);
 		}
 	}
 }

 void main()
 {
 	int i,n,choice;
 	element item;
 	printf("enter the number of queue: ");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	    r[i]=f[i]=NULL;
    while(1)
    {
    	printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        	case 1:printf("enter the queue no. and elelments to be inserted\n");
        	scanf("%d%d",&i,&item.key);
        	insert(i,item);
        	break;
            case 2:printf("enter the queue no ");
            scanf("%d",&i);
            if(!f[i])
            	printf("queue empty\n");
            else
            {
            	printf("%d",delete(i));
            }
            break;
            case 3:
            printf("enter the queue no ");
            scanf("%d",&i);
            display(i);
            break;
            case 4:exit(0);
            break;
            default:printf("invaild choice\n");
            break;
        }
    }

 
 }