import sys
from enum import Enum
from OpenGL.GL import *
from PyQt6 import QtWidgets, uic


class Mode(Enum):
    POINTS = GL_POINTS
    LINES = GL_LINES
    LINE_STRIP = GL_LINE_STRIP
    LINE_LOOP = GL_LINE_LOOP
    TRIANGLES = GL_TRIANGLES
    TRIANGLE_STRIP = GL_TRIANGLE_STRIP
    TRIANGLE_FAN = GL_TRIANGLE_FAN
    QUADS = GL_QUADS
    QUAD_STRIP = GL_QUAD_STRIP
    POLYGON = GL_POLYGON


def configure_window(win):
    mode_box = win.modeBox
    display = win.mainGLWidget
    reset = win.resetButton

    mode_box.currentIndexChanged.connect(lambda index: display.set_mode(mode_box.itemData(index)))
    for mode in Mode:
        mode_box.addItem(mode.name, mode.value)
    reset.clicked.connect(lambda: display.clear_vertexes())


if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    window = uic.loadUi('main.ui')
    configure_window(window)
    window.show()
    sys.exit(app.exec())
