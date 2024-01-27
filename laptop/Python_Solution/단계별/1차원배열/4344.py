# Over-Average

from sys import stdin, stdout
inp = stdin.readline
pr = stdout.write

class OverAverageApp:
    def __init__(self):
        self.ans = 0.0
        self.getScoreInput()
        
    def getScoreInput(self):
        s = list(map(float, inp().split(" ")))
        n, scoreList = s[0], s[1:]
        self.getAvg(n, scoreList)
    
    def getAvg(self, n, scoreList):
        avg = sum(scoreList) / n
        self.checkToPrint(n, avg, scoreList)
    
    def checkToPrint(self, n, avg, scoreList):
        you = 0
        for i in scoreList:
            if i > avg:
               you += 1
        self.ans = "%.3f" % ((float(you) / n) * 100.0)
    

if __name__ == "__main__":
    ansList = []
    for _ in range(int(inp())):
        oa = OverAverageApp()
        ansList.append(oa.ans+"%")
    pr('\n'.join(ansList))