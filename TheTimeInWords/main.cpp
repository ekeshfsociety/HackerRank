#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int h ;
    int m ;
    
    cin >> h >> m ;
    
    vector <string> numbers ;
    
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");
    numbers.push_back("six");
    numbers.push_back("seven");
    numbers.push_back("eight");
    numbers.push_back("nine");
    numbers.push_back("ten");
    numbers.push_back("eleven");
    numbers.push_back("twelve");
    numbers.push_back("thirteen");
    numbers.push_back("fourteen");
    numbers.push_back("quarter");
    numbers.push_back("sixteen");
    numbers.push_back("seventeen");
    numbers.push_back("eighteen");
    numbers.push_back("nineteen");
    numbers.push_back("twenty");
    numbers.push_back("twenty one");
    numbers.push_back("twenty two");
    numbers.push_back("twenty three");
    numbers.push_back("twenty four");
    numbers.push_back("twenty five");
    numbers.push_back("twenty six");
    numbers.push_back("twenty seven");
    numbers.push_back("twenty eight");
    numbers.push_back("twenty nine");
    numbers.push_back("half");
    
    if (m == 0)
    {
        cout << numbers.at(h-1) << " o' clock" ;
    }
    
    else
    {
        if (m <= 30)
        {
            if (m == 1)
            {
                cout << "one minute past " << numbers.at(h-1) ;
            }
            
            else if ( m == 15 || m == 30)
            {
                cout << numbers.at(m-1) << " past " << numbers.at(h-1) ;
            }
            else
            {
                cout << numbers.at(m-1) << " minutes past " << numbers.at(h-1) ;
            }
        }
        
        else
        {
            if (m == 59)
            {
                cout << "one minute to " << numbers.at(h) ;
            }
            
            else if ( m == 45)
            {
                cout << "quarter to " << numbers.at(h) ;
            }
            
            else
            {
                cout << numbers.at(60-m-1) << " minutes to " << numbers.at(h) ;
            }
        }
    }
    
    
    return 0;
}