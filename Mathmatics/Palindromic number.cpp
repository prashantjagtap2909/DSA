To check a given number is palindromic or not

bool isPalindromic(int n ){
    int rev = 0;
    int temp = n;
    while(temp!=0){
        int rem = temp%10;
        rev = rev*10+rem;
        temp = temp/10;
    }
    return (rev==n);
}


Time complexity - O(n)
