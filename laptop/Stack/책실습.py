from tkinter import *

# 사용자 정의함수부
def bmi_fun():
    height = float(e_1.get())
    weight = float(e_2.get())

    bmi = (weight // height ** 2)

    e_3.insert(0, f"{bmi:.2f}")

def reset():
    e_1.delete(0, END)
    e_2.delete(0, END)
    e_3.delete(0, END)

def buildGUI():
    inp = Frame(window)
    btn = Frame(window)

    inp.pack(padx=0)
    btn.pack(pady=10)

    label1 = Label(inp, text='키')
    label2 = Label(inp, text='몸무게')
    label3 = Label(inp, text='결과')

    ex1 = Label(inp, text='키는 미터(m) 단위로 입력하세요')
    ex2 = Label(inp, text='몸무게는 킬로그램(kg) 단위로 입력하세요')

    global e_1, e_2, e_3
    e_1 = Entry(inp)
    e_2 = Entry(inp)
    e_3 = Entry(inp, bg='yellow', fg='black')

    btn_1 = Button(btn, text='확인', width=10, height=2, command=bmi_fun)
    btn_2 = Button(btn, text='초기화', width=10, height=2, command=reset)
    btn_3 = Button(btn, text='종료', width=10, height=2, command=quit)

    label1.grid(row=0, column=0)
    label2.grid(row=1, column=0)
    label3.grid(row=2, column=0)

    ex1.grid(row=0, column=2)
    ex2.grid(row=1, column=2)

    e_1.grid(row=0, column=1)
    e_2.grid(row=1, column=1)
    e_3.grid(row=2, column=1)

    btn_1.pack(side=LEFT)
    btn_2.pack(side=LEFT)
    btn_3.pack(side=LEFT)

# 주프로그램부
window = Tk()
window.title('BMI 계산기')
window.geometry('400x200')

# 화면 구성
buildGUI()

# 실행
window.mainloop()