#include <iostream>

using namespace std;

int main()
{
    int n{} , k{} ;
    
    cin >> n >> k ;
    
    int c[n] {} ;
    
    for (int i=0 ; i<n ; i++)
    {
        cin >> c[i] ;
    }
    
    int e = 100 ;
    
    int i = 0 ;
    
    do
    {
        i =  ((i + k) % n) ;
        if (i > n)
        {
            do
            {
                i = i - n - 1 ;
            }while ( i < n );
        }
        e = e - 1 ;
        if (c[i] == 1)
            e = e - 2 ;
    }while (i != 0);
    
    cout << e ;
    
    return 0;
}