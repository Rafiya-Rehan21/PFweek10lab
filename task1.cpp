#include <iostream>
using namespace std;
int checkCondition(string temp, char letter);
main()
{
    int n;
    char letter;
    cout << "Enter size of array:";
    cin >> n;
    string words[n];
    for(int idx =0; idx < n; idx++)
    {
        cout << "Enter string:";
        cin >> words[idx];
    }
    cout << "Enter any letter:";
    cin >> letter;
    int sum=0;
    string temp;
    for(int y=0; y<n; y++)
    {
    temp= words[y];
    sum =sum+ checkCondition(temp,letter);
    }
    cout << "count:" << sum; 
}
int checkCondition(string temp, char letter)
{
    int x=0;
    int count =0;
    while(temp[x] != '\0')
    {
        if(temp[x]== letter)
        {
            count = count +1;
        }
        x++;
    }
    return count;
}