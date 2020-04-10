#include <iostream>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    
    int arr[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    
    int type1 {} ;
    int type2 {} ;
    int type3 {} ;
    int type4 {} ;
    int type5 {} ;
    
    for (auto num1 : arr)
    {
        if (num1 == 1)
            type1++ ;
        if (num1 == 2)
            type2++ ;
        if (num1 == 3)
            type3++ ;
        if (num1 == 4)
            type4++ ;
        if (num1 == 5)
            type5++ ;
    }
    
//    cout << endl << type1 << endl << type2 << endl << type3 << endl << type4 << endl << type5 ;

        if (type1 >= type2 && type1 >= type3 && type1 >= type4 && type1 >= type5 )
            {
                cout << "1" ;
                exit(0);
            }
        if (type2 >= type1 && type2 >= type3 && type2 >= type4 && type2 >= type5 )
            {
                cout << "2" ;
                exit(0);
            }
        if (type3 >= type1 && type3 >= type2 && type3 >= type4 && type3 >= type5 )
            {
                cout << "3" ;
                exit(0);
            }
        if (type4 >= type1 && type4 >= type2 && type4 >= type3 && type4 >= type5 )
            {
                cout << "4" ;
                exit(0);
            }
        if (type5 >= type1 && type5 >= type2 && type5 >= type3 && type5 >= type4 )
            {
                cout << "5" ;
                exit(0);
            }
    
    
    return 0 ;
}