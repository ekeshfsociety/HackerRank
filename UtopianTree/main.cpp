#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    
    int arr[t] ;
    
    for (int i=0 ; i<t ; i++)
    {
        cin >> arr[i] ;
    }
    
    vector <int> finalArray ;
    
    for (int i=0 ; i<60 ; i++)
    {
        if (i == 0)
        {
            finalArray.push_back(1) ;
        }
        
        else
        {
            if (i % 2 == 0)
            {
                finalArray.push_back( (finalArray.at(i-1) + 1) ) ;
            }
            else
            {
                finalArray.push_back((finalArray.at(i-1)*2)) ;
            }
        }
    }
    
    for (int i=0 ; i<t ; i++)
    {
        cout << finalArray.at(arr[i]) << endl ;
    }
    
    return 0;
    
}
    