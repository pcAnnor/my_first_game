import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-3,3,200)

y1=np.exp(-x**2)
y2=np.sin(x)

plt.plot(x,y1)
plt.plot(x,y2)

plt.xlabel("x")
plt.ylabel("y")
plt.legend()
plt.grid(True)
plt.show()