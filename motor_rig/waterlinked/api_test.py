import urllib2
import re

def get_num(x):
    return float(''.join(ele for ele in x if ele.isdigit() or ele == '.'))

url = 'http://37.139.8.112:8000/api/v1/'

response = urllib2.urlopen('http://37.139.8.112:8000/api/v1/position/acoustic/filtered')

AcousticFilteredPosition = response.read()

response = urllib2.urlopen('http://37.139.8.112:8000/api/v1/position/acoustic/raw')

AcousticRawPosition = response.read()

print "Accoustic Filtered Position: ", AcousticFilteredPosition
print "Accoustic Raw Position: ",  AcousticRawPosition

