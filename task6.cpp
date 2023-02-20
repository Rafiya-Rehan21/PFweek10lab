#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;
    int dimensions[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter element:";
        cin>> dimensions[idx];
    }
    int product=0;
    int sum=0;
    for(int x=1; x<size-1; x=x+3)
    {
        product = dimensions[x-1]*dimensions[x]*dimensions[x+1];
        sum= sum+product;
    }
    cout << "The total volume of box is:" << sum;
}
