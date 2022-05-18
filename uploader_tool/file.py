import requests
url = "http://192.168.94.237/qpdate"

file1 = open('dump.txt', 'r')

for line in file1:
    payload = {'pos': 165, 'r': 0, 'g': 0, 'b': 0, 'cw': 0, 'ww': 0}
    line = line.strip('\n')
    list = line.split(':')
    if list[0] == 'POS':
        continue
    payload['pos'] = list[0]
    payload['r'] = list[1]
    payload['g'] = list[2]
    payload['b'] = list[3]
    payload['cw'] = list[4]             
    payload['ww'] = list[5]
    
    print(payload)
    r = requests.get(url, params=payload)
    print(r)
                            