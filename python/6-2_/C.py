import pandas as pd


def cheque(price_list, **kwargs):
    myProducts = sorted(kwargs)
    productDict = {
        'product': myProducts,
        'price': [price_list[i] for i in myProducts],
        'number': [kwargs[i] for i in myProducts]
    }
    productDict['cost'] = [price_list[i] * productDict['number'][ind] for ind, i in enumerate(myProducts)]
    
    res = pd.DataFrame(productDict)
    return res