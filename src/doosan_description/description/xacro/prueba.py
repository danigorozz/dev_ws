import kinpy as kp
import math
import numpy as np
from kinpy.transform import Transform

chain = kp.build_serial_chain_from_urdf(open('/home/daniel/dev_ws/src/dsr_description2/urdf/a0912.blue.urdf').read(), "link6", "base_0")

fk = chain.forward_kinematics({
    "joint1": math.pi,
    "joint2": math.pi/2,
    "joint3": 0,
    "joint4": 0,
    "joint5": 0,
    "joint6": 0,
})

ik = chain.inverse_kinematics(fk)

# J = chain.jacobian([math.pi, math.pi/2, 0, 0, 0, 0])

print(fk)

