import numpy as np
import matplotlib.pyplot as plt

x=np.array([1.0,2.0,3.0,4.0,2.0,1.0])


#subplots
plt.plot(2, 1, 1)
plt.stem(range(0,6),x)
plt.title('Digital Filter Input-Output')
plt.ylabel('$x(n)$')
plt.grid()# minor

plt.show()
