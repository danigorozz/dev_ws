import kinpy as kp
import math
import numpy as np
from kinpy.transform import Transform
import quaternion

# chain = kp.build_serial_chain_from_urdf(open('/home/daniel/dev_ws/src/dsr_description2/urdf/a0912.blue.urdf').read(), "link6", "base_0")

# fk = chain.forward_kinematics({
#     "joint1": math.pi,
#     "joint2": math.pi/2,
#     "joint3": 0,
#     "joint4": 0,
#     "joint5": 0,
#     "joint6": 0,
# })

# ik = chain.inverse_kinematics(fk)

# J = chain.jacobian([math.pi, math.pi/2, 0, 0, 0, 0])
# l = [1, 2, 3, 4]
# q = np.quaternion(*l)

# a = np.array([1, 1, 0, 0])
# d = {'x': 1, 'y': 2, 'z': 3}

joints = [math.pi, 3.5*math.pi, 6*math.pi, 1.0]

def truncated_remainder(dividend, divisor):
    divided_number = dividend / divisor
    divided_number = \
        -int(-divided_number) if divided_number < 0 else int(divided_number)

    remainder = dividend - divisor * divided_number

    return remainder

def transform_to_pipi(input_angle):
    revolutions = int((input_angle + np.sign(input_angle) * np.pi) / (2 * np.pi))

    p1 = truncated_remainder(input_angle + np.sign(input_angle) * np.pi, 2 * np.pi)
    p2 = (np.sign(np.sign(input_angle)
                  + 2 * (np.sign(math.fabs((truncated_remainder(input_angle + np.pi, 2 * np.pi))
                                      / (2 * np.pi))) - 1))) * np.pi

    output_angle = p1 - p2

    return output_angle

joints_temp = map(transform_to_pipi, joints)
print(list(joints_temp))

