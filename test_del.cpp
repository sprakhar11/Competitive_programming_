// C++ code to demonstrate the working of erase()

#include<iostream>
#include<map> // for map operations
using namespace std;

int main()
{
 // declaring map
 // of char and int
 map< char, int > mp;
 
 // declaring iterators
 map<char, int>::iterator it ;
 map<char, int>::iterator it1;
 map<char, int>::iterator it2;
 
 // inserting values
 mp['a']=5;
 mp['b']=10;
 mp['c']=15;
 mp['d']=20;
 mp['e']=30;

 // printing initial map elements
 cout << "The initial map elements are : \n";
 
 for (it1 = mp.begin(); it1!=mp.end(); ++it1)
  cout << it1->first << "->" << it1->second << endl;
 
 it = mp.begin();
 
 cout << endl;
 
 // erasing element using iterator
 // erases 2nd element
 // 'b'
 ++it;
 mp.erase(it);
 
 // printing map elements after deletion
 cout << "The map elements after 1st deletion are : \n";
 
 for (it1 = mp.begin(); it1!=mp.end(); ++it1)
  cout << it1->first << "->" << it1->second << endl;
 
 cout << endl;
 
 // erasing element using value
 int c = mp.erase('c');
 
 // printing map elements after deletion
 cout << "The map elements after 2nd deletion are : \n";
 
 for (it1 = mp.begin(); it1!=mp.end(); ++it1)
  cout << it1->first << "->" << it1->second << endl;
 
 cout << "The number of elements deleted in 2nd deletion are : ";
 cout << c << endl;
 
 cout << endl;
 
 // erasing element using value
 // key not present
 int d = mp.erase('w');
 
 // printing map elements after deletion
 cout << "The map elements after 3rd deletion are : \n";
 
 for (it1 = mp.begin(); it1!=mp.end(); ++it1)
  cout << it1->first << "->" << it1->second << endl;
 
 cout << "The number of elements deleted in 3rd deletion are : ";
 cout << d << endl;
 
 cout << endl;
 
 
 ++it;
 ++it;
 
 // erasing element using range iterator
 // deletes "d" and "e" keys
 mp.erase(it, mp.end());
 
 // printing map elements 4th deletion
 cout << "The map elements after 4th deletion are : \n";

 for (it1 = mp.begin(); it1!=mp.end(); ++it1)
  cout << it1->first << "->" << it1->second << endl;
 
 cout << endl;
 
}
