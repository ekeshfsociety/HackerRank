#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int i{} , j{} , k{} ;
    
    cin >> i >> j >> k ;
    
    int temp {} ;
    
    vector <int> array1 ;
    vector <int> array2 ;
    
    for (int a=i ; a<=j ; a++)
    {
        array1.push_back(a) ;
    }
    
    for (auto num1 : array1)
    {
        while (num1 > 0)
        {
            temp = temp*10 + num1%10 ;
            num1 = num1 / 10 ;
        }
        
        array2.push_back(temp) ;
        
        temp = 0 ;
    }
    
    
//    for (auto num3 : array1)
//    {
//        cout << num3 << "\t" ;
//    }
//    
//    cout << endl ;
//    
//    for (auto num4 : array2)
//    {
//        cout << num4 << "\t" ;
//    }
//    
//    cout << endl << endl ;    
    
    int count {} ;
    
    for (int a=0 ; a<array2.size() ; a++)
    {
        if ( (abs(array1.at(a) - array2.at(a)) % k ) == 0 )
            count++ ;
    }
    
    cout << count ;
    
    
    return 0;
}