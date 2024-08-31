import requests 
import json

address = 'http://' + input() + '/users'
data = {}
data["username"] = input()
data["last_name"] = input()
data["first_name"] = input()
data["email"] = input()
requests.post(address, data=json.dumps(data))
