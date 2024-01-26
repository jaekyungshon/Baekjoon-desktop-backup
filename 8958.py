# One-Demension Array
# OX Quiz
"""Ex: Number"""
from sys import stdin, stdout
inp = stdin.readline

class OXQuiz:
    def __init__(self):
        self.tmp = 0
        self.score = 0
        self.s = ""
        self.Input()
    
    def Input(self):
        for _ in range(int(inp())):
            self.s = list(inp())
            self.Check()
            self.tmp = 0
            self.score = 0
            
    def Check(self):
        for i in range(len(self.s)):
            if i == 0:
                if self.s[i] == "O":
                    self.tmp += 1
                    self.score += self.tmp
            elif self.s[i] == "O":
                self.tmp += 1
                self.score += self.tmp
            elif self.s[i] != "O":
                self.tmp = 0
        print(self.score)
                
if __name__ == "__main__":
    ox = OXQuiz()
    