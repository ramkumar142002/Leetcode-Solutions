class Solution(object):
    def canBeEqual(self, target, arr):
        """
        :type target: List[int]
        :type arr: List[int]
        :rtype: bool
        """
        if(len(target) != len(arr)):
            return false;
        
        
        target.sort()
        arr.sort()
        
        
        for i in range(0,len(target)):
            if(target[i] != arr[i]):
                return False
            i += 1
                
        return True        
        