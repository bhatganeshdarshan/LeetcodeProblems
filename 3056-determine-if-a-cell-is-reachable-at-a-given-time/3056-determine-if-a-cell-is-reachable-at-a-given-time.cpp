class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x , y ;
        x= abs(fx-sx);
        y=abs(fy-sy);
        int d = min(x,y) + abs(x-y) ;
        if(d==0 && t==1){
            return false ;
        }
        if(t>=d) return true ;
        return false ;
    }
};