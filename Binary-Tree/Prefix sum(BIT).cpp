Prefix sum in Binary index tree

int getSum(int BITree[], int index) 
{
	int sum = 0; 

	 
	index = index + 1; 

	 
	while (index>0) 
	{ 
		
		sum += BITree[index]; 

		
		index -= index & (-index); 
	} 
	return sum; 
} 


Time complexity - O(n)
