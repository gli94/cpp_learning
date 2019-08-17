/* Convert this program to C++
 
 * change to C++ io
 
 * change to one line comments
 
 * change defines of constants to const
 
 * change array to vector<>
 
 * inline any short function
 
 */

#include <iostream>  //change to C++ io
#include <vector>

using namespace std;

const int N = 40; // change defines of constants to const

inline void sum(int*p, vector<int> d) //inline any short function

{
    *p = 0;
    
    for(auto i = d.begin(); i != d.end(); ++i)
        
        *p = *p + *i;
    
}

int main()

{
    
    int i;
    
    int accum = 0;
    
    vector<int> data; //change array to vector<>
    
    for(i = 0; i < N; ++i)
        
        data.push_back(i);
    
    sum(&accum, data);
    
    cout << "sum is " << accum << endl;
    
    return 0;
    
}
