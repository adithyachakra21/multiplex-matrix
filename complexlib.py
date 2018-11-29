# -*- coding: utf-8 -*-
"""
Created on Sun Nov 18 18:59:36 2018

@author: Owner
"""
class complex:
    
    def __init__(self, real, imag):
        self.real=real
        self.imag=imag
        
    def __add__(self, other):       
        return complex (self.real + other.real , self.imag + other.imag)
    
    def __mul__(self,other):      
        real_comp = (self.real*other.real) - (self.imag*other.imag)
        imag_comp = (self.real*other.imag) + (self.imag*other.real)
        
        return complex (real_comp, imag_comp)
    
    def __sub__(self,other): 
        return complex (self.real - other.real , self.imag - other.imag)
    
    def __str__(self):
        
        if self.imag == 0:
            return str(self.real)
        
        elif self.imag > 0:
            return str(self.real) + " + " + str(self.imag) + "i"
        
        elif self.imag < 0:
            return str(self.real) + " - " + str(-1 * self.imag) + "i"
    
    def magnitude (self,a):   
        self.a = a
        magn_squared = (self.real * self.real + self.imag * self.imag)   
        estimate = magn_squared / 2
        
        while abs(magn_squared-(estimate*estimate))>self.a:
            estimate = 0.5*(estimate+(magn_squared/estimate))
            
        return estimate
        
    
    def getReal (self):
        return self.real
    
    def getImag (self):       
        return self.imag
    
    
   
"""
x = complex(2,3)
y = complex(4,5)
print (x.getReal())
print (x.getImag())
u = x+y
print(u)
z = y.magnitude(0.01)
print (z)
"""


    
