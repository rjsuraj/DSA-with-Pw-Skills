
#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        if(n==1){
            ans[0] = (nums[0]*nums[0]);
            return ans;
        }
        int start = 0 , end = n-1,index = n-1;
        while(start<=end){
            if(abs(nums[start]) > abs(nums[end])){
                ans[index--] = nums[start] * nums[start];
                start++;
            }
            else{
                ans[index--] = nums[end] * nums[end];
                end--;
            }

        }
        return ans;
}

int main()
{
    vector<int> arr = {-4};
    vector<int> ans = sortedSquares(arr);
    for(int ele : ans)
        cout<<ele<<" ";
}

