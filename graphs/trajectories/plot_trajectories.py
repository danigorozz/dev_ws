import matplotlib.pyplot as plt
from pathlib import Path

final_points = {
    0: (-0.02, -4.02),     # x=-0.02396317388649649, y=-4.024466110912435     
    1: (-4.14, 1.49),   # x=-4.144955323611935, y=1.4866721242860947
    2: (-0.72, -5.06),  # x=-0.7243931007055515, y=-5.058773224713484
    3: (-4.32, -3.30),  # x=-4.313929821063933, y=-3.301407018106765
}

points = {}

path = Path("./graphs/trajectories")

fig, ax = plt.subplots(1,1)

img = plt.imread("/home/daniel/dev_ws/my_map_save.pgm")

COLORS = plt.rcParams['axes.prop_cycle'].by_key()['color']

last_points = {}
print(list(path.glob("*.txt")))
for i, txt in enumerate(sorted(path.glob("*.txt"))):
    with open(txt, "r") as f:
        lines = f.readlines()
        points[i] = {
            "x": [float(l.split(";")[0]) for l in lines],
            "y": [float(l.split(";")[1]) for l in lines]
        }
        last_points[i] = (points[i]["x"][-1], points[i]["y"][-1]) 

        # w, h = 276, 414
        # r = 0.05
        # ax.imshow(img, extent=[-w*r/2, w*r/2, -h*r/2, h*r/2])
        ax.plot(points[i]["x"], points[i]["y"], color=COLORS[i])
        ax.scatter(*last_points[i], label=f"Alcanzada {i+1}", color=COLORS[i])
        ax.scatter(*final_points[i], marker='*', label=f"Consigna {i+1}", color=COLORS[i])
        ax.text(points[i]["x"][-1] + 0.1, points[i]["y"][-1] + 0.1, i+1)
        ax.axis("equal")

ax.set_title("Posición real vs. Consigna de la base")
ax.set_xlabel("X (m)")
ax.set_ylabel("Y (m)")
ax.legend()
plt.show()