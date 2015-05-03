/*
 *  One algorithm question from 
 *  http://www.lintcode.com/en/problem/2-sum
 */


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target);

vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> answer;
    vector<int>::iterator it;
    vector<int> copy;
    int arr[nums.size()];
    int i=0;

    for(it = nums.begin();it != nums.end();it++){
        copy.push_back(*it);
    }

    sort(copy.begin(),copy.end());

    for(it = copy.begin();it != copy.end();it++){
        arr[i] = *it;
        i++;
    }

    int * front = arr, * end = arr+i-1;

    while(front != end) {
        if(*front + *end  ==target){
            break;
        }

        if(*front + *end > target){
            end--;
        }else if(*front + *end < target){
            front++;
        }
    }

    int a=0, b=0;
    for(int index=0;index<nums.size();index++){
        if(nums[index] == *front){
            a = index;
        }
        if(nums[index] == *end) {
            b = index;
        }
    }

    if(a>b){
        int c =a;
        a=b;
        b=c;
    }

    answer.push_back(a+1);
    answer.push_back(b+1);

    return answer;
}

int main() {
    vector<int> array= {2,7,11,15};
    vector<int> result = twoSum(array, 9);
    cout <<result[0]<<result[1]<<endl;
    return 0;
}
