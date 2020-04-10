#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int b , n , m ;
    cin >> b >> n >> m ;
    
    int keyboard[n] {} ;
    int drives[m] {} ;
    
    for (int i=0 ; i<n ; i++)
    {
        cin >> keyboard[i] ;
    }
    
    for (int i=0 ; i<m ; i++)
    {
        cin >> drives[i] ;
    }
    
    vector <int> buy ;
    
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            buy.push_back(keyboard[i] + drives[j]) ;
        }
    }
    
    
    int flag = 0 ;
    
    for (auto num1 : buy)
    {
        if(b>num1)
            flag = 1;
    }
    
    if (flag == 0)
        cout << -1 ;
    else
    {
        
    vector <int> buyFinal {} ;
    
    for (auto num2 : buy)
    {
        if (num2 <= b )
        {
            buyFinal.push_back(num2) ;
        }
    }
    
    int highest = buyFinal.at(0) ;
    
    for (auto num3 : buyFinal)
    {
        if (num3 > highest)
            highest = num3 ;
    }
    
    cout << highest ;
    }
    return 0;
}