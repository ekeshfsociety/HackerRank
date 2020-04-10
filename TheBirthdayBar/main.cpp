#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    
    int s[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cin >> s[i] ;
    }
    
    int d , m ;
    cin >> d >> m ;
    
    int count {} ;
    int sum {} ;
    
    for (int i=0 ; i<=n-m ; i++)
    {
        for (int j=i ; j < (i+m) ; j++)
        {
            sum = sum + s[j] ;
        }
        
        if (sum == d)
        {
            count++ ;
            sum = 0 ;
        }
        
        else 
        {
            sum = 0;
        }
    }
    
    cout << count ;
    
    return 0;
}