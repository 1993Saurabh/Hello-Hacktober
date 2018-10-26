#!/usr/bin/env python3

import datetime

def hello_world():
    now = datetime.datetime.now()
    if (now.hour < 12):
        print('Good morning world!')
    elif (now.hour < 18):
        print('Good afternoon world!')
    else:
        print('Good evening world!')

if __name__ == '__main__':
    hello_world()
