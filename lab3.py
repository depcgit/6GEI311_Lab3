import sys
from tkinter import *
from tkinter import filedialog as fd

sys.path.append(
    "C:/Users/david/Documents/GitHub/6GEI311_Lab3/x64/Release")

import Lab3

def stop():
    Lab3.Quit()
    root.destroy()


class UI(Frame):
    def __init__(self, parent=None, **options):
        Frame.__init__(self, parent, **options)
        self.pack()

        self.buttons = {}
        self.buttons["Open File"] = Button(
            self, text="Ouvrir un fichier", command=lambda: self.openFile())
        self.buttons["Play Pause"] = Button(
            self, text="Play / Pause", state=DISABLED, command=Lab3.PlayPause)
        self.buttons["Accelerate"] = Button(
            self, text="Acelerate", state=DISABLED, command=Lab3.Accelerate)
        self.buttons["Replay"] = Button(
            self, text="Replay", state=DISABLED, command=Lab3.Replay)
        self.buttons["Quit"] = Button(self, text="Quit", command=stop)

        for button in self.buttons:
            self.buttons[button].pack(side=LEFT, fill=BOTH)

    def openFile(self):
        path = fd.askopenfilename()
        Lab3.Start("", path)
        self.buttons["Open File"].config(state=DISABLED)
        self.buttons["Play Pause"].config(state=NORMAL)
        self.buttons["Accelerate"].config(state=NORMAL)
        self.buttons["Replay"].config(state=NORMAL)


# https://stackoverflow.com/questions/111155/how-do-i-handle-the-window-close-event-in-tkinter
root = Tk()
UI(root)
root.protocol("WM_DELETE_WINDOW", stop)
root.mainloop()
