def determine_steel_grade(h, c, t):
   
    condition1 = h > 50
    condition2 = c < 0.7
    condition3 = t > 5600

    
    conditions_met = sum([condition1, condition2, condition3])

    
    if condition1 and condition2 and condition3:
        grade = 10
    elif condition1 and condition2:
        grade = 9
    elif condition2 and condition3:
        grade = 8
    elif condition1 and condition3:
        grade = 7
    elif conditions_met == 1:
        grade = 6
    else:
        grade = 5

    if conditions_met == 3:
        conditions_message = "All of the conditions met."
    elif conditions_met == 2:
        conditions_message = "Two conditions met."
    elif conditions_met == 1:
        conditions_message = "Only one condition met."
    else:
        conditions_message = "None of the conditions met."

    return grade, conditions_message

h, c, t = map(float, input().split())


grade, message = determine_steel_grade(h, c, t)

print(f"The grade of the steel is: {grade}")
print(message)
