#include <iostream>
#include <algorithm>
using namespace  std;

class solution{
    public:
    int Last(int n){
        if(n==1) return 1;
        else{
            return (2*(n/2+1-Last(n/2)));
        }
    }
};

int main(){
    solution sol;
    int ans=sol.Last(11);
    cout << " Answer is-->>" << ans;
    return 0;
}