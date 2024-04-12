class Solution {
public:
    int maxProduct(vector<int>& arr) {
        if(arr.size()==1)// if the length of the array is 1 return its first element
        {
            return arr[0];
        }
        int temp1=0;
        int temp2=0;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
          //here we considering min because product of two negative nos is positive
          int temp=max(max(temp1*arr[i],temp2*arr[i]),arr[i]);
          //here we considering max because product of one positive and one nos negative is negative
            temp2=min(min(temp1*arr[i],temp2*arr[i]),arr[i]);
            temp1=temp;
            //calculate the maximum of res and max
            ans=max(ans,temp1);
        }
        return ans;
    }
};
