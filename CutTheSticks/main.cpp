#include <iostream>

using namespace std;

int main()
{
    int n {} ;
    cin >> n ;
    
    int arr[n] {} ;
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[n] ;
    }
    
    int lowest = arr[0] ;
    
    for (auto num1 : arr)
    {
        if (num1 < lowest)
            lowest = num1 ;
    }
    
    int count = 0 ;
    
    
    
    return 0;
}