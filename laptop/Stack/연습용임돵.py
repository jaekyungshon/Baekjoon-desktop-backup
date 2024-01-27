import turtle
from random import randrange

# 사용자 정의 함수부
def move(x, y):
    t.up()
    t.goto(x, y)
    t.down()

def drawNightSky():
    turtle.bgcolor('black')

def drawStar(x, y, r):
    move(x, y)
    t.setheading(180)
    t.color('white')
    t.begin_fill()
    for _ in range(5):
        t.fd(r)
        t.left(144)
    t.end_fill()

def drawMoon(x, y, radius):
    move(x, y)
    t.setheading(0)
    t.color('yellow')
    t.begin_fill()
    t.circle(radius)
    t.end_fill()

# 주 프로그램부
t = turtle.Turtle()
turtle.setup(1024, 720)
t.shape("classic")
t.speed(0)

# 밤하늘 그리기
drawNightSky()

# 별그리기
for _ in range(3):
    x = randrange(-500, 500)
    y = randrange(-360, 360)
    r = randrange(50, 80)
    drawStar(x, y, r)
#drawStar(-300, 200, 50) # 셋헤딩 확인용

# 달그리기
drawMoon(150, 100, 100)

t.hideturtle()
turtle.exitonclick() # 화면안꺼지게 설정(IDLE에서는 상관없음)