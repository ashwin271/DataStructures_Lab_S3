#include <stdio.h>
#include <stdlib.h>

void main()
{
    //structure defenition 
    struct node
    {
        int coeff;
        int expo;
        struct node *link;
    };

    //create necessary pointers
    struct node *newnode, *ptr1, *ptr2, *ptr3, *start1=NULL, *start2=NULL, *start3=NULL;

    //read 2 polynomials
    int n1,n2;
    printf("Enter the no of terms of poly 1 : ");
    scanf("%d",&n1);
    for(int i=1;i<=n1;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Coef : ");
        scanf("%d",&newnode->coeff);
        printf("Expo : ");
        scanf("%d",&newnode->expo);
        newnode->link=NULL;
        if(start1==NULL)
        {
            start1=newnode;
            ptr1=newnode;
        }
        else
        {
            ptr1->link=newnode;
            ptr1=newnode;
        }
    }
    printf("\nEnter the no of terms of poly 2 : ");
    scanf("%d",&n2);
    for(int i=1;i<=n2;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Coef : ");
        scanf("%d",&newnode->coeff);
        printf("Expo : ");
        scanf("%d",&newnode->expo);
        newnode->link=NULL;
        if(start2==NULL)
        {
            start2=newnode;
            ptr2=newnode;
        }
        else
        {
            ptr2->link=newnode;
            ptr2=newnode;
        }
    }

    //calculate sum 
    ptr1=start1;
    ptr2=start2;
    while (ptr1!=NULL && ptr2!=NULL)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(ptr1->expo>ptr2->expo)
        {
            newnode->coeff=ptr1->coeff;
            newnode->expo=ptr1->expo;
            ptr1=ptr1->link;
        }
        else if (ptr1->expo<ptr2->expo)
        {
            newnode->coeff=ptr2->coeff;
            newnode->expo=ptr2->expo;
            ptr2=ptr2->link;
        }
        else
        {
            newnode->coeff=ptr1->coeff+ptr2->coeff;
            newnode->expo=ptr1->expo;
            ptr1=ptr1->link;
            ptr2=ptr2->link;
        }

        if(start3==NULL)
        {
            start3=newnode;
            ptr3=newnode;
        }
        else
        {
            ptr3->link=newnode;
            ptr3=newnode;
        }
    }

    //display 3rd polynomial
    if (start3 == NULL)
    {
        printf("\nNo Elements in the List");
    }

    printf("\nSum of the Polynomials\n");
    ptr3 = start3;
    while (ptr3->link != NULL)
    {
        printf("%dx^%d+", ptr3->coeff, ptr3->expo);
        ptr3 = ptr3->link;
    }

    printf("%dx^%d\n", ptr3->coeff, ptr3->expo);
    
}
