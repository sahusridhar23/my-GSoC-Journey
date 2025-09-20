prices =[100,200,300]

discount = 10 #10% discount

final_prices = []

for i in prices:
    final_price = i-(i*discount/100)
    final_prices.append(final_price)

print(final_prices)


# loops are slow
# loops are problematic to apply for a large number of data sets
