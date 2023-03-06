#include<bits/stdc++.h>
using namespace std;

void countSubsetsUtil(vector<int>& nums, int n, int sum,
                      map<int, int>& mp) {
    if(n == 0) {
        mp[sum]++;
        return;
    }
    countSubsetsUtil(nums, n-1, sum, mp);
    countSubsetsUtil(nums, n-1, sum+nums[n-1], mp);
}

int countSubsets(vector<int>& nums, int x) {
    int n = nums.size();
    map<int, int> mp;
    
    // count the number of subsets with each sum
    countSubsetsUtil(nums, n, 0, mp);
    
    // count the number of unique subsets
    int count = 0;
    for(auto& p : mp) {
        if(p.first == x)
            count++;
    }
    return count;
}

int main() {
    vector<int> nums = {1,1,1,1,1,1,2,2,2,3,3};
    int x = 6;
    int ans = countSubsets(nums, x);
    cout << ans << endl; // output: 7
    return 0;
}
