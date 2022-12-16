import turtle

Billy = turtle.Turtle()

Billy.getscreen().bgcolor("black")

Billy.penup()
Billy.goto(-200, 50)
Billy.pendown()
Billy.color("blue")

Billy.speed(100)

# Start drawing stars
def star(turtle, size):
    if(size <= 10):
        return
    else:
        turtle.begin_fill()
        for i in range(5):
            turtle.forward(size)
            star(turtle, size / 3)
            turtle.left(216)
            turtle.end_fill()

star(Billy, 360)
turtle.done()
