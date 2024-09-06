# magic methods = dunder methods __init__, __str__, __eq__
#                 they are automatically called by many of python's build-in operations
#                 they allow developers to define or customize the behavior of objects

class Book:

    def __init__(self, title, author, num_pages):
        self.title = title
        self.author = author
        self.num_pages = num_pages

    def __str__(self):                                                   #if this line be deleted print(book1) will show the memory location
        return f"{self.title} by {self.author}"
    
    def __eq__(self, other):
        return self.title == other.title and self.author == other.author       #use to compare two objects are equal

    def __lt__(self, other):                      #less than

        return self.num_pages < other.num_pages

    def __gt__(self, other):

        return self.num_pages > other.num_pages               #greater than

    def __add__(self,other):
        return self.num_pages + other.num_pages

    def __contains__(self, keyword):           #check keyword is in object or not
        return keyword in self.title or keyword in self.author

    def __getitem__(self, key):
        if key == "title":
            return self.title
        if key == "author":
            return self.author
        if key == "num_pages":
            return self.num_pages
        else:
            return f"key {key} was not found"

book1 = Book("the hobbit", "j.r.r tolkien", 310)
book2 = Book("harry potter", "j.k rowling",233)


print(book1)
print(book1 == book2)
print(book1 < book2)
print(book1 > book2)
print(book1+book2)

print("the" in book1)
print(book1["author"])
print(book2["jdkf"])