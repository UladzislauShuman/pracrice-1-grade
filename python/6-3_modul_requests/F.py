import requests 

address = 'http://' + input() + '/users'
data = requests.get(address).json()
names = []

for obj in data:
    names.append(f"{obj['last_name']} {obj['first_name']}")
for name in sorted(names):
    print(name)


