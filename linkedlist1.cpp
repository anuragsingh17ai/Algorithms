#include<bits/stdc++.h>
using namespace std;

//here struct is template for storing every node or block
struct node
{
    int data;
    struct node *next;
};
int main()
{
    //head will contain address of first block and address type will struct node
    struct node *head =NULL;
    struct node *previous=NULL;
    struct node *temp=NULL;

    //Now i am allocating memory for my block's address;
    head=(struct node*)malloc(sizeof(struct node));
    previous=(struct node*)malloc(sizeof(struct node));
    

    //taking number of blocks to be inserted 
    cout<<"Enter please no of blocks you want to create Miss :\n";
    int n,i=0;
    char ch;
    cin>>n;

    if(n>0)
    while(n>i)
    {
        int number;
        cout<<"Enter your data miss: ";
 

        //for first block
        if(i==0)
        {
            cin>>number;
            head->data=number;
            head->next=NULL;
            previous=head; //Now i have stored head address in previous
        }                  //so i don't have to move head next time....

        //for next block.....
        else
        {
            temp=(struct node*)malloc(sizeof(struct node));
            
            cin>>number;
            temp->data=number;  //this my temporary block
            temp->next=NULL;

            previous->next=temp;
            previous=temp;
            

        }
        i++;
    }
    

    cout<<"\nDo you want to see your inseted data Miss:\nanswer in y/n :";
    cin>>ch;
    temp=head;
    
    //logic to see data   
    if(ch=='y' && n!=0)
    {
        while (temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

}