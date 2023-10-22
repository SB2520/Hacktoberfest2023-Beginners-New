#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int z = 1e5;
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(abs(z-target)>abs(sum-target)){
                z=sum;
            }
            if(sum>target){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return z;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    cout<<"closest sum="<<threeSumClosest(v,target)<<endl;
}
