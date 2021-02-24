#include <vector>
#include <deque>
#include <iostream>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    if (nums.size() == 0 || k == 0)
        return vector<int>();
    deque<int> window;
    int n = nums.size();
    // vector<int> res(n - k + 1);
    vector<int> res;
    for (int i = 0; i < k; i++)
    {
        while (!window.empty() && nums[i] > window.back())
        {
            window.pop_back();
        }
        window.push_back(nums[i]);
    }
    // res[0] = window.front();
    res.push_back(window.front());
    for (int i = k; i < n; i++)
    {
        if (window.front() == nums[i - k])
        {
            window.pop_front(); //窗口左边将被删除的元素与队首相同，队列里的也要删除
        }
        while (!window.empty() && nums[i] > window.back())//bug
        {
            window.pop_back();
            cout<<window.back();
        }
        // res[i - k + 1] = window.front();
        res.push_back(window.front());
    }
    return res;
}
vector<int> maxSlidingWindow_2(vector<int> &nums, int k)
{
    int n = nums.size();
    if (k <= 0 || n == 0)
        return vector<int>();
    vector<int> res(n - k + 1);
    deque<int> window;
    for (int i = 0, j = i - k + 1; i < n; i++, j++)
    {
        if (j > 0 && !window.empty() && window.front() == nums[j - 1])
        {
            window.pop_front();
        }
        while (!window.empty() && window.back() < nums[i])
        {
            window.pop_back();
        }
        window.push_back(nums[i]);
        if (j >= 0)
            res[j] = window.front();
    }
    return res;
}
vector<int> maxSlidingWindow_3(vector<int> &nums, int k){
        int n = nums.size();
    if (k <= 0 || n == 0)
        return vector<int>();
    vector<int> res(n - k + 1);
    deque<int> window;
    for(int i = 0;i < k;i++){
        while (!window.empty() && nums[i] > window.back())
        {
            window.pop_back();
        }
        window.push_back(nums[i]);
    }
    for (int i = k; i < n; i++){
        if (window.front() == nums[i - k])
        {
            window.pop_front(); //窗口左边将被删除的元素与队首相同，队列里的也要删除
        }

    }
}


int main()
{
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> res;
    res = maxSlidingWindow_2(nums, k);
    system("pause");
    return 0;
}