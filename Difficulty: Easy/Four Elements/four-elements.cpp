// User function Template for C++

bool find4Numbers(int arr[], int n, int X) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    
    for(int j = 0; j < n-3; j++){ 
        int target = X - arr[j];
        for(int i = j+1; i < n-2; i++){
            int t = target - arr[i];
            int s = i+1;
            int e = n-1;
            while(s < e){
                int reqt = arr[s] + arr[e];
                if(reqt == t) return true;
                else if(reqt > t) e--;
                else s++;
            }
        }
    }
    return false;
}