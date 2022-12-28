#include<bits/stdc++.h>
using namespace std;

void inputArray(vector<int> &arr,int size){
    for(int i=0; i<size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
}


int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    inputArray(nums,n);
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0; i<nums.size()-2; i++){
        
            int target = 0 - nums[i];

            int start = i+1 , end = nums.size()-1;
            while(start<end){

                if(nums[start] + nums[end] == target){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);

                    // storing the answers
                    ans.push_back(temp);

                    while(nums[start] == nums[start+1] && start<end)
                        start++;
                    while(nums[end] == nums[end-1] && start<end)
                        end--;

                    if(start==end)
                        break;
                    start++;
                    end--;

                }
                else if(nums[start] + nums[end] < target)
                    start++;
                else
                    end--;
            }

            while(nums[i] == nums[i+1] && i<nums.size()-2)
                i++;
    }

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
