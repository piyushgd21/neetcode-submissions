class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> postime(position.size());
        for(int i = 0; i < position.size(); i++){
            postime[i] = {position[i], (double)(target-position[i])/speed[i]};
        }
        sort(postime.rbegin(), postime.rend());
        int fleets = 1;
        double prevtime = postime[0].second;
        for(int i = 1; i < position.size(); i++){
            if(postime[i].second > prevtime){
                fleets++;
                prevtime = postime[i].second;
            }
        }
        return fleets;        
    }
};
