class Solution {
public:
    int countElements(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(binary_search(arr.begin()+i+1,arr.end(),arr[i]+1))
                count++;
        }
        return count;
    }
};