# multiplex-matrix

Adithya here!

You might ask: what does "multiplex-matrix" mean? Glad you asked. This repository deals with my favorite branches of mathematics: linear algebra (matrices) and complex numbers (multiplex is a synonym of complex). Forgive me if the title is a bit of a stretch -- I couldn't resist the chance for a good alliteration!

Here are the libraries I am currently working on:

1. Python complex numbers library (complexlib.py). This features all basic functions (addition, subtraction, multiplication, division) as well as some more advanced concepts I'm learning this year: calculating the root of a complex number with de Moivre's Theorem, calculating a complex number when raised to large powers (also with De Moivre's Theorem), and using Euler's Identity to calculate the rotation of a complex number from its a + bi form.

2. C complex numbers library (complexlib.c) with all the above functions in C!

3. Python matrix library (matrix.py). This features basic functions (addition, subtraction, division) and some more advanced concepts I'm learning this year: Gaussian Elimination of a matrix to Reduced Normal Form, using the Leibniz Formula to calculate the determinant of a n-by-n matrix, and calculating the curve of best-fit for a data set using a least squares approach. 

(As a side note, you'll notice that I don't use the imported function for square root (e.g: math.sqrt in python). Instead, I use the Babylonian square root algorithm and make an "in-house" function. This is because the Babylonian algorithms allows the user to dictate the accuracy of their square root answer to be. It has always been my belief that programs should give the user as much control as possible over the data.)

(Truth be told: I'm also naturally suspicious of imported functions and try avoiding them whenever possible.)
