//
// Created by Jest Craster on 11/27/23.
//
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> size_set, result_set;
        size_set.resize(nums.size());
        int len_max=0;
        for(int i=0;i<static_cast<int>(nums.size());++i){
            for(int j=0;j<i;++j){
                if(!(nums[i]%nums[j]) && size_set[i] < size_set[j] + 1){
                    size_set[i] = size_set[j]+1;
                    if(len_max<size_set[i]){
                        len_max=size_set[i];
                    }
                }
            }
        }
        int current_value = -1;
        result_set.reserve(len_max);

        for (int i=static_cast<int>(nums.size())-1;i>=0;--i){
            if(size_set[i] == len_max&& (current_value == -1 || !(current_value%nums[i]))){
                result_set.push_back(nums[i]);
                --len_max;
                current_value = nums[i];
            }
        }

        return result_set;
    }
};

int main(){
    Solution solution;
    std::vector inputVector{4,8,10,240};
    auto result = solution.largestDivisibleSubset(inputVector);
    for(auto i : result){
        std::cout<<i<<' ';
    }
//    std::cout<<<<'\n';
//    std::cout<<"Hello world!\n";
}