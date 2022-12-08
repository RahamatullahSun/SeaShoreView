#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

//----ALL--Rivers----
void dayRiver(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(214, 234, 248);
    glVertex2f(-1.0f, -0.3f); //down left
        glColor3ub(36, 113, 163);
	glVertex2f(-1.0f, 0.2f); //top left
        glColor3ub(36, 113, 163);
	glVertex2f(1.0f, 0.2f); //top right
        glColor3ub(214, 234, 248);
	glVertex2f(1.0f, -0.08f); //down right

	glEnd();
}

void eveningRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(191, 201, 202);

    glVertex2f(-1.0f, -0.4f);
        glColor3ub(93, 109, 126); //color mixing
	glVertex2f(-1.0f, 0.2f);
        glColor3ub(133, 146, 158); //color mixing
	glVertex2f(1.0f, 0.2f);
        glColor3ub(214, 234, 248); //color mixing
	glVertex2f(1.0f, -0.15f);

	glEnd();
}

void nightRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(21, 67, 96);

    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.2f);
	glVertex2f(1.0f, 0.2f);
    glColor3ub(133, 193, 233); //color mixing
	glVertex2f(1.0f, -0.15f);

	glEnd();
}

void rainyRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(21, 67, 96);

    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.2f);
        glColor3ub(153, 163, 164); //color mixing
	glVertex2f(1.0f, 0.2f);
	glVertex2f(1.0f, -0.15f);

	glEnd();
}

//-----All---sky-----//

void daySky(){
    //GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(84, 153, 199); //up left corner
    glVertex2f(-1.1f, 1.0f);
        glColor3ub(127, 179, 213); //up right corner
	glVertex2f(1.1f, 1.0f);
        glColor3ub(251, 252, 252); //color mixing
	glVertex2f(1.1f, -0.1f);
        glColor3ub(251, 252, 252); //color mixing
	glVertex2f(-1.1f, -0.4f);

	glEnd();
}

void eveningSky(){
    //GL_QUADS
    glBegin(GL_QUADS);
    glColor4f(0.8f, 0.7f, 0.5f, 1.0f);
    glVertex2f(-1.1f, 1.0f);
        glColor3ub(235, 222, 240); //color mixing
	glVertex2f(1.1f, 1.0f);
        glColor3ub(250, 215, 160); //color mixing
	glVertex2f(1.1f, -0.1f);
        glColor3ub(215, 189, 226); //color mixing
	glVertex2f(-1.1f, -0.4f);
	glEnd();
}

void rainySky(){
    //GL_QUADS
    glBegin(GL_QUADS);
    glColor3ub(242, 243, 244);
    glVertex2f(-1.1f, 1.0f);
        glColor3ub(178, 186, 187); //color mixing
	glVertex2f(1.1f, 1.0f);
        glColor3ub(113, 125, 126); //color mixing
	glVertex2f(1.1f, -0.1f);
        glColor3ub(97, 106, 107); //color mixing
	glVertex2f(-1.1f, -0.4f);

	glEnd();
}

void chair(){

    //Chair Umbrella
    glBegin(GL_TRIANGLES);
        glColor3ub(188 ,143 ,143);
	glVertex2f(1.0f,  -0.2f);
	glVertex2f(0.4f, -0.2);
	glVertex2f(0.7f, 0.1f);
	glEnd();

    //Chair Umbrella Stand
    glBegin(GL_QUADS);
        glColor3ub(139, 69, 19);
	glVertex2f(0.715f, -0.7f);
	glVertex2f(0.685f, -0.7f);
	glVertex2f(0.685f, -0.2f);
	glVertex2f(0.715f, -0.2f);
	glEnd();


	//----------------chair------------
	//sit
    glBegin(GL_QUADS);
        glColor3ub(205 ,186 ,150);
	glVertex2f(0.65f, -0.5f);
	glVertex2f(0.4f, -0.5f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.6f, -0.55f);
	glEnd();
	//sit left label
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.55f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.58);
	glEnd();
	//sit back label
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.65f, -0.50f);
	glVertex2f(0.65f, -0.53f);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.55f);
	glEnd();
	//chair relaxer
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.65f, -0.53f);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.63f, -0.48);
    glVertex2f(0.68f, -0.44);
	glEnd();

    //chair legs - left front
     glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.35f, -0.58);
	glVertex2f(0.37f, -0.58f);
	glVertex2f(0.37f, -0.65f);
	glVertex2f(0.35f, -0.65);
	glEnd();
	//chair legs - right front
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.4f, -0.58);
	glVertex2f(0.42f, -0.58f);
	glVertex2f(0.42f, -0.62f);
	glVertex2f(0.4f, -0.62);
	glEnd();
    //chair legs - right back
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.645f, -0.52f);
	glVertex2f(0.645f, -0.6f);
	glVertex2f(0.625f, -0.6f);
	glVertex2f(0.625f, -0.52);
	glEnd();
    //chair legs - left back
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.65f);
	glVertex2f(0.58f, -0.65f);
	glVertex2f(0.58f, -0.58);
	glEnd();

}

