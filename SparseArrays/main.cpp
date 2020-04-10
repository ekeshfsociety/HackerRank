#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n {} ;
    cin >> n ;
    
    string strings[n] ;
    
    for (int i=0 ; i<n ; i++)
    {
        cin >> strings[i] ;
    }
    
    int q {} ;
    cin >> q ;
    
    string queries[q] ;
    
    for (int i=0 ; i<q ; i++)
    {
        cin >> queries[i] ;
    }
    
    int count {} ;
    
    for (int i=0 ; i<q ; i++)
    {
        count = 0 ;
         for (int j=0 ; j<n ; j++)
         {
             if (queries[i] == strings[j])
                 count++ ;
         }
         
         cout << count ;
    }
    
    return 0;
}