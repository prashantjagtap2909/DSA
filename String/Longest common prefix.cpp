Longest common prefix in an array

string longestCommonPrefix (string arr[], int N)
    {
        string s=arr[0];
        for(int i=1;i<N;i++){ 
            int j=0;
            while(j<s.length() && j<arr[i].size()){
                if(s[j]!=arr[i][j]) {
                    s = s.substr(0,j);
                    break;
                }
                j++;   
                if(j==arr[i].size())
                {
                    s=arr[i];
                }
            }
        }
        if(s=="")
        {
            return "-1";
        }
        return s;
    }
