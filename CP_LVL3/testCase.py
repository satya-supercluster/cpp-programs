import random
import string
import os

def generate_unique_string(length, existing_strings):
    while True:
        new_string = ''.join(random.choice(string.ascii_lowercase) for _ in range(length))
        if new_string not in existing_strings:
            existing_strings.add(new_string)
            return new_string

# Number of queries
q = 100000

# Get the directory of the current script
script_dir = os.path.dirname(os.path.abspath(__file__))
# Construct the full path for i1.txt
file_path = os.path.join(script_dir, 'i1.txt')

# Set to store all generated strings
all_strings = set()

# Open the file in write mode
with open(file_path, 'w') as f:
    # Write the number of queries
    f.write(f"{q}\n")

    for _ in range(q):
        operation = random.choice([1, 2])
        f.write(f"{operation} ")
        
        str_length = random.randint(1, 20)
        random_str = generate_unique_string(str_length, all_strings)
        f.write(f"{random_str}\n")

print(f"Test case with unique strings has been written to {file_path}")