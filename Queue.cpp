#include<iostream>
using namespace std;

class queue{
    private:
        int front;
        int rear;
        int arr[5];
    public:
        queue(){
            front = -1;
            rear = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i]=0;
            }
            }


        bool isempty(){
            if ( front == -1 && rear == -1) 
            return true;
            else
            return false;
        }


        bool isFull(){
            if(rear == 4)
            return true; 
            else
            return false;
        }

       void enqueue(int val){
            if (isFull()){
                cout<<"Queue is full\n";
                return;
            }
            else if(isempty()){
                rear = 0;
                front = 0;
                arr[rear]= val;
            }  
            else{
                rear++;
                arr[rear] = val;
            }
        }
        int dequeue(){
            int x =0;
            if (isempty()){
                cout<<"Queue is EMPTY\n";
                return x;               
            }

            else if(front == rear){
                x = arr[front];
                arr[front] = 0;
                rear = -1;
                front = -1;
                return x;                
            }
            else{
                cout<<"front value: "<<front<<endl;
                arr[front] = 0;
                front++;
                return x;
            }
        }
        int count(){
            return(rear - front+1);

        }
        int display(){
            cout<<"All values in the queue are-\n";
            for (int i = 1; i < 5; i++)
            {
                cout<<arr[i]<<"\t";
            }
        return 0;
        }
};


int main(int argc, char const *argv[])
{
    
    queue q1;
    int option, value;
    do{
        cout<<"What operation would you like to perform? select option number. Enter 0 for exit\n"<<"1.Enqueue\n"<<"2. Dequeue\n"<<"3. IsEmpty\n"<<"4. isFull\n"<<"5. count\n"<<"6. display\n"<<"7. clear screen\n"<<endl;

        cin>>option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enqueue operation\t Enter a number to be enqued\n";
            cin>>value;
            q1.enqueue(value);
            break;
        case 2:
            cout<<"Dequeue operation \t The removed value is "<<q1.dequeue()<<endl;
            break;
        case 3:
            if (q1.isempty())
            cout<<"Queue is Empty\n";
            else
            cout<<"Queue is Not Empty\n";
            break;
        case 4:
            if (q1.isFull())
            cout<<"Queue is isFull\n";
            else
            cout<<"Queue is Not isFull\n";        
            break;
        case 5:
            cout<<"The number of items present in the queue is "<<q1.count()<<endl;
            break;
        case 6:
            cout<<q1.display()<<endl;
            break;
        case 7:
            system("cls");
            break;
        
        default:
            cout<<"Not a Valid Number"<<endl;
            break;
        }
    }
    while (option != 0);

    
    
    return 0;
}
 
