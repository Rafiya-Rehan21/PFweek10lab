#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter total numnber of saturdays:";
    cin >> size;
    int progress[size];
    for(int idx=0; idx < size; idx++)
    {
        cout << "Enter miles:";
        cin >> progress[idx];
    }
    int count =0;
    for(int x=0; x<size-1; x++)
    {
        if(progress[x+1]>progress[x])
        {
            count++;
        }
    }
    cout << "Total progress days are:" << count;
}