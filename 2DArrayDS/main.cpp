#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[6][6] {} ;
    
    for (int i=0 ; i<6 ; i++)
    {
        for (int j=0 ; j<6 ; j++)
        {
            cin >> arr[i][j] ;
        }
    }
    
    int hourglass {} ;
    
    vector <int> list {} ;
    
    for (int i=0 ; i<=3 ; i++)
    {
        for (int j=0 ; j<=3 ; j++)
        {
            hourglass = 0 ;
            hourglass = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2] ;
            list.push_back(hourglass) ;
            hourglass = 0 ;
        }
    }
    
    int highest = list.at(0) ;
    
    for (auto num1 : list)
    {
        if (num1 > highest)
            highest = num1 ;
    }
    
    cout << highest ;
    
    return 0;
}