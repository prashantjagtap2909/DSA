Return closest prime no of N or return false if not present

int prime(int N){
	       if(N<2){
	            return false;
	        }
	        for(int i=2;i*i<=N;i++){
	            if(N%i == 0){
	                return false;
	            }
	        }
	        return true;
	    }
		int NthTerm(int N){
	
		    if(prime(N)){
		        return 0;
		    }
		    int i = 1;
		    while(true){
		        if(prime(N-i) || prime(N+i)){
		            return i;
		        }
		        i++;
		    }
		    
		}
