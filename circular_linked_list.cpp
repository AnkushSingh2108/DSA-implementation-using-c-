#include <iostream>
using namespace std;

class node
{
public:
    int key;
    int data;
    node *next;
    node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class CLL
{
public:
    node *head;
    CLL()
    {
        head = NULL;
    }

    //1. Check if node exists or not
    node *nodeexists(int k)
    {
        node *temp = NULL;
        node *ptr = head;

        if (ptr==NULL)
        {
            return temp;
        }
        else
        {
            do
            {
                if (ptr->key==k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            } while (ptr!=NULL);
            return temp;            
        }
        
    }

    // 2. Append a node to the list
    void appendnode(node *new_node){
        if (nodeexists(new_node->key)!=NULL)
        {
            cout<<"Node already exists with key value"<<new_node->key<<".\n Append another node with different key value\n";
        }
        else
        {
            if (head==NULL)
            {
                head = new_node;
                new_node->next = head;
                cout<<"Node appended at first position\n";
            }
            else
            {
                node *ptr = head;
                while (ptr->next!=head)
                {
                    ptr = ptr->next;
                }
                ptr->next = new_node;
                new_node->next = head;
                cout<<"Node Appended\n";
            }
        }
    }

    // 3. Prepend node - Attach node  at the start
    void prependnode(node*new_node){
        if (nodeexists(new_node->key)!=NULL)
        cout<<"Node already exists with key value:"<<new_node->key<<".\nAppend another node with different key value\n";
        else
        {
            if (head==NULL)
            {
                head = new_node;
                new_node->next = head;
                cout<<"Node prepended at first position\n";
            }
            else{
            node *ptr = head;
            while (ptr->next!=head)
            {
                ptr = ptr->next;
            }
            ptr->next= new_node;
            new_node->next = head;
            head = new_node;
            cout<<"Node Prepended\n";
            }
        }  
    }

    //4. Insert a Node after a particular node in the list
    void insertnode(int k,node*new_node){
        node*ptr = nodeexists(k);
        if (ptr==NULL)
        {
            cout<<"No node exists with this key"<<k<<"\n";
        }
        else
        {
            if (nodeexists(new_node->key)!=NULL)
            {
                cout<<"Node already exists with key value: "<<new_node->key<<".\nAppend another nodewith different key value\n";
            }
            else
            {
                if (ptr->next==head)
                {
                    new_node->next=head;
                }
                
            }
            
        }
        
        
    } 
};
int main()
{

    return 0;
}