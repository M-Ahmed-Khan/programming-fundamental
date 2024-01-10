import copy
import random


# Consider using the modules imported above.

def convert_into_contents_list(balls: dict):
    contents = []
    for color, n in balls.items():
        for i in range(n):
            contents.append(color)
    return contents


class Hat:
    def __init__(self, **balls):
        self.contents = convert_into_contents_list(balls)

    def draw(self, no_of_balls: int):
        if no_of_balls >= len(self.contents):
            contents_copy = self.contents
            self.contents = []
            return contents_copy
        balls = []
        for i in range(no_of_balls):
            random_draw = random.choice(self.contents)
            balls.append(random_draw)
            self.contents.pop(self.contents.index(random_draw))
        return balls


def experiment(hat: Hat, expected_balls: dict, num_balls_drawn: int, num_experiments: int):
    m = 0
    for i in range(num_experiments):
        flag = False
        hat_copy = copy.deepcopy(hat)
        draw = hat_copy.draw(num_balls_drawn)
        for color, count in expected_balls.items():
            if draw.count(color) < count:
                flag = True
        if flag:
            continue
        m += 1
    return m / num_experiments