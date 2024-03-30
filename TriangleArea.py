import math

# using snake-case
print("what do you know about the triangle to calculate it's area? ")
print("""
         1- the height and the base
         2- the three sides
         3- two sides and the angle between them""")
opt_num = 9  # option number initialized with random value that suffices the expression

while opt_num < 1 or opt_num > 4:   # making sure that no wrong option numbers chosen
    opt_num = int(input('enter the number: '))
    if opt_num < 1 or opt_num > 4:
        print("please choose the number of the option listed above")
# option number 1 ***************************
if opt_num == 1:
    height = abs(float(input('enter the height: ')))
    base = abs(float(input('enter the base: ')))
    area = 0.5 * height * base
    print("the area of the triangle =", area)
# option number 2 ***************************
elif opt_num == 2:
    while 1:
        first_side = abs(float(input('enter the first side: ')))
        second_side = abs(float(input('enter the second side: ')))
        third_side = abs(float(input('enter the third side: ')))
        # checking if these sides could be a triangle
        if first_side == 0 or second_side == 0 or third_side == 0:
            print("a triangle side can`t be equal zero,try again")
        elif first_side + second_side <= third_side or second_side + third_side <= first_side \
                or third_side + first_side <= second_side:
            print("these three sides can`t make a triangle. try again please")
        else:
            break
    s = (first_side + second_side + third_side) / 2
    area: float = math.sqrt(s * (s - first_side) * (s - second_side) * (s - third_side))
    print("the area of the triangle =", area)
# option number 3 ***************************
elif opt_num == 3:
    first_side = abs(float(input('enter the first side: ')))
    second_side = abs(float(input('enter the second side: ')))
    angle = 300  # random value that suffices the expression
    while angle >= 180:
        angle = abs(float(input('enter the angle between them: ')))
        if angle == 180:
            print("invalid angle, try again")
        elif angle > 180:
            while angle > 180:
                angle = abs(angle - 360)
    area = 0.5 * first_side * second_side * math.sin(math.radians(angle))
    print("the area of the triangle =", area)
print("""         
***********************************************
thanks for using our program hope it was useful
***********************************************""")
