#include <iostream>

using namespace std;

int main()
{
    int n , k ;
    cin >> n >> k ;
    
    int height[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cin >> height[i] ;
    }
    
    int largest = height[0] ;
    
    for (auto num1 : height)
    {
        if (num1 > largest)
        {
            largest = num1 ;
        }
    }
    
    if (largest > k)
    {
        cout << (largest - k) ;
    }
    
    else
    {
        cout << "0" ;
    }
    
    return 0;
}