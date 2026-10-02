price = float(input("Enter bill amount: "))

discount = price * 10 / 100
after_discount = price - discount

gst = after_discount * 18 / 100
final_bill = after_discount + gst

print("Original price:", price)
print("Discount:", discount)
print("Price after discount:", after_discount)
print("GST:", gst)
print("Final bill:", final_bill)