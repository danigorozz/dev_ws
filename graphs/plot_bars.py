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


def plot_bars(puntos, title):
    deseados = []
    reales = []

    for key, value in puntos.items():
        deseados.append(value['deseado'])
        reales.append(value['real'])

    deseados_m = np.array(deseados)
    reales_m = np.array(reales)

    # Calcular la diferencia en X, Y y Z
    diferencia_x = np.abs(reales_m[:, 0] - deseados_m[:, 0])
    diferencia_y = np.abs(reales_m[:, 1] - deseados_m[:, 1])
    diferencia_z = np.abs(reales_m[:, 2] - deseados_m[:, 2])

    # Calcular la distancia entre puntos
    distancia_entre_puntos = np.abs(np.linalg.norm(reales_m - deseados_m, axis=1))

    # Crear el diagrama de barras agrupado
    fig, ax = plt.subplots(figsize=(10, 6))

    bar_width = 0.2  # Ancho de las barras
    index = np.arange(len(deseados_m))  # Índices para los grupos de barras

    # Barras para la diferencia en X
    ax.bar(index - bar_width, diferencia_x, width=bar_width, label='Diferencia en X')

    # Barras para la diferencia en Y
    ax.bar(index, diferencia_y, width=bar_width, label='Diferencia en Y')

    # Barras para la diferencia en Z
    ax.bar(index + bar_width, diferencia_z, width=bar_width, label='Diferencia en Z')

    # Barras para la distancia entre puntos
    ax.bar(index + 2*bar_width, distancia_entre_puntos, width=bar_width, label='Distancia', edgecolor='black')

    # Etiquetas y leyenda
    ax.set_xlabel('Puntos')
    ax.set_ylabel('Valor (m)')
    ax.set_title(title)
    ax.set_xticks(index + bar_width)
    ax.set_xticklabels(['Punto 1', 'Punto 2', 'Punto 3', 'Punto 4'])
    ax.legend()
    plt.show()


plot_bars(PUNTOS_SECUENCIAL, "Consigna vs Real modelo secuencial")
plot_bars(PUNTOS_PARALELO, "Consigna vs Real modelo paralelo")
