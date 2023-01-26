sort lowercase and uppercase letters of string seprately

string caseSort(string str, int n)
    {
        int j=0;
        int k=0;
        string lower ="";
        string upper="";
        for(int i=0;i<n;i++){
              if(str[i] >= 97 && str[i] <= 122)
                 lower += str[i];
              else upper += str[i];
          }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        for(int i=0;i<n;i++){
              if(str[i] >= 97 && str[i] <= 122){
                     str[i] = lower[j];
                     j++;
                 }
              else {
                  str[i] = upper[k];
                  k++;
              }
          }
        return str;
    }
