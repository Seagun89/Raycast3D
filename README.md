# Raycast3D
A video game project where I am learning about the creation of raycasting, video game development and practicing C++ OOP. 
Within this repo I use the programming language of C++ and utilize the library Raylib. 
The reason I went with Raylib is because I also began using Linux Ubuntu as my main OS and booting it up from a VM.
OpenGL wasn't compatible with Linux thus I had to find a way to use an openGL like framework and Raylib was that answer.

Answers for Questions which arose:

Why is arctan negated? 
This frustrating inversion traces its origins back to early computers, when they were mostly used to display text. In English, we read left-to-right, from top to bottom. Think about the text as a grid, where each character (of equal width) is displayed one at a time. Following the order of the letters in the message you are trying to display, you would increase your letter count as you read each character left to right, and then you would increase the number of rows that you have displayed as you complete each row of text and go down to the next one. Hence x increases as you go to the right, and y increases as you go down.

What is the need for bitshifting right then left for the ray's x component?
To quantize point.y to a multiple of 64 "size of the map" and then subtract a small int value 1. This could be for aligning the ray with the map. This is a faster way of multiplying and dividing by multiples of base 2 or bits.

Math Equations Used:

Magnitude of a Vector ~ 
mag(V) = Sqrt(Vx^2 + Vy^2)

Moving point along vector angle ~
x1 = x + cos(ang) * distance; 
y1 = y + sin(ang) * distance;


x = cos(pa); // calculates the x-component of the vector using the cosine of the angle "pa." 
y = sin(pa); // calculates the y-component of the vector using the sine of the angle "pa."

Slope of a Vector ~ 
y=mx+b

Slope between 2 points -
m =(y2 - y1)/(x2 - x1)

KeyWords: 
Unit Circle
Radians

 