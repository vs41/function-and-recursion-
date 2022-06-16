/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
//fuction for calculating factor of a given number
void factor(int num, int x){
   //condition for stop the recursion  
    int temp =num;
    if(temp/x==0){
    
        return;
        
    }else{
    if (num%x==0){
        cout<<x;
        num=num/x;
        factor(num ,x);
        
    }else
      factor(num,(x+1));
    
    }
    
    
    
    
    
}
int main()
{
    int num;
    int x=2;
    cin>>num;
    factor(num,x);

    return 0;
}
