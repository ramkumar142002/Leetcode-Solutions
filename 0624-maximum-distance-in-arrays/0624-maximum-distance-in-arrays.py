class Solution(object):
    def maxDistance(self, arrays):
        """
        :type arrays: List[List[int]]
        :rtype: int
        """
        mini = arrays[0][0]
        maxi = arrays[0][-1]
        max_ans = 0
        
        for i in range(1,len(arrays)):
            arr = arrays[i]
            max_ans = max(max_ans,abs(mini - arr[-1]),abs(maxi - arr[0]))
            maxi = max(maxi,arr[-1])
            mini = min(mini,arr[0])
            
        return max_ans