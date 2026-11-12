
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    int start[20], finish[20];

    cout << "Enter starting times:\n";
    for(int i = 0; i < n; i++)
        cin >> start[i];

    cout << "Enter finishing times:\n";
    for(int i = 0; i < n; i++)
        cin >> finish[i];

    // Sort activities based on finishing time
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(finish[i] > finish[j])
            {
                swap(finish[i], finish[j]);
                swap(start[i], start[j]);
            }
        }
    }

    cout << "Selected activities: ";

    int lastFinish = -1;

    for(int i = 0; i < n; i++)
    {
        if(start[i] >= lastFinish)
        {
            cout << i + 1 << " ";
            lastFinish = finish[i];
        }
    }

    return 0;
}
