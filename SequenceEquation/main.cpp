#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n {} ;
    cin >> n ;
    
    int p[n] ;
    vector <int> initial ;
    int element ;
    
    for (int i=0 ; i<n ; i++)
    {
        cin >> p[i] ;
    }
    
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (i == p[j])
            {
                initial.push_back(j+1) ;
            }
        }
    }
    
    vector <int> y ;
    
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (initial.at(i) == p[j])
            {
                y.push_back(j+1) ;
            }
        }
    }
    
    for (auto num1 : y)
    {
        cout << num1 << endl ;
    }
    
    return 0;
}