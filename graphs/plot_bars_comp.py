import pandas as pd
import matplotlib.pyplot as plt
import os
import numpy as np

from mpl_toolkits.mplot3d import Axes3D

# Secuencial
PUNTOS_SECUENCIAL = {
    1: {
        "deseado": [0.0, -5.0, 0.5],
        "real": [0.001, -4.993, 0.5]
    },
    2: {
        "deseado": [-5.0, 2.0, 0.1],
        "real": [-5.01, 1.998, 0.101]
    },
    3: {
        "deseado": [-1.0, -6.0, 0.3],
        "real": [-1.008, -6.004, 0.3]
    },
    4: {
        "deseado": [-5.0, -4.0, 0.7],
        "real": [-4.989, -3.942, 0.693]
    }
}

# Paralelo
PUNTOS_PARALELO = {
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


def get_distance(puntos):
    deseados = []
    reales = []

    for key, value in puntos.items():
        deseados.append(value['deseado'])
        reales.append(value['real'])

    deseados_m = np.array(deseados)
    reales_m = np.array(reales)

    # Calcular la distancia entre puntos
    return np.abs(np.linalg.norm(reales_m - deseados_m, axis=1))


distancia_seq = get_distance(PUNTOS_SECUENCIAL)
distancia_par = get_distance(PUNTOS_PARALELO)

# Crear el diagrama de barras agrupado
fig, ax = plt.subplots(figsize=(10, 6))

bar_width = 0.2  # Ancho de las barras
index = np.arange(4)  # Índices para los grupos de barras

# Barras para la diferencia en X
ax.bar(index, distancia_seq, width=bar_width, label='Modelo secuencial')

# Barras para la diferencia en Z
ax.bar(index + 2*bar_width, distancia_par, width=bar_width, label='Modelo paralelo')

# Etiquetas y leyenda
ax.set_xlabel('Puntos')
ax.set_ylabel('Valor (m)')
ax.set_title("Distancia entre consigna y alcanzada para los dos modelos")
ax.set_xticks(index + bar_width)
ax.set_xticklabels(['Punto 1', 'Punto 2', 'Punto 3', 'Punto 4'])
ax.legend()
plt.show()
