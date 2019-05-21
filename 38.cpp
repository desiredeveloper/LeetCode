class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for(int i=1;i<n;i++){
            string curr="";
            for(int j=0;j<ans.length();j++){
                int count=1;
                char temp = ans[j];
                while(temp == ans[j+1]){
                    j++;count++;
                }
                curr += to_string(count) + temp;
            }
            ans = curr; 
        }
        return ans;
    }
};
