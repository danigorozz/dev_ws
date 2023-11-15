import numpy as np
import math

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