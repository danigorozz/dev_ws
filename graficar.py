import pandas as pd
import matplotlib.pyplot as plt
import os

path = '/home/daniel/dev_ws'

files = []

for file in os.listdir(path):
    if file.endswith('.txt'):
        files.append(file)

n = len(files)

figure, axes  = plt.subplots((n+1)//2, 2)

axes = axes.flatten()

for i, file in enumerate(files):
    df = pd.read_csv(file, delimiter=';', header=None, names=['x', 'y', 'z'])
    x = df['x'].values
    y = df['y'].values
    axes[i].scatter(x, y)
    axes[i].set_title(file)
    axes[i].set_ylabel('Y')
    axes[i].set_xlabel('X')

    axes[i].axis('equal')
        
plt.show()
