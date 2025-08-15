#include <iostream>
#include <vector>
using namespace std;


// 2 pass solution- by me
void rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    int j=0,k=1;
    vector<int> p={};
    vector<int> m={};
    vector<int> vec={};

    for(int i = 0; i< n; i++){
        if(nums[i]>0){
            int a = nums[i];
            p.push_back(a);
        }
        else{
            int b = nums[i];
            m.push_back(b);
        }    
    }
    
    for(int i = 0; i<n; i++){
        if( i%2==0 || i == 0){
            int c = p[i-j];
            vec.push_back(c);
            j++;
        }
        if( i%2!=0){
            int d = m[i-k];
            vec.push_back(d);
            k++;
        }
    }



    //return vec;
    for(auto i : p){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for(auto i : m){
        cout<<m[i]<<" ";
    }
    cout<<endl;
    for(auto i : vec){
        cout<<vec[i]<<" ";
    }
}


// SINGLE pASS 
void rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    int positive=0,negative=1;
    
    vector<int> vec(n,0);

    for(int i = 0; i< n; i++){
        if(nums[i]>0){
            vec[positive] = nums[i];
            positive = positive+2; /* p+2 and p = p+2 are not same*/  
        }
        else{
            vec[negative] = nums[i];
            negative = negative + 2;
        }    
    }
    



    return vec;
   
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    rearrangeArray(nums);
    cout<<"kiss me"<<endl;
    
    
    return 0;
}
