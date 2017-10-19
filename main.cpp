#include <iostream>
#include<vector>
#include<stack>
#include<map>
#include<string>

using namespace std;
/************
question 29,30
void returnNextGreaterSequence(vector<int> a);
int main()
{
    int n,temp;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    returnNextGreaterSequence(a);
    return 0;
}
void returnNextGreaterSequence(vector<int> a)
{

    stack<int> stack_;
    map<int,int> map_;
    for(auto temp:a)
    {

            if(!stack_.empty())
            while(temp>stack_.top())
            {

                map_.insert(make_pair(stack_.top(),temp));

                stack_.pop();
                if(stack_.empty())
                    break;
            }

         stack_.push(temp);
    }
    while(!stack_.empty())
    {
        map_.insert(make_pair(stack_.top(),stack_.top()));
        stack_.pop();
    }
    for(auto it:a)
    {
        cout<<map_[it]<<" ";
    }


}
*////////////////////
/*****************************question 28
int main()
{
    string a;
    int n,i,top=-1;
    cin>>a;
    n=a.size();
    for(i=0;i<n;i++)
    {
        if(top!=-1)
        {
            if(a[top]==a[i])
            {
                top--;
            }
            else
                a[++top]=a[i];
        }
        else
            a[++top]=a[i];

    }
    i=0;
    while(top>-1)
    {
        cout<<a[i];
        i++;
        top--;
    }
}
*******************************************************************************/
/*************************************question 24
int main()
{
int arr[100];
 stack<int> stack_;
 int n,temp,i,area=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>temp;
     arr[i]=temp;
     if(stack_.empty()||(temp>arr[stack_.top()]))
        stack_.push(i);
     else
     {
         while(arr[stack_.top()]>temp)
         {

             if(((i-stack_.top())*arr[stack_.top()])>area)
                {
                    area=(i-stack_.top())*arr[stack_.top()];
                    stack_.pop();
                }
                if(stack_.empty())
                    break;

         }

     }
 }
 cout<<area;
}
*//////////////////////////////////////////////////////////////////////
/**************************************question -----------------------
void spanningTree(int arr[],int n);
int main()
{
    int arr[100];

    int n,temp,i;
    cin>>n;
    while(n--)
    {
        cin>>temp;
        arr[i]=temp;
    }
    spanningTree(arr,n);

}
void spanningTree(int arr[],int n)
{
    int spannArray[100],p;
    stack<int> stack_;
    for(int i=0;i<n;i++)
    {
        while(!stack_.empty()&&arr[stack_.top()]<arr[i])
        {
            stack_.pop();
        }
        if(stack_.empty())
        p=-1;
        else
            p=stack_.top();
            spannArray[i]=i-p;
            stack_.push(i);
        }
       for(int i=0;i<n;i++)
       {
           cout<<spannArray[i]<<" ";

       }
}
*/////////////////////////////////////////////
/***************************************************
question---- balancing of parenthesis
int main()
{
    string a;
    map<char,char> map_;
    stack<char> stack_;
    map_.insert(make_pair(')','('));
    map_.insert(make_pair(']','['));
    map_.insert(make_pair('}','{'));
    cin>>a;
    for(auto it:a)
    {
        if(it=='('||it=='{'||it=='[')
            stack_.push(it);
        else
            if(it==')'||it=='}'||it==']')
        {
            if(map_[it]==stack_.top())
                stack_.pop();
        }
    }
    if(stack_.empty())
        cout<<"balanced";
    else
        cout<<"unbalanced";


}
*///////////////////////////////////////////////////////////////
/******************************************************
Qusetion 2:Infix to postfix
int main()
{
    map<char,int> map_;
    stack<char> stack_;
    string a;
    map_.insert(make_pair('*',2));
    map_.insert(make_pair('/',2));
    map_.insert(make_pair('+',1));
    map_.insert(make_pair('-',1));
    cin>>a;
    for(auto it:a)
    {
        if(it>='a'&&it<='z')
            cout<<it;
        else
          if(stack_.empty())
            stack_.push(it);
            else
                if(it==')')
            {
                while(stack_.top()!='(')
                {
                    cout<<stack_.top();
                    stack_.pop();
                }
                stack_.pop();
            }
            else
            {   if(it=='*'||it=='/'||it=='-'||it=='+')
                while(map_[stack_.top()]>=map_[it])
                {
                    cout<<stack_.top();
                    stack_.pop();
                     if(stack_.empty())
                        break;
                }
                stack_.push(it);
            }
    }
    while(!stack_.empty())
    {
        cout<<stack_.top();
        stack_.pop();
    }


}
*////////////////////////////////////////////////////
/*********************************************************
question 5
int main()
{
    stack<int> stack_;
    int temp1=0,temp2=0,res=0;
    string s;
    cin>>s;
    for(auto it:s)
    {
        if(it=='*'||it=='/'||it=='+'||it=='-')
        {
            temp1=stack_.top()-48;
            stack_.pop();
            temp2=stack_.top()-48;
            stack_.pop();
            if(it=='*')
                res=temp1*temp2;
            else
                if(it=='/')
                res=temp2/temp1;
                 else
                    if(it=='-')
                res=temp2-temp1;
                    else
                        if(it=='+')
                res=temp1+temp2;
              //  cout<<char(res+48);
            stack_.push(char(res+48));
        }
        else
        {stack_.push(it);

        }

    }
    cout<<"\n"<<stack_.top()-48;
}
*///////////////////////////////////////////////////////////////
/************************
question to be done later
int main()
{
    map<char,int> map_;
    stack<char> operands;
    stack<char> operate;
    map_.insert(make_pair('+',1));
    map_.insert(make_pair('-',1));
    map_.insert(make_pair('/',1));
    map_.insert(make_pair('/',1));
    string s;
    cin>>s;
    for(auto it:s)
    {
        if(it>='0'&&it<='9')
            operands.push(it);
        else
            if(it==')')
        {
            temp1=operands.top()-48;
            operands.pop();
            temp2=operands.top-48;
            operands.pop();

            operands.push(char(temp))
        }
    }


}
*/////////////////////////////////////////////////////
/*****************************************************
class MinStack{
    stack<int> mainstack;
    stack<int> minstack;
public:
    void push_(int data)
    {
        mainstack.push(data);
        if(minstack.empty()||data<minstack.top())
            minstack.push(data);
    }
    void pop_()
    {
        int temp;
        temp=mainstack.top();
        mainstack.pop();
        if(temp==minstack.top())
            minstack.pop();
    }
    int minElement()
    {
        return minstack.top();
    }
};
int main()
{
    int temp,i,n;
    MinStack s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        s.push_(temp);
    }
    for(i=0;i<n;i++)
    {
        cout<<s.minElement()<<" ";
        s.pop_();
    }
}
*//////////////////////////////////////////////////
/**************************************************
int main()
{
    string s;
    int i,j;
    int flag=1;
    cin>>s;
    int n=s.size();
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        if(s[i]!=s[j])
            flag=0;
    }
    if(flag)
        cout<<"true";
    else
        cout<<"false";
}
*//////////////////////////////////////////////////////
/******************************************************
question: reverse a stack using one stack
void reverseStack(stack<int> s);
void insertBottom(stack<int> s,int data);
void printStack(stack<int> s);
int main()
{   int n,temp,i;
    stack<int> s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        s.push(temp);
    }
    reverseStack(s);
    printStack(s);

}
void reverseStack(stack<int> s)
{
    if(s.empty())
        return;
    else
    {
        int temp=s.top();
        s.pop();
          reverseStack(s);
        insertBottom(s,temp);

    }
}
void insertBottom(stack<int> s,int data)
{
    if(s.empty())
    {    s.push(data);
        return;
    }
    else
    {
        int temp=s.top();
        s.pop();
        insertBottom(s,data);
        s.push(temp);

    }
}
void printStack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();

}
}
*/////////////////////////////////////////
