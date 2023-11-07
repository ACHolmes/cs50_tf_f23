from bs4 import BeautifulSoup
import requests

# Sample HTML content
html_content = """
<!DOCTYPE html>
<html>
<head>
    <title>Sample Webpage</title>
</head>
<body>
    <h1>Main Heading</h1>
    <p>This is a paragraph.</p>
    <ul>
        <li>Item 1</li>
        <li>Item 2</li>
        <li>Item 3</li>
    </ul>
</body>
</html>
"""

# Create a BeautifulSoup object with the HTML content
soup = BeautifulSoup(html_content, 'html.parser')

# Demonstrate the tree structure
def print_tree(element, indent=0):
    print('  ' * indent + element.name)
    for child in element.find_all(recursive=False):
        print_tree(child, indent + 1)

print_tree(soup)


# Let's try this on Google's webpage!
url = "https://www.google.com"

# Send an HTTP GET request and retrieve the content
response = requests.get(url)

# NOTE: this is not great code, what could go wrong here...
html_content = response.text
soup = BeautifulSoup(html_content, 'html.parser')


print(
f"""
\n========================
  Google's page parsed!
========================
""")

print_tree(soup)