#include <iostream> 
#include <string> 
#include "StackLL.h"//Use linked-list implementation of Stack

using namespace std;
        
        
string reverseString(string str)
{
     string res;
     Stack stk;

   for (auto ch : str ) 
      stk.push(ch);

    
    while( stk.size() > 0)
       {
	  res +=  stk.top();
	   stk.pop();
       }

   return res;
}


int main()
{         
    string a_string = "COMP2115 here we come!!!";
     
    cout<<"\""<<a_string<<"\""<<endl<<"\""<<reverseString(a_string)<<"\"";
	    
    return 0;
        
}
