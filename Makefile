build:
	arduino-cli compile -b arduino:avr:uno dnd_lights.ino

run:
	arduino-cli board attach -p /dev/ttyACM0 dnd_lights.ino

