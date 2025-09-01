import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

data = pd.read_csv("output.txt", sep=r"\s+", header=None)

x = data[0].astype(float)
u = data[1].astype(float)

plt.plot(x, u, marker="o")  # "o" for punkter, uten får du linje
plt.xlabel("x - values")
plt.ylabel("U(x) - values ")
plt.title("Plot of the exact function u(x)")
plt.grid(True)
plt.ticklabel_format(style="plain", axis="x")
plt.show()