#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n {} , q {} ;
    
    cin >> n >> q ;
    
    for (int i=0 ; i<n ; i++)
    {
        vector <int> num(i) ;
    }
    
    int a {} , b {} , c {} ;
    
    for (int  i=0 ; i<q ; i++)
    {
        int lastAnswer {} ;
        
        cin >> a >> b >> c ;
        
        int seq {} ;
        
        if (a == 1)
        {
            seq = ((b ^ lastAnswer) % n) ;
            num(seq).push_back(c) ;
        }
        
        else if (a == 2)
        {
            seq = ((b ^ lastAnswer) % n) ;
            
        }
    }
    
    return 0;
}