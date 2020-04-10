#include <iostream>

using namespace std;

int main()
{
    int n , p ;
    cin >> n ;
    cin >> p ;
    
    int finalAnswer {} ;
    
    if ( (p-1) < (n-p))
    {
        finalAnswer = int (p/2) ;
    }
    
    else
    {
        if (p % 2 == 0)
        {
            finalAnswer = int ((n-p)/2)
        }
        
        else
        {
            finalAnswer = int((n-p)/2) + 1 ;
        }
    }
    
    cout << finalAnswer ;
    
    return 0;
}