import pandas as pd
import matplotlib.pyplot as plt
import os
import numpy as np

from mpl_toolkits.mplot3d import Axes3D

# Secuencial
# PUNTOS = {
#     1: {
#         "deseado": [0.0, -5.0, 0.5],
#         "real": [0.001, -4.993, 0.5]
#     },
#     2: {
#         "deseado": [-5.0, 2.0, 0.1],
#         "real": [-5.01, 1.998, 0.101]
#     },
#     3: {
#         "deseado": [-1.0, -6.0, 0.3],
#         "real": [-1.008, -6.004, 0.3]
#     },
#     4: {
#         "deseado": [-5.0, -4.0, 0.7],
#         "real": [-4.989, -3.942, 0.693]
#     }
# }

# Paralelo
PUNTOS = {
    1: {
        "deseado": [0.0, -5.0, 0.5],
        "real": [-0.249, -4.978, 0.5]
    },
    2: {
        "deseado": [-5.0, 2.0, 0.1],
        "real": [-4.876, 1.832, 0.114]
    },
    3: {
        "deseado": [-1.0, -6.0, 0.3],
        "real": [-1.097, -5.881, 0.3]
    },
    4: {
        "deseado": [-5.0, -4.0, 0.7],
        "real": [-4.784, -4.159, 0.649]
    }
}

deseados = []
reales = []

for key, value in PUNTOS.items():
    deseados.append(value['deseado'])
    reales.append(value['real'])

deseados_m = np.array(deseados)
reales_m = np.array(reales)

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

ax.scatter(deseados_m[:,0], deseados_m[:,1], deseados_m[:,2], label="Consigna", alpha=1.0)
ax.scatter(reales_m[:,0], reales_m[:,1], reales_m[:,2], label="Real", alpha=1.0)

offset = 0.03
for key, value in PUNTOS.items():
    ax.text(value['deseado'][0] + offset, value['deseado'][1] + offset, value['deseado'][2] + offset, key)

ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')

ax.set_title("Consigna vs. Posición real")

ax.legend(loc='center left')


plt.show()