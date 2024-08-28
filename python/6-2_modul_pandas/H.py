import pandas


def update(data_):
    new_data = data_.copy()
    for i in range(len(new_data.loc[:, 'name'])):
        new_data.loc[:, 'average'] = (new_data['maths'] + new_data['physics'] + new_data['computer science']) / 3
    return new_data.sort_values(by=['average', 'name'], ascending=(False, True))

