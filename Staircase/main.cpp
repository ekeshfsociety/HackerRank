#include <iostream>

using namespace std ;

int main()
{
    int n;
    cin >> n ;
    
    char staircase[n][n] ;

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if ((i+j >= (n-1)))
            staircase[i][j] = '#' ;

            else
            staircase[i][j] = ' ' ;
        }
    }

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout << staircase[i][j] ;
        }
        cout << endl ;
    }


    
    return 0 ;
}