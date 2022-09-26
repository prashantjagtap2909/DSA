Swap bit

int swapBitGame(long long N){
        
        int count = 0;
        while(N != 0){
            N = N&(N-1);
            count++;
        }
        return 2-(count%2);
    }
