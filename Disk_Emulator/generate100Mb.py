fp = open("disk.txt", "w")
for i in range(0, 104857600):
	fp.write("1")
fp.close()