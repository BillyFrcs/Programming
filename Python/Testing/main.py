import argparse

# python3 ./Python/Testing/main.py -n Billy -a 20

parser = argparse.ArgumentParser()

parser.add_argument('-n', '--name', required=True, help="Enter your name")
parser.add_argument('-a', '--age', required=True, help="Enter your age")

args = parser.parse_args()

print("Hey "+args.name+" what's good?")
print("You are "+args.age+" years old.")