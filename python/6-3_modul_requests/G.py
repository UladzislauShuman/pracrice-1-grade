import requests 
import sys

address = 'http://' + input() + '/users/' + input()
d = ''.join(i for i in sys.stdin)
data = {}
try:
    data = requests.get(address).json()
except ValueError:
    print("Пользователь не найден")
if data:
    for key in data:
        d = d.replace('{' + key + '}', str(data[key]))
    print(d)

