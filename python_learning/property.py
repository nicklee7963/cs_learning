# @property = decorator used to define a method as a property ( it can be accessed like an attribute)
#             benefit: add additional logic when read, write, or delete attributes
#             gives you getter, setter, and deleter method

class Rectangle:
    def __init__(self, width, height):
        self._width = width                      # under score shows that this method is private 
        self._height = height

    @property
    def width(self):                       # getter
        return f"{self._width:.1f}cm"

    @property
    def height(self):
        return f"{self._height:.1f}cm"

    @width.setter
    def width(self, new_width):

        if new_width > 0:
            self._width = new_width

        else:
            print("width must be greater than zero")
    
    @height.setter
    def height(self, new_height):
        if new_height > 0:
            self._height = new_height
        else:
            print("height must be greater than zero")


    @width.deleter
    def width(self):
        del self._width
        print("width has be deleted")

    @height.deleter
    def height(self):
        del self._height
        print("height has be deleted")








rectangle = Rectangle(3,4)

rectangle.width = 0

del rectangle.width















rectangle = Rectangle(3,4)


print(rectangle.width)
print(rectangle.height)