#找最大质因数
largest=2
a=600851475143
# for i in range(1,a):
#     if a%i == 0 and i>j:
#         j=i
# print (j)
#想想别的办法，

# for i in range(1,a):
#     b=a-i
#     if a % b == 0:
#         break    
# print(b)
# 最大因数不一定是最大质因数

#试除法
while largest*largest < a:
    if a%largest ==0:
        a//=largest
    else:
        largest += 1
if(a>1):
    print(a)

