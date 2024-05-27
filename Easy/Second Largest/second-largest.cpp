//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n){
	if (n < 2) return -1;
    int largest = INT_MIN, second_largest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    if(second_largest == INT_MIN) return -1;
    return second_largest;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends