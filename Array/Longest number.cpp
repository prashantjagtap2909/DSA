Longest number form from array


static bool myComp(string &s1, string &s2){
	    return s1 + s2 >  s2 + s1;
	}
	
	string printLargest(vector<string> &arr) {
	   
	   sort(arr.begin(), arr.end(), myComp);
	    string res= "";
	    for(auto &e : arr){
	        res += e;
	    }
	    return res;
	}
