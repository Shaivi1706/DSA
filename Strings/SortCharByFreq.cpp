//method 1 using vector and map
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
        }

        s="";

        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](pair<int,int> &a, pair<int,int> &b){
            return a.second > b.second;
        });

        for(auto &p:v) {
            for(int i=0; i<p.second; i++) {
                s+=p.first;
            }
        }

        return s;
    }
};

//method 2 using map and maxheap
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
        }

        s="";

        priority_queue<pair<int, char>> pq;

        for(auto i:mp) {
            pq.push({i.second, i.first});
        }

        while(pq.size()) {
            for(int i=0; i<pq.top().first; i++) {
                s+=pq.top().second;
            }
            pq.pop();
        }

        return s;
    }
};
