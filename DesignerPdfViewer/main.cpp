#include <iostream>
#include <string>
#include <vector> 

using namespace std;

int main()
{
    int arr[26] ;
    string str ;
    
    for (int ij=0; ij<26 ; ij++)
    {
        cin >> arr[ij] ;
    }
    
    cin.ignore();
    getline(cin , str);
    
    vector <int> arr1 ;
    vector <int> arr2 ;
    
    for (int ij = 0 ; ij < str.length() ; ij++ )
    {
        arr1.push_back(str.at((ij)) - 97) ;
    }
    
    int sizearr1 = arr1.size() ;
    
//    for (int jk=0 ; jk < sizearr1 ; jk++ )
//    {
//        cout << arr1.at(jk) << "\t" ; 
//    }
    
    for (auto num1 : arr1)
    {
        arr2.push_back(arr[num1]) ;
    }
    
    int greatest = arr2.at(0) ;
    
    for (auto num2 : arr2)
    {
        if (num2 > greatest)
        {
            greatest = num2 ;
        }
    }
    
    int finalAnswer = greatest * sizearr1 ;
    
    cout << finalAnswer ;   
    
    return 0;
}