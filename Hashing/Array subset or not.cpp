To check array is subset of another array or not
  
  string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int ,int>mp;
    for(int i = 0 ; i <n;i++){
        mp [a1[i]]++;
    }
    for(int j = 0;j<m;j++){
        if(mp.find(a2[j])==mp.end()){
            return "No";
        }else{
            mp[a2[j]]--;
            if(mp[a2[j]]==0){
                mp.erase(a2[j]);
            }
        }
    }
    return "Yes";
}
