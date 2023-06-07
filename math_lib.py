import sympy 

X= sympy.symbols('X')
Y= sympy.symbols('Y')

def equation():
	print(sympy.solve(3*(X**3)+(X)-sympy.sin(sympy.pi) ,X ))
	
equation()

	