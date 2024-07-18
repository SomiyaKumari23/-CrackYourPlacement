class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         k=cardPoints.size()-k;
        int sum=0,Sum=0,mini=INT_MAX;
       for(int i=0;i<k;i++){
                sum=sum+cardPoints[i];
                Sum=Sum+cardPoints[i];
       }
    mini=sum;
       int j=0;
       for(int i=k;i<cardPoints.size();i++){
        sum=sum+cardPoints[i];
        sum=sum-cardPoints[j];
        j++;
        mini=min(mini,sum);
         Sum=Sum+cardPoints[i];
        }
        cout<<mini;
    return Sum-mini;
    }
};