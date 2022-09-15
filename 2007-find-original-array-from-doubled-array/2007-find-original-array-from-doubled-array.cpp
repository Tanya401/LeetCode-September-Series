class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int> m;
        vector<int> res;
        int n = changed.size();
        for(int i=0;i<n;i++){
            m[changed[i]]++;
        }
        sort(changed.begin(),changed.end());
       for(auto ele : changed){
           if(m.find(2*ele)!=m.end() && m[ele]!=0 && m[2*ele]!=0){
              m[ele]--;
               m[2*ele]--;
               res.push_back(ele);
           }
          }
        for(auto x:m){
            if(x.second!=0)
                return {};
        }
        return res;
    }
};