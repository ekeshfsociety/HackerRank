#include <iostream>

using namespace std;

int main()
{
    int x1 , v1 , x2 , v2 ;
    cin >> x1 >> v1 >> x2 >> v2 ;
    
    int flag1 = 1 ;
    
    if (x1 < x2)
    {
        if (v1 <= v2)
            cout << "NO" ;
        else
        {
            for(int i=1 ; i<=10000 ; i++)
            {
                if ( (x1 + (i * v1)) ==  (x2 + (i * v2)) )
                    flag1 = 0;
            }
            
            if (flag1 == 0)
                cout << "YES" ;
            else if (flag1 == 1)
                cout << "NO" ;
        }
    }
    
    else if (x1 > x2)
    {
        if (v1 < v2)
        {
            for(int i=1 ; i<=10000 ; i++)
            {
                if ( (x1 + (i * v1)) ==  (x2 + (i * v2)) )
                    flag2 = 0 ;
            }
            
            if (flag2 == 0)
                cout << "YES"
            else if (flag2 == 1)
                cout << "NO" ;
        }
        else 
            cout << "NO" ;
    }
    
    else if (x1 = x2)
    {
        if (v1 == v2)
            cout << "YES" ;
        else
            cout << "NO" ;
    }
    
    
    return 0;
}