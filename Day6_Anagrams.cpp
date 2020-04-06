class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(auto i:strs){
            string s=i;
            sort(i.begin(),i.end());
            mp[i].push_back(s);
        }
        vector<vector<string>> final;
        for(auto i:mp){
            vector<string> temp;
            for(auto j:i.second){
                temp.push_back(j);
            }
            final.push_back(temp);
        }
       // sort(final.begin(),final.end());
        return final;
    }
};