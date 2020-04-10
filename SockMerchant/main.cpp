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
        cin >> arr[i] ;
    }
    
    int count {} ;
    
    vector <int> pairs ;
    
    int random = 12345654 ;
    
    for (int i=0 ; i<n ; i++)
    {
        for (int j=i+1 ; j<n ; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = random ;
                count++;
                random++;
                break ;
            }
        }
    }
    
    cout << count ;
    
    return 0;
}