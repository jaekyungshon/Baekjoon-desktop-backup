# 곱셈

a, b = input(), input()
print('\n'.join(map(str, [eval(a+"*"+i) for i in b][::-1] + [eval(a+"*"+b)])))
