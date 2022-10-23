  static bool comp(pair<int,string>a, pair<int,string>b)
{
    if(a.first < b.first)
        return false;
    
    if(a.first == b.first and a.second > b.second)
        return false;
    
    return true;
}
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;

   for(int i=0;i<words.size();i++)
       mp[words[i]]++;
 
    vector<pair<int,string>> vp;
    
    for(auto x : mp)
        vp.push_back({x.second,x.first});
    
    sort(vp.begin(),vp.end(),comp);
    
    vector<string> res;
    
    for(int i=0;i<k;i++)
    {
      res.push_back(vp[i].second);
    }
    return res;
    }