//All==Beach==//
void dayBeach(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(244, 236, 252);
    glVertex2f(-1.0f, -0.3f); //top left
        glColor3ub(214, 234, 248);
    glVertex2f(1.0f, -0.08f); //top right
        glColor3ub(246, 221, 204);
	glVertex2f(1.0f, -1.0f); //down right
        glColor3ub(246, 221, 204);
	glVertex2f(-1.0f, -1.0f); //down left

	glEnd();
}

void nightBeach(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(234, 237, 237);
    glVertex2f(-1.0f, -0.4f); //top left
        glColor3ub(234, 237, 237);
    glVertex2f(1.0f, -0.1f); //top right
        glColor3ub(171, 178, 185);
	glVertex2f(1.0f, -1.0f); //down right
        glColor3ub(171, 178, 185);
	glVertex2f(-1.0f, -1.0f); //down left

	glEnd();
}

void eveningBeach(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(213, 219, 219);
    glVertex2f(-1.0f, -0.4f); //top left
        glColor3ub(213, 219, 219);
    glVertex2f(1.0f, -0.15f); //top right
        glColor3ub(246, 221, 204);
	glVertex2f(1.0f, -1.0f); //down right
        glColor3ub(246, 221, 204);
	glVertex2f(-1.0f, -1.0f); //down left

	glEnd();
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


void star(){
//star-1
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.3f, 0.7f);
        glVertex2f(0.32f, 0.7f);
        glVertex2f(0.31f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.32f, 0.72f);
        glVertex2f(0.31f, 0.69f);
	glEnd();

    //star-2
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.5f, 0.7f);
        glVertex2f(0.52f, 0.7f);
        glVertex2f(0.51f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.5f, 0.72f);
        glVertex2f(0.52f, 0.72f);
        glVertex2f(0.51f, 0.69f);
	glEnd();

    //star-3
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.8f);
        glVertex2f(0.42f, 0.8f);
        glVertex2f(0.41f, 0.835f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.82f);
        glVertex2f(0.42f, 0.82f);
        glVertex2f(0.41f, 0.79f);
	glEnd();

    //star-4
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.4f);
        glVertex2f(0.42f, 0.4f);
        glVertex2f(0.41f, 0.435f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.42f);
        glVertex2f(0.42f, 0.42f);
        glVertex2f(0.41f, 0.39f);
	glEnd();

    //star-5
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.8f, 0.4f);
        glVertex2f(0.82f, 0.4f);
        glVertex2f(0.81f, 0.435f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.8f, 0.42f);
        glVertex2f(0.82f, 0.42f);
        glVertex2f(0.81f, 0.39f);
	glEnd();

    //star-6
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.9f, 0.6f);
        glVertex2f(0.92f, 0.6f);
        glVertex2f(0.91f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.9f, 0.62f);
        glVertex2f(0.92f, 0.62f);
        glVertex2f(0.91f, 0.59f);
	glEnd();

    //star-7
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.6f);
        glVertex2f(-0.92f, 0.6f);
        glVertex2f(-0.91f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.62f);
        glVertex2f(-0.92f, 0.62f);
        glVertex2f(-0.91f, 0.59f);
	glEnd();

    //star-8
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.5f, 0.7f);
        glVertex2f(-0.52f, 0.7f);
        glVertex2f(-0.51f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.5f, 0.72f);
        glVertex2f(-0.52f, 0.72f);
        glVertex2f(-0.51f, 0.69f);
	glEnd();

    //star-9
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.7f, 0.7f);
        glVertex2f(-0.72f, 0.7f);
        glVertex2f(-0.71f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.7f, 0.72f);
        glVertex2f(-0.72f, 0.72f);
        glVertex2f(-0.71f, 0.69f);
	glEnd();

    //star-10
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.8f, 0.5f);
        glVertex2f(-0.82f, 0.5f);
        glVertex2f(-0.81f, 0.535f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.8f, 0.52f);
        glVertex2f(-0.82f, 0.52f);
        glVertex2f(-0.81f, 0.49f);
	glEnd();

    //star-11
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.2f, 0.6f);
        glVertex2f(-0.22f, 0.6f);
        glVertex2f(-0.21f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.2f, 0.62f);
        glVertex2f(-0.22f, 0.62f);
        glVertex2f(-0.21f, 0.59f);
	glEnd();

    //star-12
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(-0.02f, 0.7f);
        glVertex2f(-0.01f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(-0.02f, 0.72f);
        glVertex2f(-0.01f, 0.69f);
	glEnd();

    //star-13
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.05f, 0.9f);
        glVertex2f(0.07f, 0.9f);
        glVertex2f(0.06f, 0.935f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.05f, 0.92f);
        glVertex2f(0.07f, 0.92f);
        glVertex2f(0.06f, 0.89f);
	glEnd();

    //star-14
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.9f);
        glVertex2f(-0.92f, 0.9f);
        glVertex2f(-0.91f, 0.935f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.92f);
        glVertex2f(-0.92f, 0.92f);
        glVertex2f(-0.91f, 0.89f);
	glEnd();

    //star-15
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.7f, 0.8f);
        glVertex2f(0.72f, 0.8f);
        glVertex2f(0.71f, 0.835f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.7f, 0.82f);
        glVertex2f(0.72f, 0.82f);
        glVertex2f(0.71f, 0.79f);
	glEnd();


}

