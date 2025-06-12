class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        stack<int>s;
        int n=nums2.size();
        s.push(nums2[n-1]);
        m[nums2[n-1]]=-1;
        for(int i=nums2.size()-2;i>=0;i--)
        {
            if(!s.empty())
            {
                int ma=INT_MIN;
                cout<<s.top()<<endl;
                while(!s.empty()&&s.top()<=nums2[i])
                {
                    s.pop();
                    if(s.empty())break;
                }
                if(s.empty())m[nums2[i]]=-1;
                else
                m[nums2[i]]=max(s.top(),-11);
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
        {
            nums1[i]=m[nums1[i]];
        }
        return nums1;
    }
};
