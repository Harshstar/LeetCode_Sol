//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void middle(stack<int>&s,int size,int pos)
    {
        if(s.empty())
            return;
        if(size==pos)
        {
            s.pop();
            return;
        }
        int top=s.top();
        s.pop();
        middle(s,size-1,pos);
        s.push(top);
        
    }
    void deleteMid(stack<int>&s, int size)
    {
        // code here..
        int pos=floor((size+1)/2);
        middle(s,size,pos);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends