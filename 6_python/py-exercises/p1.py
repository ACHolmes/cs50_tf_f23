''' 
Exercises to get used to Python!

Multi-line comments can be done using the triple apostrophes like this!

Single-line comments require a #

Note in codespaces (and VSCode), you can use the shortcut
CTRL + /  (Or CMD + / if on Mac I believe) to write a single line comment
in any language.
'''

'''
Topic 1: Using print
'''

print(" === Topic 1: print! === \n")

# To print, we can just use the print function as such:
print("Hello world!")

# by default, print adds a newline character for us. To avoid this, we use the end paramter:
print("Hello, ", end ="")

# We can print a variable by just writing print(variable):
name = "Andrew"
print(name)

# We can return to a more C-like syntax instead as such:
print("Formatting strings: {}".format(name))
# This places 'name' between the curly braces, as if it were a %s in C

# Even easier, we can use the following syntax to make it very clear what we are printing:
print(f"Easiest formatting of strings: {name}")