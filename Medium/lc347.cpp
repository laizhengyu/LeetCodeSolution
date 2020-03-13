class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> m;
        //heap 此处用大根堆存频率，以频率为基准建堆，输出时输出原来的数
       priority_queue<pair<int,int>> queue;
       vector<int> res;
        for (auto a:nums) ++m[a];
        //it.second is value , push into the big heap to sort them
        for (auto it:m) queue.push({it.second,it.first});
        for (int i=0;i<k;i++)
        {
            res.push_back(queue.top().second);
            //in heap, first is  freq ,second is orignal number
            cout<<queue.top().first<<"  "<<queue.top().second;
            queue.pop();
        }
        return res;
    }
};
