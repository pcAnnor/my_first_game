#找出所有不超过 4,000,000 的斐波那契数中，偶数项的总和。

total =0
a=1
b=2
while a <= 4000000:
    if a % 2 ==0:
        total += a
    a, b = b, a + b
print(total)

  