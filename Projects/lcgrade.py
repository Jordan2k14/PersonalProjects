#!/usr/bin/env python3

lcgrade = int(input())
if lcgrade >= 90:
	print("You have achieved a H1")
elif lcgrade >= 80:
	print("You have achieved a H2")
elif lcgrade >= 70:
	print("You have achieved a H3")
elif lcgrade >= 60:
	print("You have achieved a H4")
elif lcgrade >= 50:
	print("You have achieved a H5")
elif lcgrade >= 40:
	print("You have achieved a H6")
elif lcgrade >= 30:
	print("You have achieved a H7")
elif lcgrade <= 30:
	print("You have achieved a FAIL")
