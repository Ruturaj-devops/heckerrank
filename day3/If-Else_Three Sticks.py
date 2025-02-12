def classify_triangle(a, b, c):
    
    if a + b > c and b + c > a and a + c > b:
        if a == b == c:
            triangle_type = "Equilateral"
            characteristics = "All sides are of the same length."
        elif a == b or b == c or a == c:
            triangle_type = "Isosceles"
            characteristics = "Exactly two sides are equal."
        else:
            triangle_type = "Scalene"
            characteristics = "All sides are of different lengths."
    else:
        triangle_type = "Invalid"
        characteristics = "Cannot form a valid shape."

    return triangle_type, characteristics


a, b, c = map(int, input().split())


triangle_type, characteristics = classify_triangle(a, b, c)


print(f"Lengths: [{a}, {b}, {c}]")
print(f"Type: {triangle_type}")
print(characteristics)
