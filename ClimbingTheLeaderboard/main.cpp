#include <iostream>

using namespace std;

int main()
{
    int n {} ;
    cin >> n ;
    
    int scores[n] {} ; 
    for (int i=0 ; i<n ; i++)
    {
        cin >> scores[i] ;
    }
    
    int m {} ;
    cin >> m ;
    
    int alice[m] ;
    
    for (int i=0 ; i<m ; i++)
    {
        cin >> alice[i] ;
    }
    
    return 0;
}