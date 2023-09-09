#include<bits/stdc++.h>
using namespace std;

bool ContainsDuplicates(vector<int> arr){

  unordered_set<int> s(arr.begin(), arr.end());

  return s.size() != arr.size();

}


int main(){
  
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  
    if (ContainsDuplicates(arr)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
  
    arr.push_back(1);
  
    if (ContainsDuplicates(arr)) cout<<"YES";
    else cout<<"NO";
  
    return 0;
}