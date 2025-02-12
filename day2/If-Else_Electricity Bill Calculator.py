def calculate_bill(units):
    if units <= 100:
        bill = units * 5
    elif units <= 300:
        bill = (100 * 5) + ((units - 100) * 7)
    else:
        bill = (100 * 5) + (200 * 7) + ((units - 300) * 10)

    
    if bill <= 1200:
        bill *= 0.9

    return bill

def main():
    
    try:
        units = int(input())

       
        if units < 0 or units > 1000000:
            print("Invalid Input!")
        else:
            
            total_bill = calculate_bill(units)

            
            print(f"The electricity bill is: {total_bill:.2f}.")
    except ValueError:
        print("Invalid Input!")

if __name__ == "__main__":
    main()
