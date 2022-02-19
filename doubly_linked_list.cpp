// THIS PROGRAM IS NOT GIVING DESIRABLE OUTPUT
#include<iostream>
using namespace std;


class node{
    public:
    int key;
    int data;
    node *next;
    node *prv;

    node(){
        key = 0;
        data = 0;
        next =NULL;
        prv = NULL;
    }
    node(int k, int d){
        key =k;
        data = d;
    }
};
// dll = doubly linked list
class dll{
    public:
    node *head;

    dll(){
        head = NULL;
    }
    dll(node *n){
        head = n;
    }

    // op1. Check if node exists using key value:
    node *nodeexists(int k){
        node *temp = NULL;
        node *ptr = head;

        while (ptr!=NULL)
        {
            if (ptr->key == k){
                temp = ptr;

            }
            ptr =  ptr->next;
        }
        return temp;
        
    }
    
    // op2. appending the node in the doubly linked list
    void appendnode(node *n){
        if(nodeexists(n->key)!= NULL)
        {
            cout<<"Node already exists with key value"<<n->key<<" . append another node with different key\n";
        }
        else{
            if (head ==NULL)
            {
                head = n;
                cout<<"Node appended as head node\n";
            }
            else
            {
                node *ptr;
                while (ptr->next!=NULL)
                {
                    ptr= ptr->next;
                }
                ptr->next =n;
                n->prv = ptr;
                cout<<"Node appended\n";
                
            }           
        }
    }

    // op3. prepending the node in the doubly linked list
    void prependnode(node *n){
        if (nodeexists(n->key)!=NULL){
            cout<<"Node is already there with key value"<<n->key<<endl;
        }
        else
        {
            if (head ==NULL)
            {
                head = n;
                cout<<"Node prepended when there was only one node\n";
            }
            else{ //Node perpended when there is more than one node
            head->prv = n;
            n->next = head;
            head = n;
            cout<<"Node prepended\n";
            }

        }
        
    }

    // op4. Insert a node after  particular node in the  list
    void insertnodeafter(int k, node*n){
        node *ptr = nodeexists(k); // this nodeexist is for whether the node exist or not|| node in front of which we are inserting
        if (ptr == NULL)
        {
            cout<<"No node exist with key value "<<k<<endl<<"append another node with different key\n";
        }
        else
        {
            if (nodeexists(n->key)!=NULL)   
            cout<<"Node already exists with key value "<<n->key<<"append another no with different key value\n";
            else
            {
                node*nextnode = ptr->next;
                // inserting at the end
                if (nextnode==NULL)
                {
                    n->next = nextnode;
                    nextnode->prv = n;
                    n->prv = n;
                    cout<<"Node inserted at the end\n";
                }

                // inserting in between
                else
                {
                    n->next = nextnode;
                    nextnode->prv =n;
                    n->prv = ptr;
                    ptr->next = n;
                    cout<<"Node Inserted in between\n";
                }
            }
        }
    }

    // op5. deleting the  node
    void deletenode(int k){
        node *ptr = nodeexists(k);
        if (ptr == NULL)
        {
            cout<<"No node exists with this key"<<k<<endl;
        }
        else
        {
            if (head->key == k)  // deleting the first node
            {
                head = head->next;
                cout<<"Node unlinked with key value "<<k<<endl;
            }
            else 
            // deleting the last node
    //        {
                // node * nextnode = ptr->next;
                // node * prevnode = ptr->prv;
                // this below commented code doesn't give the desired output
    //             if (ptr->next = NULL)
    //             {
    //                 ptr->prv->next = NULL;
    //                 cout<<"Node deleted at the end\n";
    //             }
    //             else // deleting in between
    //             {
    //                 ptr->prv->next = ptr->next;
    //                 ptr->next->prv = ptr->prv;
    //                 cout<<"Node deleted!!\n";
    //             }
    //         }
    //     }
    // }
            {
                node *nextnode = ptr->next;
                node *prvnode = ptr->prv;
                if (nextnode == NULL)
                {
                    prvnode->next = NULL;
                    cout<<"Node deleted at the END\n";
                }
                // deleting in between
                else{
                    prvnode->next = nextnode;
                    nextnode->prv = prvnode;
                    cout<<"Node deleted in between\n";
                }
            }
        }
    }

    //op6. updating the list
    void updatenode(int k, int d){
        node *ptr = nodeexists(k);
        // this is not the right approach
        // if (ptr == NULL)
        // {
        //     cout<<"No node exists with this key\n";
        // }
        // else if (head->key = k) // updating the first node
        // {
        //     ptr->data = d;
        // }
        // else if(ptr->next == NULL) // updating the  last node
        // {
        //     ptr->data = d;
        // }
        // else // updating the node in between
        // {
        //     ptr->data=d;
        // }            
        if (ptr!=NULL)
        {
            ptr->data = d;
            cout<<"Node Data updated successfully\n";
        }
        else
        {
            cout<<"Node does'nt exist with key"<<k<<endl;
        }   
    }

    // printing the doubly linked list
    void printlist(){
        if (head == NULL)
        {
            cout<<"List is Empty\n";
        }
        else
        {
            cout<<"Doubly Linked list values:";
            node*temp = head;
            while (temp!=NULL)
            {
                cout<<"{"<<temp->key<<","<<temp->data<<"}"<<"<-->"<<endl;
                temp = temp->next;
            }
        }
    }

};

int main(int argc, char const *argv[])
{
    dll d1;
    int option;
    int key1,k1,data1;
    do
    {
        cout<<"Which operation would you chose? Enter 0 to exit\n"<<"1. Append the node\n"<<"2. Prepend the node\n"<<"3. Insert the node\n"<<"4. Delete the Node\n"<<"5. Update the node\n"<<"6. Print the Doubly Linked List\n"<<"7. To clear the output screen\n";
        cin>>option;
        node *n1 = new node();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout<<"Append operation:\nEnter the key value\n";
            cin>>key1;
            cout<<"Enter the data value\n";
            cin>>data1;
            n1->key = key1;
            n1->data = data1;
            d1.appendnode(n1);
            break;
        case 2:
            cout<<"Prepend operation:\nEnter the key value:\n";
            cin>>key1;
            cout<<"Enter the data value\n";
            cin>>data1;
            n1->key = key1;
            n1->data = data1;
            d1.prependnode(n1);
            break;
        case 3:
            cout<<"Insert operation:\nEnter the key of the node after which you want to insert the node\n";
            cin>>k1;
            cout<<"Enter the key of the node to be inserted\n";
            cin>>key1;
            cout<<"Enter the data of the node to be inserted\n";
            n1->key = key1;
            n1->data = data1;
            d1.insertnodeafter(k1,n1);
            break;
        case 4:
            cout<<"Enter the key of the node to be deleted\n";
            cin>>key1;
            d1.deletenode(key1);
            break;
        case 5:
            cout<<"Update operation:\n Enter the key of the node which you want to update\n";
            cin>>key1;
            cout<<"Enter the updated data:";
            cin>>data1;
            d1.updatenode(key1,data1);
            break;
        case 6:
            cout<<"Print operation:\n";
            d1.printlist();
            break;
        case 7:
            system("cls");
            break;
        default:
        cout<<"Invalid Number";
            break;
        }
        
    }
    while (option!=0);
    
    return 0;
}
