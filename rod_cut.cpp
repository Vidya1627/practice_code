#include <iostream>
using namespace std;

int P[10] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 10};
int ans[11] = {0};

int f(int n) {
    if (n==0) {
        return 0;
    }
    if (ans[n]!=0) {
        return ans[n];
    }
    int max = P[n-1];
    for (int i=1;i<n;i++) {
        int val = P[i-1] + f(n-i);
        if (val > max) {
            max = val;
        }
    }

    ans[n] = max;
    return max;
}

void cut(int n){
    if(n == 0){
        return;
    }
    int max = -1, first_cut = 0;
    for(int i = 1; i <= n; i++){
        if(P[i-1]+ans[n-i] > max){
            max = P[i-1]+ans[n-i];
            first_cut = i;
        }    
    }
    cout<<first_cut<<" ";
    cut(n - first_cut);
}

int main() {
	int n;
	cin>>n;
	cout<<"Total max value: "<<f(n)<<endl;
	cut(n);
	return 0;
}
