#include <iostream>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    
    long int arr[n] ;
    
    for (int i=0; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    
    int count {} , largest {} ;
    
    largest = arr[0] ;
    
    for (auto num1 : arr)
    {
        if (largest < num1)
            largest = num1 ;
    }
    
    //cout << "The Largest Number is : " << largest << endl ;
    
    for (auto num2 : arr)
    {
        if (num2 == largest)
            count++ ;
    }
    
    cout << count ;
    
    return 0;
}