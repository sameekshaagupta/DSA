//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        int a=0;
        int b=1;
        for(int i=2; i<=N; i++){
            for(int j=i; j>0; j--){
                if(i%j==0){
                    a=a+j;
                }
            }
            b=b+a;
            a=0;
        }
        return b;
    }