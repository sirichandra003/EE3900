
import numpy as np
import matplotlib.pyplot as plt

x=np.loadtxt('3.3x.txt')
y=np.loadtxt('3.3y.txt')
k=20

plt.subplot(2, 1, 1)
plt.stem(range(0,6),x)
plt.title('Digital Filter Input-Output')
plt.ylabel('$x(n)$')
plt.grid()


plt.subplot(2, 1, 2)
plt.stem(range(0,k),y)
plt.xlabel('$n$')
plt.ylabel('$y(n)$')
plt.grid()

plt.show()