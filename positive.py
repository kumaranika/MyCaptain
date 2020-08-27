n=int(input("Enter the number of terms: "))
i=0
num=[]
while i<n:
    print("Enter",i+1,"element: ")
    x=int(input())
    num.append(x)
    i+=1
print("List: ",num)
print("Positive numbers in the list: ")
for x in num:
    if x>=0:
        print(x)
