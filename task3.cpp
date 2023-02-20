#include <iostream>
using namespace std;
main()
{
    int size;
    int finalArray[20];
    cout << "Enter total numnber of elements:";
    cin >> size;
    int greater[size];
    for(int idx=0; idx < size; idx++)
    {
        cout << "Enter elements:";
        cin >> greater[idx];
    }
    int count =0;
    for(int x=1; x<size-1; x++)
    {
        if(greater[x]>greater[x-1]&& greater[x]>greater[x+1])
        {
            finalArray[count] = greater[x];
            count ++;
        }
    }
    if(count !=0)
    {
        for(int y=0; y<count; y++)
        {
            cout << finalArray[y] << " ";
        }
    }
    else
    {
        cout << "No peak";
    }

}