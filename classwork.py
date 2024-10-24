def grade(mark):
    if mark < 0:
        print("Enter a positive integer.")
    elif mark < 50:
        print(f"Failed.. marks: {mark}")
    elif mark < 60:
        print(f"Grade: D.. marks: {mark}")
    elif mark < 70:
        print(f"Grade: C.. marks: {mark}")
    elif mark < 80:
        print(f"Grade: B.. marks: {mark}")
    elif mark < 90:
        print(f"Grade: A.. marks: {mark}")
    else:
        print(f"Grade: A+.. marks: {mark}")


grade(45)  
grade(75)  
