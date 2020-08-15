def most_frequent(string):
    d = dict()
    for i in string:
        if i not in d:
            d[i] = 1
        else:
            d[i] =d[i]+ 1
    a=sorted(d.items(),reverse = True, key = lambda kv:(kv[1] , kv[0]))
    print ("output:\n",a)
    
a=list(input("input: Please enter a string\n\t"))
a.sort()
b=most_frequent(a)
