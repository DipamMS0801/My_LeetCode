class Solution {
public:
    int product(int a){
        int prod=1;
        int rem=0;
        while(a>0){
            rem=a%10;
            prod=prod*rem;
            a=a/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(true){
            int ans=product(n);
            if(ans%t==0){
                return n;
            }
        
            n++;
        }
    }
};