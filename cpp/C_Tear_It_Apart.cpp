

class Solution:
    def punishment Number(self, n: int) -> int:
        res = 0
        for i in range(1, n+1):
            if self.checkNumber(i):
            res += i * i
        return res
        
    def checkNumber(self, i: int) -> bool:
        square = i * i
        string= str(square)
        return self.dfs(string, e, i)

    def dfs(self, string: str, index: int, target: int) -> bool:
    if target == 0 and index == len(string):
        return True
    if target or index == len(string):
        return False
    for i in range (index + 1, len(string) + 1):
        num= int(string[index:i])
        if self.dfs(string, i, target - num):
            return True
        return False