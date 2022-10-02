Minimum character required to make string palindromic

int minChar(string str){
        int left = 0, right = str.length()-1,res = 0;
        while(left<right){
            if(str[left]==str[right]){
                left++;
                right--;
            }else{
                res++;
                left=0;
                right = str.length()-1-res;
            }
        }
        return res;
    }
