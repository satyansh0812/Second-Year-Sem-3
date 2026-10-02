from matplotlib import pyplot as plt

x = [5,8,10]
y = [12,16,6]
x2 = [6,9,11]
y2 = [6,15,7]

plt.bar(x,y,align='center',color='red')
plt.bar(x2,y2,color='purple',align='center')
plt.title('Bar Graph')
plt.ylabel('Y axis')
plt.xlabel('X axis')
plt.show()