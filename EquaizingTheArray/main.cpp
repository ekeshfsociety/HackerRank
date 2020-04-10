#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    
    int arr[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[n] ;
    }
    
    vector <int> countTotal ;
    
    for (int i=1 ; i<100 ; i++)
    {
        int count = 0;
        for (int j=0 ; j<n ; j++)
        {
            if (i == arr[j])
                count++ ;
        }
        
        countTotal.push_back(count) ;
    }
    
    vector <int> finalArray ;
    
    for (auto num1 : countTotal)
    {
        if (num1 != 0)
            finalArray.push_back(num1) ;
    }
    
    int highest = finalArray.at(0) ;
    
    for (auto num1 : finalArray)
    {
        cout << num1 << "\t" ;
        
        if (num1 > highest)
        {
            highest = num1 ;
        }
    }
    
    cout << (n - highest) ;
    
    return 0;
}