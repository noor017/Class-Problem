#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main()
{
    int i;
    char ch;
    string str;

    queue<char>q;
    stack<char>s;

    cout << "Enter a string: ";
    cin >>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')  str[i] = str[i]+32;

        q.push(str[i]);
        s.push(str[i]);
    }

    while(!q.empty() && !s.empty())
    {
        char qch = q.front();
        char sch = s.top();

        if(qch == sch)
        {
            q.pop();
            s.pop();
        }

        else
        {
            break;
        }
    }

    if(q.empty() && s.empty())
    {
        cout << "Your string is Palindrone" << endl;
    }

    else
    {
        cout << "Your string is NOT Palindrone" << endl;
    }

    return 0;
}
