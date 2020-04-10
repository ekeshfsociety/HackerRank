#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int q;
    cin >> q ;
    
    int x[q] , y[q] , z[q] ;
    
    int catA[q] , catB[q] ;
    
    for (int i=0 ; i<q ; i++)
    {
        cin >> x[i] >> y[i] >> z[i] ;
        catA[i] = abs(x[i]-z[i]) ;
        catB[i] = abs(y[i]-z[i]) ;
    
    }
    
    for (int i=0 ; i<q ; i++)
    {
        if (catA[i] > catB[i])
        {
            cout << "Cat B" << endl ;
        }
        
        else if (catA[i] < catB[i])
        {
            cout << "Cat A" << endl ;
        }
        
        else if (catA[i] == catB[i])
        {
            cout << "Mouse C" << endl ;
        } 
    }
    
    return 0;
}