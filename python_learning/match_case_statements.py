# similar to switch
def day_of_week(day):
    match day:
        case 1:
            return "It is Sunday"
        case 2:
            return "It is Tuesday"
        case 3:
            return "It is wednesday"
        case 4:
            return "It is Thursday"
        case 5:
            return "It is Friday"
        case _:
            return "It is not a valid day of the week"

print(day_of_week(6))
    