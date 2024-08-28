import pandas


def best(data):
    new_data = data.copy()
    return new_data[(new_data['maths'] > 3) & 
                    (new_data['physics'] > 3) & 
                    (new_data['computer science'] > 3)]
