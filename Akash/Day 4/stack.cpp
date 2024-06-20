#include <iostream>
using namespace std;

void push(int arr[],int n, int a, int &top);
int top(int arr[],int top);
void display(int arr[],int n);
void pop(int arr[],int n, int &top);
int main()
{

    int x = 1, n;

    

    cout << "Enter size of stack : ";
    cin >> n;
    int arr[n]={0};
    
    //top tracker
    int top = -1;
    

    while (x != 0)
    {
        cout << endl
             << "Enter:-\n1 to Push\n2 to pop\n3 to top\n4 to display stack\n0 to Exit\n";
        cin >> x;
        switch (x)
        {
        case 1:
        { // statements_1;
            int a;
            cout << "Enter element to push : ";
            cin >> a;
            // cout << "push function";
            push(arr,n,a,top);
            break;
        }

        case 2:
        { // statements_1;

            pop(arr,n,top);
            break;
        }

        case 3:
        { // statements_1;
            cout << "top ="<<top;
            break;
        }
        case 4:
        { // statements_1;
            

            display(arr,n);
            break;
        }
        case 0:
        { // statements_1;
            cout << "Program exited\n";
            break;
        }
        }
    }
    return 0;
}

void push(int arr[],int n, int a, int &top)
{
    if(top>=n-1)
    {
        cout<<"Stack is full";
    }
    else{
    top++;
    arr[top]=a;}

}

int top(int arr[],int top)
{
    return arr[top];
}

void pop(int arr[],int n, int &top)
{
    if(top>-1)
    {arr[top]=0;
    top--;}
    else
    {
        cout<<"Stack is empty cannot pop"<<endl;
    }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;    
}