class Complex:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __del__(self):
        print("Destructor called")
    
    def __add__(self, other):
        return Complex(self.x + other.x, self.y + other.y)
    
    def __sub__(self, other):
        return Complex(self.x - other.x, self.y - other.y)
    
    def __mul__(self, other):
        real = self.x * other.x - self.y * other.y
        imag = self.x * other.y + self.y * other.x
        return Complex(real, imag)
    
    def __truediv__(self, other):
        try:
            if other.x == 0 and other.y == 0:
                raise ZeroDivisionError("Cannot divide by zero")
            denominator = other.x**2 + other.y**2
            real = (self.x * other.x + self.y * other.y) / denominator
            imag = (self.y * other.x - self.x * other.y) / denominator
            return Complex(real, imag)
        except ZeroDivisionError as e:
            print(e)
            return None

    def __repr__(self) -> str:
        if self.y >= 0:
            return f"{self.x} + {self.y}i"
        else:
            return f"{self.x} - {abs(self.y)}i"
        
    @classmethod
    def from_string(cls, s):
        s = s.replace(' ', '').rstrip('i')
        if '+' in s:
            real, imag = map(float, s.split('+'))
        elif '-' in s[1:]:
            real, imag = map(float, s.split('-'))
            imag = -imag 
        else:
            if 'i' in s:
                real, imag = 0, float(s.rstrip('i'))
            else:
                real, imag = float(s), 0
        
        return cls(real, imag)

if __name__=="__main__":
    t = int(input("Enter the number of complex numbers: "))
    ls = []
    for _ in range(t):
        s = input("Enter a complex number : ")
        cmp = Complex.from_string(s)
        ls.append(cmp)
    for cmp in ls:
        print(cmp)