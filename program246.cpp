using namespace std;

#include<iostream>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;

}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;   
    }
    else
    {
          PNODE temp = *Head;
       while(1)  //Unconditional loop
       {
      
         if(temp->data == no)
         {
           cout<<"Duplicate node\n";
           delete newn; 
           break;
         }
         else if(temp->data > no)  //lahan data
         {
           if(temp->lchild == NULL)
           {
            temp->lchild = newn;
            break;

           }
           temp = temp->lchild;
         }
         else if(temp->data < no)   //motha data
         {
             if(temp->rchild == NULL)
           {
            temp->rchild = newn;
            break;

           }
           temp = temp->rchild;

         }

       }
    }
}
bool Search(PNODE Head, int no)
{
    bool flag = false;

    if(Head == NULL) //if tree is empty
    {
        return false;
    }
    else   // tree contains at least one node
    {
      while(Head != NULL)
      {
        if(Head->data == no) // node sapadla
         {
           flag = true;
           break;
         }   
         else if(no > (Head -> data))
         {
           Head = Head->rchild;
         }
         else if(no < (Head -> data))
         {
           Head = Head->lchild;
         }

      }
      return flag;
    }
    
    
}

int main()
{
    int no = 0;
    PNODE first = NULL;
    bret = false;


    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);

    cout<<"Enter number to search\n";
    cin>>no;

    bret = Search(first, no);

    if(bret == true)
        {
            cout<<"Data is there\n";
        }
        else
        {
            cout<<"Data is not there\n";
        }



    return 0;
}