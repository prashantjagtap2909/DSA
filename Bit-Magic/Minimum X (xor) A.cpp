Given two integers A and B, the task is to find an integer X such that (X XOR A) is minimum possible and the count of set bit in X is equal to the count of set bits in B.

int minVal(int a, int b) {
      
        int sum=a;
        int count_a=0 , count_b=0;
        for(int i=0;i<32;i++){
            if((1<<i)&a){
                count_a++;
            }if((1<<i)&b)  {
                count_b++;
            }
        }if(count_a==count_b){
            return a;
        }else if(count_a>count_b){
            int sum=a;
            for(int i=0;i<32;i++){
                if((1<<i)&a){
                    sum=sum^(1<<i);
                    count_a--;
                    if(count_a==count_b) {
                        return sum;
                    }
                }
            }
        }
        else{
            int sum=a;
            for(int i=0;i<32;i++){
                if(((1<<i)&a)==0){
                    sum=sum|(1<<i);
                    count_a++;
                    if(count_a==count_b){
                        return sum;
                    }
                }
            }
        }
    }
