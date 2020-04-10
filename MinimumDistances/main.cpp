#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    long int a[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i] ;
    }
    
    vector <int> distances ;
    int count {} ;
    
    for (int i=0 ; i<n ; i++)
    {
        for (int j= i+1 ; j<n ; j++)
            if ( a[i] == a[j])
            {
                distances.push_back(abs(i-j)) ;
                count++ ;
            }
    }
    
//    for (int i=0 ; i < count ; i++)
//    {
//        cout << distances.at(i) << "  " ;
//    }
    
    if (distances.size() > 0)
    {
    int smallest = distances.at(0) ;
    for (auto num1 : distances)
    {
        if (num1 < smallest)
        {
            smallest = num1 ;
        }
    }
    
    cout << smallest ;
    
    }
    
    else
    {
        cout << "-1" ;
    }
    
        
    return 0;
}