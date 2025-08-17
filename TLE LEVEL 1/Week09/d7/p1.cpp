class Solution {
public:

    bool cheker(int mid, vector<int> &piles, int h){
        for(int i=0; i<piles.size(); i++){
            hours += (ceil(piles[i]*1.0/mid));
        }
        return hours<=h;  
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int h = INT_MIN;
        for(int i=0; i<piles.size(); i++){
            h = max(h, piles[i]);
        }

        int ans;
        while(l<=r){
            int mid = (l+h)/2;
            if(checker(mid,piles,h)){
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        return ans;
    }
};