//function to find out the maximum subarray sum
//Kadane's algorithm

int maxSubArray(vector<int>& a){
         int n=a.size();
         int max=INT_MIN;
         int sum=0;
         for(int i=0;i<n;i++){
             sum+=a[i];
             if(sum>max){
                 max=sum;
             }
             if(sum<0){
                 sum=0;
             }
         }
         return max;
     }
