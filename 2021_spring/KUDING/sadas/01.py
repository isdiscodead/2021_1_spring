handsome = {'SG' : 0, 'MJ' : 0, 'HB' : 0}
keys = handsome.keys()

score = input("").split()
idx = 0
tot_sum = 0

for i in keys :
    handsome[i] = score[idx]
    tot_sum += int(handsome.get(i))
    idx += 1

if tot_sum >= 100 :
    print("OK")

else : 
    if ( handsome.get('SG') <= handsome.get('MJ') and handsome.get('SG') <= handsome.get('HB') ) :
        print("SG")
    elif ( handsome.get('MJ') <= handsome.get('SG') and handsome.get('MJ') <= handsome.get('HB') ) :
        print("MJ")
    else : 
        print("HB")
