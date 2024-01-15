import tkinter as tk
import ttkbootstrap as ttk

#WINDOW
window = ttk.Window(themename = 'darkly')
window.geometry('500x300')
window.title('Temperature Converter')

#Convert Function
def Convert():
    Celcius = temp_int.get()
    Fahrenheit = (Celcius * 9/5) + 32
    Kelvin = Celcius + 273.15
    output_str.set(f'Conversions:\n{Fahrenheit} °F | {Kelvin} K')

#Title
title_label = ttk.Label(
    master = window, 
    font = 'Calibri 21 bold', 
    text = 'Celcius to Fahrenheit & Kelvin')
title_label.pack(pady = 10)

#Input
input_frame = ttk.Frame(master = window)
temp_int = ttk.IntVar()
temp_entry = ttk.Entry(master = input_frame, textvariable = temp_int)
convert_button = ttk.Button(master = input_frame, text = 'CONVERT', command = Convert)

input_frame.pack(pady = 20)
temp_entry.pack(side = 'left')
convert_button.pack()

#Output
output_str = ttk.StringVar()
output_label = ttk.Label(
    master = window,
    font = 'Calibri 16 bold',
    textvariable = output_str,
    justify = 'center')
output_label.pack(pady = 20)

#LOOP
window.mainloop()
