#include <bits/stdc++.h>
using namespace std;
class bst
{
    public:
    bst* ln;
    int value;
    bst* rn;
    bst ( int data=0)
    {
        ln=nullptr;
        rn=nullptr;
        value=data;

    }
};
bst * insert(bst * root, int key)
{
    if(root == null)
    {
        bst * t= new bst(key);
        return t;
    }
    if(key < root->value)
    {
        root->ln=insert(root->ln,key);

    }
    else if (key > root->value)
    root->rn=insert(root->rn,key);

    return root;
}
display(bst* n)
{
    if(n==0)
      {
          
          return;
      }
      
      cout<<n->value<<" ";
      //cout << "hi1\n";
      //cout << n->lc << "\n";
      display(n->ln);
      //cout << "hi2\n";
      display(n->rn);
}
int main()
{
    bst *root = new bst();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int key;
        cin >> key;
        root = insert(root , key);
    }
    display(root);
}