/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int calFirstDigitOfNum(int num){
    
    if(num/10==0){
        return num;
        
    }else{
        num=num/10;
        calFirstDigitOfNum(num);
    }
    
    
    
}

int main()
{
    int num;
    cin>>num;
    cout<<calFirstDigitOfNum(num);
    return 0;
}
