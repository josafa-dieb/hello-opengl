#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>

void display() {
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_TRIANGLES);
  glColor3f(1.0, 0.0, 0.0);
  glVertex2f(-1.0, -1.0);
  glColor3f(0.0, 1.0, 0.0);
  glVertex2f(1.0, -1.0);
  glColor3f(0.0, 0.0, 1.0);
  glVertex2f(0.0, 1.0);
  glEnd();
  glFlush();
}

int main(int argc, char **argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(400, 400);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("OpenGL 1.0 Test");
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
