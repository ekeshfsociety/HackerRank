#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    
    int scores[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> scores[i] ;
    }
    
    int highestScore {} ;
    int lowestScore {} ;
    
    int highestRecord {} ;
    int lowestRecord {} ;
    
    highestScore = scores[0] ;
    lowestScore = scores[0] ;
    
    for (int i = 0 ; i < n ; i++)
    {
        if (scores[i] > highestScore)
        {
            highestScore = scores[i] ;
            highestRecord++ ;
        }
        
        if (scores[i] < lowestScore)
        {
            lowestScore = scores[i] ;
            lowestRecord++ ;
        }
    }
    
    cout << highestRecord << " " << lowestRecord ;
    
    return 0;
}