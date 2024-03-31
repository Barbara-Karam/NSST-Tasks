import math
# entering the coefficients
loop_key = 0
while loop_key == 0:
    # entering the quadratic coefficient
    a = float(input("enter the x^2 coefficient \n"))
    # entering the linear coefficient
    b = float(input("enter the x coefficient \n"))
    # entering the free term
    c = float(input("enter the constant \n"))
    print("so your formula is ", a, "x^2 +", b, "x +", c)
    loop_key = float(input("is that correct? \nenter 0 if you'd like to change it \n"))
# calculating the discriminant to see what type of roots are there
d = b**2-(4*a*c)

if a == 0:
    first_root = second_root = -c/b
    print(" this is not a quadratic equation, so the roots are equal and they are : \n")
elif d > 0:
    first_root = (-b + math.sqrt(d))/(2*a)
    second_root = (-b - math.sqrt(d)) / (2*a)
    print("there are two real roots and they are : \n")
elif d < 0:
    first_root = complex((-b/(2*a)), (math.sqrt(-d))/(2*a))
    second_root = complex((-b / (2*a)), -(math.sqrt(-d)) / (2*a))
    print("there are two imaginary roots and they are : \n")
elif d == 0:
    first_root = second_root = -b/(2*a)
    print("the roots are equal and they are: \n")
print("first root :", first_root, "\nsecond root:", second_root)
