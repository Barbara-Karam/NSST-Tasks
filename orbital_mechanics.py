import math

# using snake-case
print("welcome to our program! we're hoping you'd find what you're looking for")

iteration_condition = 1
while iteration_condition == 1:

    print("what do you'd like to calculate?")
    print("""
         1-Newton's second law
         2-Newton's third law
         3-finding a vector magnitude
         4-finding a vector direction
         5-finding the sum of two vectors
         6-finding the subtraction of two vectors
         7-finding the dot product of two vectors
         8-finding the cross product of two vectors
         9-finding angular velocity from linear velocity
         10-finding angular acceleration from linear velocity
         11-Newton's Universal Gravitational law
         """)
    opt_num = 13  # option number initialized with random value that suffices the expression

    while opt_num < 1 or opt_num > 10:  # making sure that no wrong option numbers are chosen
        opt_num = int(input('enter the number: '))
        if opt_num < 1 or opt_num > 10:
            print("please choose the number of the option listed above")
    # option number 1 ***************************
    if opt_num == 1:
        # asks the user to enter the mass and force as floating numbers
        mass = float(input("Enter the mass of the object in kilograms: "))
        net_force = float(input("Enter the net force acting on the object in newtons: "))

        # Calculate the acceleration using F = ma
        acceleration = net_force / mass

        # Print the result
        print("The acceleration of the object is {:.2f} meters per second squared.".format(acceleration))
    # option number 2 ***************************
    elif opt_num == 2:
        forces = []
        forces_num = int(input("enter the number of forces"))
        for x in forces_num:
            force = float(input("enter the {} force".format(x)))
            forces_addition = forces_addition + force
            forces.append(force)
        print("the forces you entered are", forces)
        if forces_addition == 0:
            print("the forces are balanced")
        else:
            print("the forces aren't balanced and the force that would balance them equals ", (-1*forces_addition))

    # option number 3 ***************************
    elif opt_num == 3:

        # entering the x,y,z components
        x = float(input("please enter the x component:  "))
        y = float(input("please enter the y component:  "))
        z = float(input("please enter the z component:  "))
        # calculating the magnitude
        magnitude = math.sqrt((x ** 2) + (y ** 2) + (z ** 2))
        # printing the result
        print("the magnitude of this vector is ", magnitude)

    # option number 4 ***************************
    elif opt_num == 4:
        # entering the x,y,z components
        x = float(input("please enter the x component:  "))
        y = float(input("please enter the y component:  "))
        z = float(input("please enter the z component:  "))
        # calculating the magnitude
        magnitude = math.sqrt((x ** 2) + (y ** 2) + (z ** 2))
        # calculating the direction
        x_direction = x / magnitude
        y_direction = y / magnitude
        z_direction = z / magnitude
        # printing the result
        print("the vector direction is ", x_direction, "i + ", y_direction, "j +", z_direction, "k ")

    # option number 5 ***************************
    elif opt_num == 5:
        vec1 = input("Enter the first vector as a comma-separated list of numbers: ")
        vec2 = input("Enter the second vector as a comma-separated list of numbers: ")

        # Split the input strings to get the component values
        vec1_components = list(map(float, vec1.split(",")))
        vec2_components = list(map(float, vec2.split(",")))

        # Check if the vectors have the same dimensions
        if len(vec1_components) != len(vec2_components):
            print("Error: The two vectors must have the same number of components.")
        else:
            # Add the two vectors together
            result_vec = [vec1_components[i] + vec2_components[i] for i in range(len(vec1_components))]

            # Print the result as a tuple
            print("The sum of the two vectors is: ", tuple(result_vec))
    # option number 6 ***************************
    elif opt_num == 6:
        vec1 = input("Enter the first vector as a comma-separated list of numbers: ")
        vec2 = input("Enter the second vector as a comma-separated list of numbers: ")

        # Split the input strings to get the component values as floats
        vec1_components = list(map(float, vec1.split(",")))
        vec2_components = list(map(float, vec2.split(",")))

        # Check that the vectors have the same dimensionality
        if len(vec1_components) != len(vec2_components):
            print("Error: The two vectors must have the same number of components.")
        else:
            # Subtract the second vector from the first component-wise
            result_vec = [vec1_components[i] - vec2_components[i] for i in range(len(vec1_components))]

            # Print the result as a tuple
            print("The difference of the two vectors is: ", tuple(result_vec))
    # option number 7 ***************************
    elif opt_num == 7:
        # ask the user to input the two vectors as comma-separated lists of numbers
        vec1 = input("Enter the first vector as a comma-separated list of numbers: ")
        vec2 = input("Enter the second vector as a comma-separated list of numbers: ")

        # Split the input strings to get the component values as floats
        vec1_components = list(map(float, vec1.split(",")))
        vec2_components = list(map(float, vec2.split(",")))

        # Check that the vectors have the same dimensionality
        if len(vec1_components) != len(vec2_components):
            print("Error: The two vectors must have the same number of components.")
        else:
            # Calculate the dot product component-wise
            dot_product = sum([vec1_components[i] * vec2_components[i] for i in range(len(vec1_components))])
            magnitude1 = math.sqrt((vec1_components[0] ** 2) + (vec1_components[1] ** 2) + (vec1_components[2] ** 2))
            magnitude2 = math.sqrt((vec2_components[0] ** 2) + (vec2_components[1] ** 2) + (vec2_components[2] ** 2))
            theangle = math.degrees(math.acos((dot_product/(magnitude1*magnitude2))))
            # Print the result
            print("The dot product of the two vectors is: ", dot_product)
            print("first mag is ", magnitude1)
            print("second mag is", magnitude2)
            print("the angle is ", theangle)

    # option number 8 ***************************
    elif opt_num == 8:

        vector_1 = input("Enter the first vector (separate each component with a comma)\n"
                         "note that if it's 2d replace the third component with zero \n")
        vector_2 = input("Enter the second vector (separate each component with a comma)\n "
                         "note that if it's 2d replace the third component with zero \n")

        # Convert the string input into lists of floating numbers
        vector_1 = [float(x) for x in vector_1.split(",")]
        vector_2 = [float(x) for x in vector_2.split(",")]

        # Calculate the cross product

        i = vector_1[1] * vector_2[2] - vector_1[2] * vector_2[1]
        j = vector_1[2] * vector_2[0] - vector_1[0] * vector_2[2]
        k = vector_1[0] * vector_2[1] - vector_1[1] * vector_2[0]

        # Print the result
        print("The cross product of", vector_1, "and", vector_2, "is", i, "i +", j, "j +", k, "k")

    # option number 9 ***************************
    elif opt_num == 9:

        # asking the user to enter the needed parameters
        linear_velocity = float(input("Enter the linear velocity: "))
        moment_arm = float(input("Enter the moment arm: "))
        angle = math.radians(float(input("Enter angle between them: ")))

        # calculating using w=v*sin(angle)/r
        angular_velocity = (linear_velocity * math.sin(angle)) / moment_arm

        # printing the result
        print("The angular velocity is: {0}".format(angular_velocity))

    # option number 10 ***************************
    elif opt_num == 10:
        # ask the user to enter the required variables
        linear_velocity = float(input("Enter the linear velocity: "))
        moment_arm = float(input("Enter the moment arm: "))

        # calculate the result using alpha=v**2/r
        angular_acceleration = ((linear_velocity**2) / moment_arm)

        # printing the result
        print("The angular acceleration is: {0}".format(angular_acceleration))
    # option number 11 ***************************
    elif opt_num == 11:
        # asks the user whether it's around the Earth or no
        G = 6.67*(10**-11)
        Earth = bool(input("Is the larger body Earth? Enter 0 if it's not"))
        if Earth == 0:
            large_mass = 5.972 * (10**24)
        else:
            large_mass = float(input("Enter the larger body mass in kgs"))
        small_mass = float(input("Enter the larger body mass in kgs"))
        distance = float(input("Enter the distance between their centers in meters"))
        Force = (G*large_mass*small_mass)/(distance**2)
        print("the gravitational force equals ", Force)

    # *********************************************

    # re-entering the program if the user liked to
    iteration_condition = int(input("type 1 if you'd like to calculate another function \n"))

    # *********************************************
# the end
print("thanks for using our program :)\n"
      r"Supervisor : Professor\ Hamdy Abdelsamea Mahmoud ", "\n"
      "made by: \n"
      "Ahmad Mohammad Taha \n"
      "Ahmad Bahaa Eldin Mohammad \n"
      "Barbara Karam Aziz \n"
      "Omar Sobhy Abdelkader \n"
      "Majda Sherif Abdelstar \n"
      "Marten Nady Shokry \n"
      "Shahd Mohammed Mohy ELdeen Elkilany")
