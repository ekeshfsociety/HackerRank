#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    
    int n ;
    cin >> n ;
    
    string s ;
    cin.ignore() ;
    getline(cin , s) ;
    
    int sum {} ;
    int result {} ;
    
    vector <int> sum1 ;
    
    for (int i=0 ; i<s.length() ; i++)
    {
        if (s.at(i) == 'U')
            {
                sum++ ;
                sum1.push_back(sum) ;
            }
        else
            {
                sum-- ;
                sum1.push_back(sum) ;
            }
    }
    
    for (int i=0 ; i<s.length() ; i++)
    {
        if (sum1.at(i) == -1)
        {
            if (s.at(i+1) == 'U' )
                result++;
        }
    }
    
    return 0;
}