//link: https://leetcode.com/problems/sort-colors/

CODE:

class Solution {
public:
    void sortColors(vector<int>& v) {
        // sort(v.begin(),v.end());
        int n = v.size();
        int z=0;
        int w=0;
        int t=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            z++;
            else if(v[i]==1)
            w++;
            else
            t++;

        }
        for(int i=0;i<z;i++)
        {
            cout<<"0";
        }
        for(int i=z+1;i<(z+w);i++)
        {
            cout<<"1";
        }
        for(int i=(z+w+1);i<n;i++)
        {
            cout<<"2";
        }
    }
};
