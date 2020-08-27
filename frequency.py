import operator
str=input("Enter a string: ")
d=dict()
def most_frequent(s):
    for i in s:
        if i in d:
            d[i]+=1
        else:
            d[i]=1
    print(sorted(d.items(), key=operator.itemgetter(1),reverse=True))
most_frequent(str)
