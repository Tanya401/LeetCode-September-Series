class Solution {
public:
    // int min(int a,int b){
    //     if(a<b)
    //         return a;
    //     else
    //         return b;
    // }
    int trap(vector<int>& height) {
// number ->left max ->right max-> min of left and right
      //total in sum..
        int n = height.size();
        int left[n],right[n];
        int sum =0;
       int ma =  left[0] = height[0];
       int mi = right[n-1] = height[n-1];
        for(int i=1;i<n;i++){
            if(height[i] > ma) ma=height[i];
         left[i] = ma;
        }
        for(int i=n-2;i>=0;i--){
            if(height[i] > mi) mi=height[i];
            right[i] = mi;
        }
    for(int i=0;i<n;i++){
        sum += min(left[i],right[i]) - height[i];
    }
        return sum;
    }

};