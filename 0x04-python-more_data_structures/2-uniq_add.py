#!/usr/bin/python3
def uniq_add(my_list=[]):
    value_list = []
    result = 0
    for value in my_list:
        if value not in value_list:
            value_list.append(value)
    for unique_value in value_list:
        result += unique_value
    return result
