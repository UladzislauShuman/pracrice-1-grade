kids = int(input())
sweets = int(input())

sweets_for_kid = sweets // kids
print(f"{sweets_for_kid}")
print(f"{sweets - sweets_for_kid*kids}")
