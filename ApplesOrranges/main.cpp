#include <iostream>

using namespace std;

int main()
{
    long int ss{} , t{} , a{} , b{} , m{} , n{} ;
    
    cin >> ss >> t ;
    cout << endl ;
    cin >> a >> b ;
    cout << endl ;
    cin >> m >> n ;
    
    long int apples[m] {} ;
    long int oranges[n] {} ;
    
    int countApple {} ;
    int countOrange {} ;
    
    for (int i=0 ; i < m ; i++ )
    {
        cin >> apples[i] ;
    }
    
    for (int i=0 ; i < n ; i++)
    {
        cin >> oranges[i] ;
    }
    
    for (int i=0 ; i < m ; i++ )
    {
        apples[i] = ( apples[i] + a );
    }
    
    for (int i=0 ; i<n ; i++)
    {
        oranges[i] = ( oranges[i] + b ) ;
    }
    
    for (auto num1 : apples)
    {
        if (num1 >= ss && num1 <= t)
            countApple++ ;
    }
    
    for (auto num2 : oranges)
    {
        if (num2 >= ss && num2 <= t)
            countOrange++ ;
    }
    
    cout << countApple << endl << countOrange ;   
    
    return 0;
}