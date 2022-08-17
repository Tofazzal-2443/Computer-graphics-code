#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	//Set colour to black
	glColor3f(0.0, 0.0, 0.0);
	//Adjust the point size
	glPointSize(5.0);

	//Set colour to red
	glColor3f(1.0, 0.0, 0.0);

	// Draw an outlined triangle
	glBegin(GL_LINES);

		glVertex2i(100, 200);
		glVertex2i(100,0);

		glVertex2i(100, 0);
		glVertex2i(300,0);

		glVertex2i(300, 0);
		glVertex2i(300,200);

		glVertex2i(300,200);
		glVertex2i(100,200);

        glColor3f(0.0, 0.0, 1.0);
		glVertex2i(200,300);
		glVertex2i(100,200);

		//glVertex2i(100,200);
		//glVertex2i(300,200);

		glVertex2i(300,200);
		glVertex2i(200,300);

		glColor3f(0.0, 0.0, 1.0);
		glVertex2i(175,0);
		glVertex2i(225,0);

		glVertex2i(225,0);
		glVertex2i(225,175);

		glVertex2i(225,175);
		glVertex2i(175,175);

		glVertex2i(175,175);
		glVertex2i(175,0);

		glColor3f(0.2, 0.0, 1.0);
		glVertex2i(125,50);
		glVertex2i(150,50);

		glVertex2i(150,50);
		glVertex2i(150,100);

		glVertex2i(150,100);
		glVertex2i(125,100);

		glVertex2i(125,100);
		glVertex2i(125,50);

		glColor3f(0.2, 0.0, 1.0);
		glVertex2i(250,50);
		glVertex2i(275,50);

		glVertex2i(275,50);
		glVertex2i(275,100);

		glVertex2i(275,100);
		glVertex2i(250,100);

		glVertex2i(250,100);
		glVertex2i(250,50);




	glEnd();

	glFlush();	// Process all OpenGL routines
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(50, 100);				// Set window position
	glutInitWindowSize(400, 400);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
