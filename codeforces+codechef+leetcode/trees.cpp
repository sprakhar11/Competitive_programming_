#include<bits/stdc++.h>
using namespace std;
class trees
{   public:
    trees *lc;
    int node;
    trees *rc;
    
    trees(int data=0)
    {
      node= data;
      lc =NULL;
      rc=NULL;
    }
};

// trees * rightnode(trees *n)
// { int p;
//     cout<<"Enter the right node value: ";
//   cin>>p;
//   if(p!=-1)
// {
//   trees *rn= new trees(p);
//   n->rc=rn;

//   n=rn;
// }
  
//   return n;
// }
int f=0,p;
void insertnode(trees * n) //node left value // node right value
{   
    if(f==0)
{
    cout<<"Enter the left node value of current node :";
    cin>>p;
    
}
if(f==1)
{
cout<<"Enter the right node value of current node :";
  cin>>p;
}

  if(p==-1)
  {  f=0; 
       return;
  }
  if(f==0)
 { trees *lr= new trees(p);
  n->lc=lr;
  n=lr;
  
 }
 if(f==1)
 {
      trees *lf= new trees(p);
     n->rc=lf;
     n=lf;
  f=0;
 }
  //cout<<"*"<<n->node;
 insertnode(n);
 f=1; 
 insertnode(n);
 
  }
  void display(trees * n)
  {   //cout << n->node << "\n";
      if(n==0)
      {
          
          return;
      }
      
      cout<<n->node<<" ";
      //cout << "hi1\n";
      //cout << n->lc << "\n";
      display(n->lc);
      //cout << "hi2\n";
      display(n->rc);
  }
  

int main()
{   
    
  cout<<"Enter the root node value: ";
  cin>>p;
  trees *rn=new trees(p);
  
  insertnode(rn);
  f=1;
  insertnode(rn);

  //insertnode(rn);
  display(rn);
  
 }