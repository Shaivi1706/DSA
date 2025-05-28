//removing duplicates from the array
vector<int> removeDup(vector<int>& arr) {
        int k=1;
        for(int i=1; i<arr.size(); i++) {
            if(arr[i]!=arr[i-1]) {
                arr[k]=arr[i];
                k++;
            }
        }
        arr.resize(k);
        return arr;
    }

//merging the two arrays
vector<int> findUnion(vector<int> &nums1, vector<int> &nums2) {
        // Your code here
        vector<int> finalAns;
        nums1=removeDup(nums1);
        nums2=removeDup(nums2);
        int i=0;
        int j=0;

        while(i<nums1.size() && j<nums2.size()) {
            if(nums1[i]==nums2[j]) {
                finalAns.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) {
                finalAns.push_back(nums1[i]);
                i++;
            }
            else {
                finalAns.push_back(nums2[j]);
                j++;
            }
        }

        while(i<nums1.size()) {
            finalAns.push_back(nums1[i]);
            i++;
        }

        while(j<nums2.size()) {
            finalAns.push_back(nums2[j]);
            j++;
        }

        return finalAns;
        // return vector with correct order of elements
    }
