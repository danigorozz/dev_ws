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

for i, ext in enumerate(list('-'.join(x.split('.')) for x in "1.0,0.8,0.6,0.4,0.2".split(','))):
    file = "tf_position_mu2_" + ext + ".txt"
    df = pd.read_csv(file, delimiter=';', header=None, names=['x', 'y', 'z'])
    x = df['x'].values
    y = df['y'].values
    axes[i].scatter(x, y)
    axes[i].set_title('Posición en el plano (mu = ' + ext.replace('-', '.') + ')')
    axes[i].set_ylabel('Y')
    axes[i].set_xlabel('X')

    axes[i].axis('equal')

axes[n].axis('off')
axes[n-1].set_position([0.25, 0.1, 0.5, 0.2])

plt.show()
