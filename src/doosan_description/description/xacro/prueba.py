import kinpy as kp
import math
import numpy as np
from kinpy.transform import Transform
import quaternion

chain = kp.build_serial_chain_from_urdf(
	open('/home/daniel/dev_ws/src/doosan_description/description/xacro/a0912_with_gripper_for_ik.urdf').read(), 
	"gripper_link_ee", 
	"base_0"
)



