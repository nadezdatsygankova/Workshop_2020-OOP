#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>


class Solution {
public:
   std::vector<int> twoSum(std::vector<int>& nums, int target) {
      std::vector <int> res;
      int i;
     
      for ( i=0;i< nums.size()-1;i++)
      {
         for (int j = i+1; j<nums.size(); j++)
         {
            if ((nums[i] + nums[j]) == target)
            {
               res.push_back(i);
               res.push_back(j);
               return res;
            }

         }
        
      }
      return res;
   }
};


template <typename T>
void print(const std::vector<T>& vec) {
   if (vec.empty()) return;
   std::cout << "[";
   auto it = begin(vec);
   while (it != end(vec) && std::cout << *it++, it != end(vec)) { std::cout << ","; }
  
   std::cout << "]";
   std::cout << std::endl;
}


int main(){
    Solution n;
    std::vector<int> nums = { 2,7,11,15 };
    int target = 9;
    std::vector<int> res;
    res = n.twoSum(nums,target);
    print(res);
}