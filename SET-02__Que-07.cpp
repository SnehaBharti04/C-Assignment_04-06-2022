#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int length, breadth,nSquares;

    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter Breadth: ";
    cin>>breadth;

    int side = __gcd(length, breadth);
    nSquares = (length*breadth)/(side*side);

    cout<<"Minimum possible number of square pieces are: "<<nSquares<<endl;
    return 0;
}
