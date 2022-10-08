Count the substring equal to k-1
  
  int countOfSubstrings(string S, int K) {
        
        int i = 0,j = 0,count = 0;
        int n = S.length();
        map<char , int>mp;
        while(j<n){
            mp[S[j]]++;
            if(j-i+1 < K){
                j++;
            }
            else if(j-i+1 == K){
                if(mp.size() == K-1){
                    count++;
                }
                mp[S[i]]--;
                if(mp[S[i]]==0)
                    mp.erase(S[i]);
                    
                i++;
                j++;
            }
        }
        return count;
    }
