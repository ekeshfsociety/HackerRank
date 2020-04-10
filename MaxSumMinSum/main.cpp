#include <iostream>

using namespace std ;

int main()
{
    int arr[5] ;
    
    for (int i=0 ; i<5 ; i++)
    {
        cin >> arr[i] ;
    }

    int totalSum {} , smallest {} , largest {} ;
    
    for (auto num1 : arr)
    {
        totalSum = totalSum + num1 ;
    }
    
    smallest = arr[0] ;
    
    for (auto num2 : arr)
    {
        if(smallest > num2)
            smallest = num2 ;
    }
    
    for (auto num3 : arr)
    {
        if (largest < num3)
            largest = num3 ;
    }
    
    // cout << endl << "Total Sum : " << totalSum << endl << "Smallest Element : " << smallest << endl << "Largest Element : " << largest << endl << endl ;
    
    cout << (totalSum - largest) << " " << (totalSum - smallest) ;
    
}