def month(num, lang):
    Month = {
        'ru': ['Январь', 'Февраль', 'Март', 'Апрель', 'Май', 'Июнь', 'Июль',
               'Август', 'Сентябрь', 'Октябрь', 'Ноябрь', 'Декабрь'],
        'en': ['January', 'February', 'March', 'April', 'May', 'June', 'July',
               'August', 'September', 'October', 'November', 'December']
             }

    return Month[lang][num - 1]