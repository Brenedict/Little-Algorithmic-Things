import tkinter as tk
import ttkbootstrap as ttk

#Master Window
window = ttk.Window(themename = 'cyborg')
window.title('Clicker')
window.geometry('240x110')
x = 0

#Commands
class Commands:
    def add1():
        global x
        x += 1
        textvar.set(f"{x}")

    def add5():
        global x
        x += 5
        textvar.set(f"{x}")  
       
    def sub1():
        global x
        x -= 1
        textvar.set(f"{x}")  

    def sub5():
        global x
        x -= 5
        textvar.set(f"{x}")  

#Screen Output and text
textvar = ttk.StringVar()

counter_label = ttk.Label(master = window, textvariable = textvar, font = 'Calibri 24')
counter_label.config(anchor = 'center', foreground = 'lightblue', background = 'gray17', width = '10', )
counter_label.pack(pady = 10)


#Buttons
bttn_frame = ttk.Frame(master = window)
b1 = ttk.Button(master = bttn_frame ,text = '+1', width = 4, command = Commands.add1, style = 'outline')
b2 = ttk.Button(master = bttn_frame ,text = '+5', width = 4, command = Commands.add5, style = 'outline')
b3 = ttk.Button(master = bttn_frame ,text = '-1', width = 4, command = Commands.sub1, style = 'outline danger')
b4 = ttk.Button(master = bttn_frame ,text = '-5', width = 4, command = Commands.sub5, style = 'outline danger')

bttn_frame.pack()
b1.pack(side = 'left', padx = 5)
b2.pack(side = 'left', padx = 5)
b3.pack(side = 'left', padx = 5)
b4.pack(side = 'left', padx = 5)

#Mainloop
window.mainloop()
