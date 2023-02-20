#include <iostream>
using namespace std;
bool checkCondition(int pre, int curr, int next);
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
    bool flag;
    for(int x=1; x<size-1; x++)
    {
        flag= checkCondition(greater[x-1],greater[x], greater[x+1]);
            if(flag== true)
            {
                finalArray[count]=greater[x];
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
bool checkCondition(int pre, int curr, int next)
{
    bool flag= false;
    if(curr > next && curr > pre)
    {
        flag=true;
    }
    return flag;
}