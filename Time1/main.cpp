#include <iostream>
#include <string>

using namespace std;

int main()
{
    string time1 ;
    getline(cin , time1) ;
    
    string hours1 {time1 , 0 , 2};
    string minutes1 {time1 , 3 , 2};
    string seconds1 {time1 , 6 , 2};
    string time {time1, 8 , 2};
    
    //cout << endl << hours1 << endl << minutes1 << endl << seconds1 << endl << time << endl ;
    
    if(time == "PM")
    {
        if (hours1 == "01")
            hours1 = "13" ;
        else if (hours1 == "02")
            hours1 = "14" ;
        else if (hours1 == "03")
            hours1 = "15" ;
        else if (hours1 == "04")
            hours1 = "16" ;
        else if (hours1 == "05")
            hours1 = "17" ;
        else if (hours1 == "06")
            hours1 = "18" ;
        else if (hours1 == "07")
            hours1 = "19" ;
        else if (hours1 == "08")
            hours1 = "20" ;
        else if (hours1 == "09")
            hours1 = "21" ;
        else if (hours1 == "10")
            hours1 = "22" ;
        else if (hours1 == "11")
            hours1 = "23" ;
    }
    
    else if (time == "AM")
    {
        if (hours1 == "12")
            hours1 = "00" ;
        
    }
    
    cout << hours1 <<":"<< minutes1 <<":"<< seconds1 ;
    
    return 0;
}