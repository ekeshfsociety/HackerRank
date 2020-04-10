#include <iostream>

using namespace std;

int main()
{
    int t {} ;
    cin >> t ;
    
    for (int i=0 ; i<t ; i++)
    {
        int n{} , c{} , m{} ;
        cin >> n >> c >> m ;
        
        int total {} ;
        int wrappers {} ;
        int bought {} ;
        int boughtWithWrappers {} ;
        
        bought = n/c ;
        total = total + bought ;
        wrappers = wrappers + bought ;
        
        
        
    }
    
    return 0;
}