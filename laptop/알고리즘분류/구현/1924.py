import calendar
a,b=map(int,input().split())
print(["MON","TUE","WED","THU","FRI","SAT","SUN"][calendar.weekday(2007,a,b)])