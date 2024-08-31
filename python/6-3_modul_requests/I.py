import requests
import json
import sys

address = 'http://' + input() + '/users/' + input()
line = [i.strip().split('=') for i in sys.stdin]
data = {}
for j in line:
    data[j[0]] = j[1]
requests.put(address, json.dumps(data))
