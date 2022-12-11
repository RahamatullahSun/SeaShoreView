GLfloat position2 = -0.7f;
GLfloat speedn = 0.015f;

void update2(int value){

    if(position2 >1.4)
        position2 = -1.0f;

    position2 += speedn;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void plane(){
    glPushMatrix();
   glTranslatef(position2,0.0f, 0.0f);

    //main body
    glBegin(GL_POLYGON);
            glColor3ub(255, 212, 128);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.31f, 0.715f);
        glVertex2f(0.32f, 0.705f);
        glVertex2f(0.33f, 0.695f);
        glVertex2f(0.34f, 0.683f);
        glVertex2f(0.36f, 0.67f);
        glVertex2f(0.37f, 0.66f);
        glVertex2f(0.376f, 0.64f);
        glVertex2f(0.37f, 0.63f);
            glColor3ub(255, 187, 51);
        glVertex2f(0.3f, 0.605f);
        glVertex2f(0.07f, 0.6f);
        glVertex2f(0.05f, 0.605f);
        glVertex2f(0.03f, 0.610f);
        glVertex2f(0.0f, 0.615f);
        glVertex2f(-0.02f, 0.620f);
        glVertex2f(-0.05f, 0.628f);
        glVertex2f(-0.075f, 0.636f);
        glVertex2f(-0.085f, 0.645f);
        glVertex2f(-0.092f, 0.645f);
        glVertex2f(-0.1f, 0.658f);
        glVertex2f(-0.13f, 0.665f);
        glVertex2f(-0.11f, 0.680f);
        glVertex2f(-0.1f, 0.688f);
        glVertex2f(-0.05f, 0.7f);
        glVertex2f(-0.04f, 0.71f);
	glEnd();

    //Back stand
    glBegin(GL_POLYGON);
            glColor3ub(230, 138, 0);
        glVertex2f(-0.13f, 0.68f);
            glColor3ub(255, 194, 102);
        glVertex2f(-0.045f, 0.680f);
        glVertex2f(-0.04f, 0.67f);
        glVertex2f(-0.045f, 0.66f);
        glVertex2f(-0.13f, 0.66f);
        glVertex2f(-0.135f, 0.67f);
	glEnd();

	//back rudder
    glBegin(GL_POLYGON);
            glColor3ub(255, 133, 102);
        glVertex2f(-0.12f, 0.83f);
        glVertex2f(-0.1f, 0.828f);
        glVertex2f(-0.096f, 0.825f);
        glVertex2f(-0.086f, 0.820f);
        glVertex2f(-0.074f, 0.810f);
        glVertex2f(-0.045f, 0.74f);
        glVertex2f(-0.043f, 0.720f);
        glVertex2f(0.01f, 0.72f);
            glColor3ub(255, 184, 77);
        glVertex2f(-0.085f, 0.693f);
	glEnd();

	//right wing
    glBegin(GL_QUADS);
            glColor3ub(255, 204, 153);
        glVertex2f(0.05f, 0.55f);
        glVertex2f(0.0f, 0.55f);
            glColor3ub(255, 166, 77);
        glVertex2f(0.1f, 0.62f);
        glVertex2f(0.2f, 0.62f);
	glEnd();

    //left wing
    glBegin(GL_QUADS);
            glColor3ub(255, 166, 77);
        glVertex2f(0.2f, 0.72f);
        glVertex2f(0.1f, 0.72f);
            glColor3ub(255, 204, 153);
        glVertex2f(0.0f, 0.78f);
        glVertex2f(0.08f, 0.78f);
	glEnd();

	//door
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(-0.01f, 0.68f);
        glVertex2f(0.0f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.0f, 0.64f);
        glVertex2f(-0.01f, 0.64f);
	glEnd();

    //side windows --- from LEFT_TO_RIGHT
    //1
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.03f, 0.68f);
        glVertex2f(0.02f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.02f, 0.66f);
        glVertex2f(0.03f, 0.66f);
	glEnd();
	//2
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.05f, 0.68f);
        glVertex2f(0.04f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.04f, 0.66f);
        glVertex2f(0.05f, 0.66f);
	glEnd();
	//3
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.07f, 0.68f);
        glVertex2f(0.06f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.06f, 0.66f);
        glVertex2f(0.07f, 0.66f);
	glEnd();
	//4
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.09f, 0.68f);
        glVertex2f(0.08f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.08f, 0.66f);
        glVertex2f(0.09f, 0.66f);
	glEnd();
	//5
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.11f, 0.68f);
        glVertex2f(0.10f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.10f, 0.66f);
        glVertex2f(0.11f, 0.66f);
	glEnd();
	//6
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.13f, 0.68f);
        glVertex2f(0.12f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.12f, 0.66f);
        glVertex2f(0.13f, 0.66f);
	glEnd();
	//7
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.15f, 0.68f);
        glVertex2f(0.14f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.14f, 0.66f);
        glVertex2f(0.15f, 0.66f);
	glEnd();
	//8
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.17f, 0.68f);
        glVertex2f(0.16f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.16f, 0.66f);
        glVertex2f(0.17f, 0.66f);
	glEnd();
	//9
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.19f, 0.68f);
        glVertex2f(0.18f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.18f, 0.66f);
        glVertex2f(0.19f, 0.66f);
	glEnd();
	//10
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.21f, 0.68f);
        glVertex2f(0.20f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.20f, 0.66f);
        glVertex2f(0.21f, 0.66f);
	glEnd();
	//11
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.23f, 0.68f);
        glVertex2f(0.22f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.22f, 0.66f);
        glVertex2f(0.23f, 0.66f);
	glEnd();
	//12
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.25f, 0.68f);
        glVertex2f(0.24f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.24f, 0.66f);
        glVertex2f(0.25f, 0.66f);
	glEnd();


	//front windows
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.34f, 0.68f);
        glVertex2f(0.33f, 0.67f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.31f, 0.694f);
        glVertex2f(0.32f, 0.705f);
	glEnd();

    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.327f, 0.670f);
        glVertex2f(0.31f, 0.662f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.295f, 0.69f);
        glVertex2f(0.309f, 0.693f);
	glEnd();


    glPopMatrix();
    glFlush();
}



void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
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
