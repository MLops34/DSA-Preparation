// // minimum-recolors-to-get-k-consecutive-black-blocks

// OPTIMAL APPROACH\\

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int i=0;
            int j=0;
            int n=blocks.size(),res=k,cntW=0;
    
            while(j<n){
                if(blocks[j]=='W') cntW++;
                if(j-i+1==k){
                    res=min(res,cntW);
                    if(blocks[i]=='W'){
                        cntW--;
                    }
                    i++;
                }
                j++;
            }
            return res;
        }
    };