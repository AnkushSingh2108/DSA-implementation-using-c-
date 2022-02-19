#include<iostream>
using namespace std;

class node{
    public:
        int key;
        int data;
        node* next;

        node(){
            key = 0;
            data =0;
            next = NULL;
        }
        node(int k, int d){
            key = k;
            data = d;
        }
};
// sll = singlylinkedlist
class sll{
    public:
        node *head;
        sll(){
            head = NULL;
        }
        sll(node *n){
            head = n;
        }
        
        
        // op1. -> Check if node exists or not
        node *nodeexist(int k){
            node * temp = NULL;

            node *ptr = head;
            while(ptr!=NULL){
                if (ptr->key ==k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
                
            }
            return temp;
        }
        
        
        // op2. append a node to the list
        void appendnode(node *n){
            if(nodeexist(n->key)!= NULL){
                cout<<"Node already exists with key value, "<<n->key<<" append another node with different key value\n";
            }
            else{
                node * ptr = head;
                if (head==NULL)
                {
                    head = n;
                    cout<<"Node Appended\n";
                }
                else{
                    while(ptr->next!=NULL){
                    ptr = ptr->next;   
                }
                ptr->next = n;
                cout<<"Node Appended\n";
                }
                
            }
        }
        
        
        // op3. Prepend a node to the list
        void prependnode(node * n){
            if(nodeexist(n->key)!= NULL){
                cout<<"Node already exists with key value, "<<n->key<<" append another node with different key value\n";
            }
            else{
                n->next = head;
                head = n;
                cout<<"Node Prepended\n";
            }
        }
        
        
        //op4. insert a node after a particular node
        void insertnodeafter(int k,node *n){
            node *ptr = nodeexist(k);
            if(ptr==NULL)
            {
                cout<<"No node exist with key value"<<k<<endl;
                }
            else{
                n->next = ptr->next;
                ptr->next = n;
                cout<<"Node inserted\n";
            }
                
        }
        
        
        // op5. delete node by unique key
        void deletenodebykey (int k){
            if(head==NULL){
                cout<<"singly linked list already empty. cant delete\n";
            }
            else if(head!= NULL){
                if(head->key ==k){
                    head = head->next;
                    cout<<"Node unlinked with key value"<<k<<endl;
                }
                else{
                    node * temp = NULL;
                    node*prevptr= head;
                    node * currentptr = head->next;
                    while(currentptr!=NULL){
                        if(currentptr->key!= k){
                            temp = currentptr;
                            currentptr = NULL;
                        }
                        else
                        {
                            prevptr = prevptr->next;
                            currentptr = currentptr->next;                            
                        }
                    if (temp!=NULL)
                    {
                        prevptr->next = temp->next;
                        cout<<"Node unlinked with key value: "<<k<<endl;
                    }
                    else
                    {
                        cout<<"Node doesn't exist with key value"<<k<<endl;
                    }
                    
                        
                    }
                }
            }

        }
        
        
        //op6. updating the node by key
        void updatenodebykey(int k, int d){
            node *ptr = nodeexist(k);
            if (ptr!=NULL)
            {
                ptr->data =d;
                cout<<"Node data updated successfully\n";
            }
            else
            {
                cout<<"Node doesn't exist with key value"<<k<<endl;
            }
        }
        
        

        //op7 printing the whole linked list
        void printlist(){
            if (head == NULL)
            {
                cout<<"No nodes in singly linked list\n";
            }
            else
            {
                cout<<"\n Singly linked list values";
                node *temp = head;

                while (temp!=NULL)
                {
                    cout<<"{"<<temp->key<<","<<temp->data<<"} ->>";
                    temp = temp->next;
                }
                
            }
            
            
        }
};
int main(int argc, char const *argv[])
{
    sll s1;
    int option;
    int key1,k1,data1;
    do
    {
        cout<<"\n What operation do you like to perform? select option number; Enter 0 to exit"<<endl<<"1. Append Node"<<endl<<"2. Prepend Node"<<endl<<"3. Insert node after"<<endl<<"4. Delete Node"<<endl<<"5. Update Node"<<endl<<"6. Printing the singly linked list"<<endl<<"7. Clear screen\n"<<endl;
        cin>>option;
        // new by dynamic memory allocation
        node *n1 = new node(); 
        // memory is allocatedin the HEAP and is global 
        // whenever we do the memory driven program by swith case| after one time execution of the switch case n1 is recreated in every execution after every execution the current n1 is destroyed and a new n1 is recreated  for the next iteration of switch case and is allocated some another memory | the n1 is recreated after every iteration of the switch case in this case the n1 is stored in the STACK MEMORY and in the dynamic memory allocation the n1 is stored in the HEAP MEMORY| in the dynamic emory allocation the previous one us not deleted/destroyed      ||  in dynamic memory allocation the object is the same in all  the iterations but the memory address is changed
        switch (option) 
        {
        case 0:
            break;
        case 1: // Append node
            cout<<"Append Node Operation: \n Enter the key of the Node to be appended\n";
            cin>>key1;
            cout<<"Enter the Data to of the Node\n";
            cin>>data1;
            n1->key = key1;
            n1->data = data1;
            s1.appendnode(n1); // if we have created n1 in simple way ie without dynamic memory allocation then we ahve to take the argument as &n1, in the dynamic memory allocation we take the address by simply writing the name of the argument
            
            break;
        case 2: // Prepend node
            cout<<"Prepend operation\n";
            // mist1X cin>>k1;
            cout<<"enter the key of the node:\n";
            cin>>key1;
            cout<<"Enter the data of the node:";
            cin>>data1;
            n1->key = key1;
            n1->data = data1;
            s1.prependnode(n1);
            break;
        case 3: // Insert node
        cout<<"Insert Node after opertion: \nEnter key of the existing node after which you want to insert this new node:\n";
        cin>>k1;
        cout<<"Enter key of the node which you want to be inserted\n";
        cin>>key1;
        cout<<"Enter data of the node which you want to be inserted\n";
        cin>>data1;
        n1->key = key1;
        n1->data =data1;
        s1.insertnodeafter(k1,n1);
            break;
        case 4:  // Delete Node
        cout<<"Delete node by key operation: \nEnter the key of the node to be deleted\n";
        cin>>k1;
        s1.deletenodebykey(k1);
            break;
        case 5: // update node
        cout<<"Update node operation: \nEnter the key of the node to be updated";
        cin>>key1;
        cout<<"Enter the data to be updated\n";
        cin>>data1;
        s1.updatenodebykey(key1,data1);
            break;
        case 6: // printing of the singly linked list
        cout<<"Singly Linked List:-\n";
        s1.printlist();
            break;
        case 7: // clearing the screen
         system("cls");
            break;
        
        default:
        cout<<"Invalid Option\n";
            break;
        }
    } while (option!=0);
    
    return 0;
}
