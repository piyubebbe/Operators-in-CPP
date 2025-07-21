//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std ;

int main()
{
    int n, m;
    cout << "Enter the value of x " ;
    cin >> n ;
    cout << "Enter the value of y " ;
    cin >> m ;

    if (n < 0 && m < 0)
        cout << "number is in third quadrant" ;
    
    else if (n > 0 && m > 0)
        cout << "number is in first quadrant" ;
    
    else if (n < 0 && m > 0)
        cout << "number is in second quadrant" ;
    
    else if (n > 0 && m < 0)
        cout << "number is in fourth quadrant" ;
    
    else
        cout << "number is on the line" ;

    return 0;
}