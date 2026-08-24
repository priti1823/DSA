class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]!="C"&& operations[i]!="D"&& operations[i]!="+")
            {   int b= stoi(operations[i]);
                  ans.push_back(b);
            }
            else if(operations[i]=="C")
            {
                ans.erase(ans.end());
            }
            else if(operations[i]=="D")
            {
                ans.push_back(2*ans.back());
            }
            else if(operations[i]=="+")
            {
               ans.push_back(ans.back()+ans[ans.size()-2]);
            }
        }
        int sum=0;
        for(int i=0; i<ans.size();i++)
        {
            sum=ans[i]+sum;
        }
        return sum;
    }
};