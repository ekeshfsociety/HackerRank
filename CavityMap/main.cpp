#include <iostream>

using namespace std;

int main()
{
    int n ;
    
    cin >> n ;
    
    int arr[n][n] ;
    
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cin >> arr[i][j] ;
        }
    }
    
    int finalarray[n][n] {} ;
    
    int lowest ;
    
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (i==0 || j==0 || i==(n-1) || j==(n-1))
            {
                finalarray[i][j] = arr[i][j] ;
            }
            
            else
            {
                lowest = arr[i][j] ;
                if ( (lowest < arr[i+1][j]) || (lowest < arr[i-1][j]) || (lowest < arr[i][j+1]) || (lowest < arr[i][j-1]) )
                    finalarray[i][j] = arr[i][j] ;
                else
                    finalarray[i][j] = 'X' ;
            }
        }
    }
    
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (finalarray[i][j] == 'X')
            {
                cout << 'X' << " " ;
            }
            else
            {
                cout << finalarray[i][j] << " " ;
            }
        }
        
        cout << endl ;
    }
    
    return 0;
}