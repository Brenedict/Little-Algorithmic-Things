import tkinter as tk

root = tk.Tk()
root.title('Calculator')
root.resizable(False, False)



def buttonTrigger(input):
    global placeholder_equation
    placeholder_equation = placeholder_equation + str(input)
    equation_var.set(placeholder_equation)

def evaluate():
    global placeholder_equation

    try:
        total = str(eval(placeholder_equation))
        print(f'History: \' {placeholder_equation} \'')
        placeholder_equation = total
        print(f'= {total}\n')
        equation_var.set(total)
        
    except ZeroDivisionError:
        print(f'History: \' {placeholder_equation} \'')
        placeholder_equation = ''
        equation_var.set('[ZERO DIVSION ERROR]')
        print('[ZERO DIVSION ERROR]')
    except SyntaxError:
        print(f'History: \' {placeholder_equation} \'')
        placeholder_equation = ''
        equation_var.set('[SYNTAX ERROR]')
        print('[SYNTAX ERROR]')

def clear():
    global placeholder_equation
    placeholder_equation = ''
    equation_var.set('0')


#Label Equation
placeholder_equation = ''
equation_var = tk.StringVar(value = 'Benedettos©')
equation_label = tk.Label(root, textvariable = equation_var, height = 2,width = 14, background = 'black', foreground='white', font = '(Times), 14')
equation_label.pack(ipadx=38)

class Buttons:
    bttnframe = tk.Frame(root)
    b9 = tk.Button(bttnframe, text = '9', height=2, width=7, command = lambda: buttonTrigger('9'), fg = '#E6ecec', bg = '#404040')
    b8 = tk.Button(bttnframe, text = '8', height=2, width=7, command = lambda: buttonTrigger('8'), fg = '#E6ecec', bg = '#404040')
    b7 = tk.Button(bttnframe, text = '7', height=2, width=7, command = lambda: buttonTrigger('7'), fg = '#E6ecec', bg = '#404040')

    b6 = tk.Button(bttnframe, text = '6', height=2, width=7, command = lambda: buttonTrigger('6'), fg = '#E6ecec', bg = '#404040')
    b5 = tk.Button(bttnframe, text = '5', height=2, width=7, command = lambda: buttonTrigger('5'), fg = '#E6ecec', bg = '#404040')
    b4 = tk.Button(bttnframe, text = '4', height=2, width=7, command = lambda: buttonTrigger('4'), fg = '#E6ecec', bg = '#404040')

    b3 = tk.Button(bttnframe, text = '3', height=2, width=7, command = lambda: buttonTrigger('3'), fg = '#E6ecec', bg = '#404040')
    b2 = tk.Button(bttnframe, text = '2', height=2, width=7, command = lambda: buttonTrigger('2'), fg = '#E6ecec', bg = '#404040')
    b1 = tk.Button(bttnframe, text = '1', height=2, width=7, command = lambda: buttonTrigger('1'), fg = '#E6ecec', bg = '#404040')

    b0 = tk.Button(bttnframe, text = '0', height=2, width=7, command = lambda: buttonTrigger('0'), fg = '#E6ecec', bg = '#404040')
    bp1 = tk.Button(bttnframe, text = '(', height=2, width=7, command = lambda: buttonTrigger('('), fg = '#E6ecec', bg = '#404040')
    bp2 = tk.Button(bttnframe, text = ')', height=2, width=7, command = lambda: buttonTrigger(')'), fg = '#E6ecec', bg = '#404040')

    bdiv = tk.Button(bttnframe, text = '/', height=2, width=7, command = lambda: buttonTrigger('/'), fg = '#E6ecec', bg = '#272727')
    bmult = tk.Button(bttnframe, text = '*', height=2, width=7, command = lambda: buttonTrigger('*'), fg = '#E6ecec', bg = '#272727')
    bsub = tk.Button(bttnframe, text = '-', height=2, width=7, command = lambda: buttonTrigger('-'), fg = '#E6ecec', bg = '#272727')
    badd = tk.Button(bttnframe, text = '+', height=2, width=7, command = lambda: buttonTrigger('+'), fg = '#E6ecec', bg = '#272727')

    bottom_frame = tk.Frame(root)
    bdeci = tk.Button(bottom_frame, text = '.', height=2, width=7, command = lambda: buttonTrigger('.'), fg = '#E6ecec', bg = '#404040')
    bclear = tk.Button(bottom_frame, text = 'C', height=2, width=7, command = clear, fg = '#E6ecec', bg = '#FF6E00')
    bequals = tk.Button(bottom_frame, text = '=', height=2, width=14, command = evaluate, fg = '#404040', bg = '#A6a6a6')

    bttnframe.pack()
    b9.grid(row=1, column=2)
    b8.grid(row=1, column=1)
    b7.grid(row=1, column=0)

    b6.grid(row=2, column=2)
    b5.grid(row=2, column=1)
    b4.grid(row=2, column=0)

    b3.grid(row=3, column=2)
    b2.grid(row=3, column=1)
    b1.grid(row=3, column=0)

    b0.grid(row=4, column=1)
    bp1.grid(row=4, column=0)
    bp2.grid(row=4, column=2)

    bdiv.grid(row=1, column=4)
    bmult.grid(row=2, column=4)
    bsub.grid(row=3, column=4)
    badd.grid(row=4, column=4)

    bdeci.pack(side = 'left')
    bequals.pack(side = 'left', ipadx=5)
    bclear.pack(side = 'left')
    bottom_frame.pack()



root.mainloop()
