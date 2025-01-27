class Solution:
    def getSecondLargest(self, arr):
        n = len(arr)
        if n < 2:
            return -1
        large = float('-inf')
        s_large = float('-inf')
        
        for num in arr:
            if num > large:
                s_large = large
                large = num
            elif num > s_large and num != large:
                s_large = num
        
        return s_large if s_large != float('-inf') else -1


#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.getSecondLargest(arr)
        print(ans)
        print("~")
# } Driver Code Ends