//---------calling function-----------
// ------ All the days-----------------

void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //fornt();
    daySky();


    //sun
    glColor3ub(245, 176, 65);
	int j;
	GLfloat x=-0.8f; GLfloat y=0.9f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount+1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
			glColor3ub(245, 249, 10);
		}
	glEnd();

    dayRiver();
    dayBeach();
    chair();






	glFlush();  // Render now
}


void evening(){
	glClearColor(0.8f, 0.7f, 0.5f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //----front()--------------;







    glColor3ub(238 ,173,14);
	int j;
	GLfloat x=0.0f; GLfloat y=0.5f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount+1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
			glColor3ub(235, 152, 78);
		}
	glEnd();
	eveningBeach();
	eveningSky();
    eveningRiver();


    chair();



	glFlush();

}


void night() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);




    star();



    //------boat1-------------
    glBegin(GL_QUADS);
	glColor3ub(184,134,11);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.25f, 0.0f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139 ,69 ,19);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(0.1f,  0.2f);
	glVertex2f(0.2f, 0.04f);
	glVertex2f(0.1f, 0.04f);

	glEnd();


    //----------------moon--------
    glColor3ub(255, 255 ,255);
	int j;
	GLfloat x=0.8f; GLfloat y=0.9f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount+1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
			glColor3ub(215, 219, 221);
		}
	glEnd();

	//----------
	nightBeach();
    nightRiver();
    chair();

   glFlush();
}


void rain(){
     glClearColor(0.8f, 0.8f, 0.8f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);
    //fornt();




	glEnd();


	rainySky();
    rainyRiver();

    chair();






    glFlush();

}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
//----------------multiple view------------
    case 'd':
   glutDisplayFunc(day);

   glutPostRedisplay();

    break;
    case 'n':
   glutDisplayFunc(night);

    glutPostRedisplay();
    break;

    case 'e':
   glutDisplayFunc(evening);

    glutPostRedisplay();
    break;

    case 'r':
   glutDisplayFunc(rain);

    glutPostRedisplay();
    break;



//-----speed control----

    case 'a'://--------stop----------

    break;
    case 's'://--------start-------------


    break;
    glutPostRedisplay();
	}

}




/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(900,600); // Set the window's initial width & height
	glutInitWindowPosition(50, 50);

	glutCreateWindow("Day:d , Evening:e ,Night:n ,RainyDay:r ,Start:s ,Stop:a");

	glutDisplayFunc(day);
    init();
    glutKeyboardFunc(handleKeypress);




	glutMainLoop();
	return 0;

}
