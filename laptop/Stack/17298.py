# 단위변환기
from tkinter import *

# pack 방식
def c2f():
    c = int(e_c.get())
    f = (c - 32) * 5 / 9
    e_f.insert(0, f"{f:.2f}")

def f2c():
    f = float(e_f.get())
    c = f * 9 / 5 + 32
    e_c.insert(0, f"{c:.2f}")

def reset():
    e_c.delete(0, END)
    e_f.delete(0, END)

def buildGUI():
    label1 = Label(window, text='화씨')
    label2 = Label(window, text='섭씨')

    global e_c, e_f
    e_c = Entry(window, width=10, bg='light blue')
    e_f = Entry(window, width=10, bg='light blue')

    btn_c2f = Button(window, text='화씨 -> 섭씨', command=c2f)
    btn_f2c = Button(window, text='섭씨 -> 화씨', command=f2c)
    btn_reset = Button(window, text='초기화', command=reset)
    btn_exit = Button(window, text='종료', command=quit)

    label1.pack()
    e_c.pack()
    label2.pack()
    e_f.pack()

    btn_c2f.pack()
    btn_f2c.pack()
    btn_reset.pack()
    btn_exit.pack()

# 주 프로그램부
window = Tk()
window.geometry('200x250')
window.resizable(width=True, height=True)

# 화면 구성 및 기능
buildGUI()

# 실행
window.mainloop()