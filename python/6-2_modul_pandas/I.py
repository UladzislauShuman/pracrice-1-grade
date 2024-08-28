import pandas 


def get_long(seria, min_length=5):
    return seria[seria >= min_length]
    
