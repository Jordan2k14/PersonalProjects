#!/usr/bin/env python3

import sys

def stopping_time(Eliza, red_light, green_light,): #We are starting with definining the functions
	traffic_time = 0
	position = 0 #The start of the road is at 0 so I labeled it as position and put it as 0

	#Allthough defining this isn't needed, I defined the red_light as STOP and the green_light as GO to make it easier for me to understand + to make it relatable to an actual traffic light system

	GO = green_light #Go equates to when the light is green
	STOP = red_light #Stop equates to when the light is red

	while traffic_time <= Eliza:
		if position == 0: #Position is 0 cause Eliza has to stop when the lights are red
			traffic_time = traffic_time + int(STOP)
			position = position + 1

		elif position == 1: #Position is 1 cause Eliza can go when the light is green
			traffic_time = traffic_time + int(GO)
			position = position - 1

	if position == 1:
		stopping_time = traffic_time - Eliza
	elif position == 0:
		stopping_time = 0
	return(stopping_time)

def main():
	traffic_lights = sys.stdin.readlines()
	road = traffic_lights[0]
	position = 1
	Eliza = 0
	future_distance = "1" #This isn't needed, but I put it here anyways to make things easier for me to understand
	previous_distance = "0"

	while position < len(traffic_lights):
		distance, GO, STOP = traffic_lights[position].strip().split()
		Eliza = Eliza + (int(distance) - int(previous_distance))
		Eliza = Eliza + stopping_time(Eliza, GO, STOP)
		position = position + 1
		previous_distance = distance

	Eliza = Eliza + (int(road) - int(previous_distance))
	print(Eliza)

if __name__ == '__main__':
	main()
