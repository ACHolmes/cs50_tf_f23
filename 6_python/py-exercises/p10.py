'''
Topic 10: CSV files

CSV files are a simple and relatively common way of storing data. CSV stands
for Comma-Separated Values, since all values in a row are separated by a comma.
Take a look at data.csv for an example! This will be useful for dna pset :)
'''

print(" === Topic 10: CSV files! === \n")

# There's a module to help us use CSV files! There are other options that you could use too,
# such as pandas :)
import csv

'''
Documentation for the CSV library can be found here:
https://docs.python.org/3/library/csv.html
'''

# To start with, we first need to open our csv file like any other file
file = open("data.csv")

# Let's look at the example code in the documentation:
'''
>>> import csv
>>> with open('eggs.csv', newline='') as csvfile:
...     spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
...     for row in spamreader:
...         print(', '.join(row))

Spam, Spam, Spam, Spam, Spam, Baked Beans
Spam, Lovely Spam, Wonderful Spam
'''
# ok so they opened a file, then created a csv.reader thing, then tried printing it somehow. Let's try ourselves

my_reader = csv.reader(file)
print("Just printing our rows in our reader: ")
for row in my_reader:
    print(row)
file.close()

'''
Seems pretty useful! How could we get the first row? First instinct might be to try:

print(f"First row: {my_reader[0]}")

but my_reader isn't actually a list. This doesn't quite work. 

How could we get everything from my_reader into a list? This would allow us to use results[0] to get the 
column titles, and the rest of the list is then the data. How could you use slicing to get the rest of the data
by itself?
''' 

# We could also try using csv's DictReader and use our new dictionary skills!

print("\n\nDictionary Reader!")

# Open the file again
file = open("data.csv")

# Print everything from our dictionary reader
new_reader = csv.DictReader(file)
for row in new_reader:
    print(row)

'''
This agains seems super useful, but how could we get our column titles out by themselves?
Could you use something from our dictionary knowledge? There's also an attribute of the Dictionary Reader you
could use that would be helpful here!
'''


file.close()



