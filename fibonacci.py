n=int(input("How many terms? "))
a=0
b=1
c=0
if n<=0:
   print("Please enter a positive integer")
elif n==1:
   print("Fibonacci sequence upto",n,":")
   print(a)
else:
   print("Fibonacci sequence:")
   while c<n:
       print(a)
       fib=a+b
       a=b
       b=fib
       c+=1
