import urllib2

url = 'http://37.139.8.112:8000/api/v1/'

response = urllib2.urlopen('http://37.139.8.112:8000/api/v1/position/acoustic/filtered')

AcousticFilteredPosition = response.read()

response = urllib2.urlopen('http://37.139.8.112:8000/api/v1/position/acoustic/raw')

AcousticRawPosition = response.read()

print("Accoustic Filtered Position: %s\n", AcousticFilteredPosition)
print("Accoustic Raw Position: %s\n", AcousticRawPosition)
