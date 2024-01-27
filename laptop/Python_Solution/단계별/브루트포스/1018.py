# Chess

class Chess:
    def __init__(self, l):
        self.board=l
        self.minCnt=0
        self.check()
    
    def check(self):
        self.minCnt=min(self.startB(),self.startW())
        
        
    def startB(self):
        cnt=0
        for i in range(8):
            for j in range(8):
                rowIdx=0 if i in [0,2,4,6] else 1
                colIdx=0 if j in [0,2,4,6] else 1
                if (rowIdx==0 and colIdx==0) or (rowIdx==1 and colIdx==1):
                    if self.board[i][j] != "B":
                        cnt+=1
                if (rowIdx==1 and colIdx==0) or (rowIdx==0 and colIdx==1):
                    if self.board[i][j] != "W":
                        cnt+=1
        return cnt
    
    def startW(self):
        cnt=0
        for i in range(8):
            for j in range(8):
                rowIdx=0 if i in [0,2,4,6] else 1
                colIdx=0 if j in [0,2,4,6] else 1
                if (rowIdx==0 and colIdx==0) or (rowIdx==1 and colIdx==1):
                    if self.board[i][j] != "W":
                        cnt+=1
                if (rowIdx==1 and colIdx==0) or (rowIdx==0 and colIdx==1):
                    if self.board[i][j] != "B":
                        cnt+=1
        return cnt


if __name__ == "__main__":
    n,m=map(int,input().split())
    paintCount=[]
    b=[[*input()] for _ in range(n)]
    for i in range(n-7):
        for j in range(m-7):
            checkBoard=[r[(0+j):(8+j)]for r in b[(0+i):(8+i)]]
            paintCount.append(Chess(checkBoard).minCnt)
    print(min(paintCount))