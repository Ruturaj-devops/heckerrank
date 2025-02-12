def is_leap_year(year):
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                return True  
            else:
                return False 
        else:
            return True 
    else:
        return False

def main():
    year = int(input())
    if year <=0 or year > 100000:
        print(f"The given year {year} is Invalid year.")
    else:
        if is_leap_year(year):
            print(f"Yes, {year} is a leap year.")
        else:
            print(f"No, {year} is not a leap year.")

if __name__ == "__main__":
    main()
