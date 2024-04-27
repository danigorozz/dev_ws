import pandas as pd
import matplotlib.pyplot as plt
import os
import numpy as np

# Paralelo
PUNTOS = {
    1: {
        "deseado": [-0.024, -4.024],
        "real": [-0.273, -4.003]
    },
    2: {
        "deseado": [-4.145, 1.487],
        "real": [-4.115, 1.362]
    },
    3: {
        "deseado": [-0.724, -5.059],
        "real": [-0.882, -4.941]
    },
    4: {
        "deseado": [-4.314, -3.301],
        "real": [-4.203, -3.545]
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
ax = fig.add_subplot(111)

ax.scatter(deseados_m[:,0], deseados_m[:,1], label="Consigna", alpha=1.0, zorder=2)
ax.scatter(reales_m[:,0], reales_m[:,1], label="Real", alpha=1.0, zorder=2)


for p in zip(list(deseados_m), list(reales_m)):
    # ax.plot([p[0,0], p[1,0]], [p[0,1], p[1,1]])
    x1, y1 = p[0]
    x2, y2 = p[1]
    ax.plot([x1, x2], [y1, y2], color='black', zorder=1)


ax.set_xlabel('X')
ax.set_ylabel('Y')

ax.set_title("Consigna vs. Posición real de la plataforma")

ax.legend(loc='best')


plt.show()