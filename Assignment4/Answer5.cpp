https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count =0;
    for(int i = 0 ; i< ar.size();i++){
        for (int j =i; j<ar.size(); j++) {
            if(i<j){
                if((ar[i]+ar[j])%k==0){
                    count = count+1;
                }
            }
        
        
        }
    }
    return count;

}