#include <GL/gl.h>
#include <GL/glut.h>

void display(void);

int main()
{
    ///Need these Library Functions for OpenGL
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Hello Rectangle");
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);


    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}

void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);

    glColor3f (0.7, 1.0, 0.0);

    glVertex3f (0.25, 0.25, 0.0);
    glVertex3f (0.75, 0.25, 0.0);
    glVertex3f (0.75, 0.75, 0.0);
    glVertex3f (0.25, 0.75, 0.0);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f (0.0, 0.0, 01.0);

    glVertex3f (0.25, 0.75, 0.0);
    glVertex3f (0.75, 0.75, 0.0);
    glVertex3f (0.50, 0.95, 0.0);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f (1.0, 1.0, 1.0);

    glVertex3f (0.45, 0.25, 0.0);
    glVertex3f (0.55, 0.25, 0.0);
    glVertex3f (0.55, 0.60, 0.0);
    glVertex3f (0.45, 0.60, 0.0);


    glEnd();

    glBegin(GL_POLYGON);

    glColor3f (1.0, 0.0, 0.0);

    glVertex3f (0.60, 0.50, 0.0);
    glVertex3f (0.70, 0.50, 0.0);
    glVertex3f (0.70, 0.60, 0.0);
    glVertex3f (0.60, 0.60, 0.0);


    glEnd();



    glBegin(GL_POLYGON);

    glColor3f (1.0, 1.0, 0.0);

    glVertex3f (0.30, 0.50, 0.0);
    glVertex3f (0.40, 0.50, 0.0);
    glVertex3f (0.40, 0.60, 0.0);
    glVertex3f (0.30, 0.60, 0.0);


    glEnd();

 glBegin(GL_POLYGON);

    glColor3f (1.0, 0.7, 1.0);

    glVertex3f (0.15, 0.15, 0.0);
    glVertex3f (0.85, 0.15, 0.0);
    glVertex3f (0.85, 0.25, 0.0);
    glVertex3f (0.15, 0.25, 0.0);


    glEnd();

  ///start processing buffered OpenGL routines
    glutSwapBuffers ();

}
