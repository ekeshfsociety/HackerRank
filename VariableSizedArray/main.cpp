#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n , q ;
    cin >> n >> q ;
    
    vector < vector <int> > nums ;
    
    vector <int> result ;
    
    for (int i=0 ; i<n ; i++)
    {
        int size ;
        cin >> size ;
        
        vector <int> arr {} ;
        for (int j=0 ; j<size ; j++)
        {
            int element ;
            cin >> element ;
            arr.push_back(element) ;
        }
        
        nums.push_back(arr) ;
    }
    
    for (int i=0 ; i<q ; i++)
    {
        int a , b ;
        cin >> a >> b ;
        
        result.push_back(nums[a][b]) ;
    }
    
    for (auto num1 : result)
    {
        cout << num1 << endl ;
    }
    
    return 0;
}