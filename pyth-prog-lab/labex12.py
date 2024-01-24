def resist():
	print("you cant escape fate")
def what():
	x=et.get()
	print(x*3)

from tkinter import *
r=Tk()
r.geometry("640x400")
label1=Label(r,text="you gay ?")
label1.grid(row=0)
butt=Button(r,text="yes",command=resist)
butt.grid(row=1,column=0)
#butt.bind('<butt>',resist())
butt2=Button(r,text="yes",command=resist)
butt2.grid(row=1,column=1)
#butt2.bind('<butt2>',resist())
et=Entry(r,command=what)
mainloop()
