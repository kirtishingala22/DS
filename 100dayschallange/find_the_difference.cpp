class Solution {
public:
    char findTheDifference(string s, string t) {
        char arr[26]={0};
        for(char c:s){
          int i=c-'a';
          arr[i]++;
        }
        for(char c:t){
          int i=c-'a';
          arr[i]++;
        }
        for(int i=0;i<26;i++){
          if(arr[i]%2!=0){
            return 'a'+i;
          }
        }
        return ' '; 
    }
};