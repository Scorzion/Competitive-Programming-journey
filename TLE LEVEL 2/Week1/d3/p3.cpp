long long e = 0;
        long long o = 0;

        vector<long long> esub;
        for(auto it:nums){
            if(it%2==0){
                e++;
            }
            else{
                esub.push_back(e);
                e=0;
                o++;
            }
        }

        if(e!=0) esub.push_back(e);
        if(esub.size()==o) esub.push_back(0);

        long long ans = 0;
        if(!o) return ans;

        long long n = (o-k*1LL+1);
        for(int i=0; i<n; i++){
            ans += (esub[i]+1)*(esub[i+k]+1);
        }
        
        return ans;