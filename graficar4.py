import pandas as pd
import matplotlib.pyplot as plt
import os
import numpy as np

from matplotlib.patches import Rectangle, Circle

with open('path.txt', 'r') as f:
    lines = f.read()

lines = lines.split('\n')
lines = list(map(lambda x: x[24:-1], lines))
lines = [list(map(lambda y: y.strip(), x.split(','))) for x in lines]
lines = lines[:-1]

point_list = []

for point in lines:
    x = float(point[0].split('=')[-1])
    y = float(point[1].split('=')[-1])
    point_list.append([x, y])

points_arr = np.array(point_list)

fig, ax = plt.subplots()

last_point = points_arr[-1,:]
selected_point = points_arr[234,:]

ax.scatter(points_arr[:,0], points_arr[:,1], marker='.', label='Path')

ax.scatter(last_point[0], last_point[1], label='Punto objetivo')


radius = np.linalg.norm(last_point - selected_point)


ax.add_patch(Circle((last_point[0], last_point[1]), radius, fill=False, edgecolor='red', lw=1))

ax.scatter(selected_point[0], selected_point[1], label='Punto seleccionado')

w = 1.8
h = 2

ax.add_patch(Rectangle((-1.57 - w/2, 2.3 - h/2), 1.8, 2,
                        edgecolor='black',
                        fill=False,
                        lw=5,
                        hatch='///'))

                

# df = pd.read_csv('tf_position.txt', delimiter=';', header=None, names=['x', 'y', 'z'])
# x = df['x'].values
# y = df['y'].values
# ax.scatter(x, -y)
ax.set_ylabel('Y')
ax.set_xlabel('X')

ax.axis('equal')

ax.legend()

ax.set_title('Path generado y pose seleccionada sobre el plano')

plt.show()