class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
   static bool comp(pair<int,int>a,pair<int,int>b)
    {
        if(a.first!=b.first)
        {
            if(a.first>b.first)
            return true;
            return false;
        }
        else
        {
            if(a.second<b.second)
            return true;
            return false;
        }
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<pair<int,int>>v;
        map<int,int>::iterator it=mp.begin();
        while(it!=mp.end())
        {
            v.push_back(make_pair(it->second,it->first));
            it++;
        }
        sort(v.begin(),v.end(),comp);
        n=v.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            while(v[i].first!=0)
            {
                ans.push_back(v[i].second);
                v[i].first--;
            }
        }
        return ans;

    }
};
