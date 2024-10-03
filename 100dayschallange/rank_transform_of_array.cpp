class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>sorted = arr;
        unordered_map<int, int> umap;
        int c=1;
        sort(sorted.begin(),sorted.end());
        for(int n : sorted){
            if(umap.find(n)==umap.end()){
            umap[n]=c;
            c++;}
        }
        for(int i=0;i<arr.size();i++){
               arr[i]=umap[arr[i]];
        }
        return arr;            
    }
};