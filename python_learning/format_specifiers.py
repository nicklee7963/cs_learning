# format specifiers = {val : flags} format a value base on what flags are inserted
# :.(number)f = round to that many decimal places (fixed point)
# :(number) = allocate that many spaces
# :03 = allocate and pad with zeros up to 3 digits
# :< = left justify
# :> = right justify
# :^ = center justify
# :+ = use a + sign to indicate positive value
# := = place sign to leftmost position
# :  = insert a space before positive value
# :, = comma separator

prices1 = 3.14159

prices2 = -987.65

prices3 = 12.34


print(f"Price 1 is {prices1:=}")
print(f"Price 2 is {prices2:010}")
print(f"Price 3 is {prices3: 10}")
