#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int largestRectangle(vector<int>& heights)
{
    stack<int> st;
    int maxArea = 0;

    int n = heights.size();

    for (int i = 0; i <= n; i++)
    {
        int currentHeight;

        if (i == n)
            currentHeight = 0;
        else
            currentHeight = heights[i];

        while (!st.empty() &&
               currentHeight < heights[st.top()])
        {
            int height = heights[st.top()];
            st.pop();

            int width;

            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;

            int area = height * width;

            if (area > maxArea)
                maxArea = area;
        }

        st.push(i);
    }

    return maxArea;
}

int main()
{
    int n;

    cout << "Enter number of bars: ";
    cin >> n;

    vector<int> heights(n);

    cout << "Enter heights: ";

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int result = largestRectangle(heights);

    cout << "Largest Rectangle Area = " << result << endl;

    return 0;
}