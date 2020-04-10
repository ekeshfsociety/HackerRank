#include <iostream>
#include <boost/multiprecision/cpp_int.cpp>

using namespace std;
namespace mp = boost::multiprecision;

 mp::cpp_int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n-1) ;
}

int main()

{
    int n ;
    cin >> n ;
    
     mp::cpp_int factorial {} ;
    
    factorial = fact(n);
    
    cout << factorial ;
    
    return 0;
}