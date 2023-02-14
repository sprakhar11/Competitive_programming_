#include <bits/stdc++.h>
#define lli long long int
using namespace std;
void stackdemo(){
    stack<int> st ;
    int   k = 8;
    while ( k--)
    {
        st.push(k);
    }
    cout << st.size() << endl;
    while (!st.empty())

    {
        cout << st.top() << endl;
        st.pop();
        
    }
}

void queuedemo()
{
    queue<int> qu;
    
}
int main(int argc, char const *argv[])
{
    //stack inplimentation
    
    //stackdemo();


    
    return 0;
}
