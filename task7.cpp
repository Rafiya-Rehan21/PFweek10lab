#include <iostream>
using namespace std;
main()
{
    int numbers[10];
    for (int x=0; x<10; x++)
    {
        cout << "Enter weight of box:";
        cin >> numbers[x];
    }
    int checked;
    for (int idx =0; idx <10; idx++)
    {
        for (int i=idx+1; i<10; i++)
        {
            if(numbers[i]<numbers[idx])
            {
                checked =numbers[idx];
                numbers[idx]=numbers[i];
                numbers[i]=checked;
            }
        }
    }
    for(int j=0; j<10; j++)
    {
        cout << numbers[j]<< " ";
    }
}