#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n {} , m {} ;
    cin >> n >> m ;
    
    int a[n] {} , b[m] {} ;
       
    for (int i=0 ; i<n ; i++)
    {
        cin >> a[i] ;
    }
    
    for (int i=0 ; i< m ; i++)
    {
        cin >> b[i] ;
    }
    
    int maxA = a[0] ;
    int minB = b[0] ;
    
    for(auto num1 : a)
    {
        if (num1 > maxA)
            maxA = num1 ;
    }
    
    for(auto xyz : b)
    {
        if (xyz < minB)
            minB = xyz ;
    }
    
    
    //cout << maxA << "\t" << minB ;
    
    vector <int> arr1 ;
    
    for (int i = maxA ; i <= minB ; i++ )
    {
        arr1.push_back(i) ;
    }
    
    vector <int> arr2 ;
    
    int size = arr1.size() ;
    
//    for (int i=0 ; i<size ; i++)
//    {
//        cout << arr1.at(i) << "  " ;
//    }
//    
//    cout << endl ;
    
    for (auto num3 : arr1)
    {
        int flag1 = 1;
        int flag2 = 1;
        
        for (int i=0 ; i<n ; i++)
        {
            if (num3 % a[i] != 0)
                flag1 = 0 ;
                          
        }
        
        for (int i=0 ; i<m ; i++)
        {
            if (b[i] % num3 != 0)
                flag2 = 0 ;
        }
        
        if (flag1 == 1 && flag2 == 1)
        {
            arr2.push_back(num3) ;
        }
    }
    
    
    int finalAnswer = arr2.size();
    
    cout << finalAnswer ;
    
    return 0;
}