class Solution {
public:
    int fib(int n) {
       
        vector<int>a(n+1);
        a[0]=0;
        if(n>=1){
            a[1]=1;
        }
        
            for(int i=2; i<=n;i++){
                //ans=prev+last;
                a[i]=a[i-2]+a[i-1];
            }

        
        return a[n];

    }
};