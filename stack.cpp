#include<iostream>
#include<string>
using namespace  std;

class stack
{
    private:
        int top;
        int arr[5];
    public:
        stack ()
        {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
        }

        bool isEmpty()
        {
            if (top = -1)
            
                return true;
            else
                return false; 
        }

        bool isFull()
        {
            if (top == 4)
                return true;
            else
                return false;
        }

        void push(int val)
        {
            if (isFull())
            {
                cout<<"Stack Overflow"<<endl;
            }
            else
            {
                top++;
                arr[top]=val;
             
            }
        }
        int pop()
        {
            if (isEmpty())
            {
                cout<<"Stack Underflow"<<endl;
                return 0;
            }
            else
            {
                int popvalue=arr[top];
                arr[top] = 0;
                top--;
                return popvalue;
            }
            
        }

        int count()
        {
            return(top+1);
        }
        
        int peek( int pos)
        {
            if (isEmpty())
            {
                cout<<"Stack Underflow";
                return 0;
            }
            else
            {
                return arr[pos];
            }
        }
        void change( int pos, int value)
        {
            arr[pos] = value;
            cout<<"Value changed at location"<<pos<<endl;
        }
        void display()
        {
            cout<<"All values in the stack are"<<endl;
            for (int i = 4; i >= 0; i--)
            {
                cout<<arr[i]<<endl;
            }
            
        }

    };

int main(int argc, char const *argv[])
{
    stack s1;
    int option,position,value;

    do
    {
        cout<<"What operation do you want to perform? Select option number. Enter 0 to exit."<<endl<<"1. Push()"<<endl<<"2. Pop()"<<endl<<"3. isEmpty()"<<endl<<"4. isFull"<<endl<<"5. peek()"<<endl<<"6. count()"<<endl<<"7. change()"<<endl<<"8. display()"<<endl<<"9. Clear Screen"<<endl;
        cin>>option;
        
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enter an item to push in the stack"<<endl;
            cin>>value;
            s1.push(value);
            break;

        case 2:
            cout<<"Pop function called - Popped value: "<<s1.pop()<<endl;
            break;
        case 3:
            if (s1.isEmpty())
            {
                cout<<"Stack is Empty"<<endl;
            }
            else
            {
                cout<<"stack is not Empty"<<endl;
            }
            break;
        case 4:
            if (s1.isFull())
            
                cout<<"Stack is Full"<<endl;
            
            else
            
                cout<<"stack is not Full"<<endl;        
                break;
        case 5:
            cout<<"Enter the position of item you want to peek: "<<endl;
            cin>>position;
            cout<<"Peek function called - value at position"<<position<<"is"<<s1.peek(position)<<endl;
                break;
        case 6:
            cout<<"Count function called- Number of items in the Stack are: "<<s1.count()<<endl;
            break;
        case 7:
            cout<<"Change function called- "<<endl<<"Enter the position of item you want to change: "<<endl;
            cin>>position;
            cout<<endl<<"Enter value of item you want to change : "<<endl;
            cin>>value;
            s1.change(position,value);
            break;
        case 8:
            cout<<"Display function called: "<<endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout<<"Enter proper number"<<endl;
            break;
        }

    } while (option != 0 );
    
    return 0;
}
