mylist1=[12,-7,5,64,-14]
mylist2=[12,14,-95,3,0]
mylist3=[];
mylist4=[];
num1=0
num2=0
while(num1<len(mylist1) or num2<len(mylist2)):
       if (mylist1[num1]>=0):           
           mylist3.append(mylist1[num1])
       
       if (mylist2[num2]>=0):
           mylist4.append(mylist2[num2])
       num1 +=1;
       num2 +=1
print("Input:list1= ",mylist1)
print("output: ",mylist3)
print()
print("Input:list2= ",mylist2)
print("output: ",mylist4)
