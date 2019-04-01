#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <GL/glut.h>
static int submenu_id;
static int menu_id;
static int submenu_id1;
static int menu_id1;
int posX = 0, posY = 0, posZ = 0;
int AddX11=380,AddX22=400,AddX33=250,AddX44=130;
GLint AddX1=30;
GLint AddX2=0;
GLint AddX3=200;
GLint AddX4=0;
GLfloat gfPosX1=0;
GLfloat gfDeltaX1=5.0;
GLfloat gfPosX2=0;
GLfloat gfDeltaX2=5.0;
GLfloat gfPosX3=0;
GLfloat gfDeltaX3=5.0;
GLfloat gfPosX4=0;
GLfloat gfDeltaX4=5.0;
GLfloat gfPosX5=0;
GLfloat gfPosX6=0;
GLfloat gfPosX7=0;
GLfloat gfPosX8=0;
GLfloat gfPosX9=0;
GLfloat gfPosX10=0;
void screenkeyboard(unsigned char,int,int);
void endkeyboard(unsigned char,int,int);
//char name[]="PROJECT: 2D TRAVELLER GAME";
void display_string(int x, int y, char *string, int font)
{
    int len,i;
	//glColor3f(0.8,0.52,1.0);
	glColor3f(1.0,1.0,0.0);
	glRasterPos2f(x, y);
    len = (int) strlen(string);
    for (i = 0; i < len; i++) {
    if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);
	}

}

void display2(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

	glClearColor(0.0,0.0,0.0,0.0);
	display_string(210,550,"K.S. INSTITUTE OF TECHNOLOGY",1);
	display_string(215,500,"PROJECT: 2D TRAVELLER GAME",1);
	display_string(300,450,"Done By: Nikhil N. Prasad",2);
	display_string(300,420,"USN: 1KS13CS066",2);
	display_string(230,370,"UNDER THE GUIDANCE OF:",1);
	display_string(300,330,"Mrs. Sougandhika Narayan",2);
	display_string(300,300,"Asst. Prof., Dept. of CS&E",2);
	display_string(280,150,"USE (H) TO ACCESS HELP MENU",2);
	display_string(280,100,"USE (Q) TO EXIT THE GAME",2);
	display_string(280,50,"PRESS SPACE BAR TO PLAY",2);
	glutPostRedisplay();
	glutSwapBuffers();

}

void help_screen()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
glClearColor(0.0,0.0,0.0,0.0);
display_string(350,550,"HELP",1);
	display_string(200,475,"KEYBOARD",2);
	display_string(250,430,"USE ARROW KEYS FOR TRAVELLER MOVEMENT",3);
	display_string(250,410,"USE UP ARROW (^) TO MOVE TRAVELLER TOWARDS HIS GOAL",3);
	display_string(353,410,"|",3);
	display_string(250,390,"USE LEFT ARROW (<-) TO MOVE TRAVELLER TO THE LEFT",3);
	display_string(250,370,"USE RIGHT ARROW (->) TO MOVE TRAVELLER TO THE RIGHT",3);
	display_string(250,350,"USE (+) TO INCREASE THE SPEED OF THE SHARKS",3);
	display_string(250,330,"USE (-) TO DECREASE THE SPEED OF THE SHARKS",3);
	display_string(250,310,"USE (N) TO SWITCH TO NIGHT MODE",3);
	display_string(250,290,"USE (D) TO SWITCH TO DAY MODE",3);
	display_string(250,270,"USE (Q) TO EXIT",3);
	display_string(200,200,"MOUSE",2);
	display_string(250,160,"USE RIGHT MOUSE BUTTON TO ACCESS MENU",3);
	display_string(280,50,"PRESS SPACE BAR TO ENTER",2);
	glutPostRedisplay();
	glutSwapBuffers();
}

void timer(int val)
{
    glutPostRedisplay();
}
void reshape(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
        glOrtho(-2.0,2.0,-2.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);
    else
        glOrtho(-2.0*(GLfloat)w/(GLfloat)h,2.0*(GLfloat)w/(GLfloat)h,-2.0,2.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
    glutPostRedisplay();
}
void display_win()
{
    glLineWidth(5);
 glClear(GL_COLOR_BUFFER_BIT);
 glPushMatrix();
 glColor3f(0.0,0.0,0.0);
 glTranslated(10,400,0);
 glScaled(0.5,0.5,0);
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'C');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'N');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'G');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'R');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'A');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'U');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'L');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'A');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'I');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'N');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'S');
 glPopMatrix();
 glPushMatrix();
 glColor3f(0.0,0.0,0.0);
 glTranslated(200,250,0);
 glScaled(0.5,0.5,0);
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'Y');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'U');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'W');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'I');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'N');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'!');
 glPopMatrix();
 glPushMatrix();
 glColor3f(0.0,0.0,0.0);
 glTranslated(175,50,0);
 glScaled(0.3,0.3,0);
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'U');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'S');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'(');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'Q');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)')');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'X');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'I');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
 glPopMatrix();
 glutPostRedisplay();
 glutSwapBuffers();
}
void display_lose()
{
    glLineWidth(5);
 glClear(GL_COLOR_BUFFER_BIT);
 glPushMatrix();
 glColor3f(1.0,1.0,1.0);
 glTranslated(175,350,0);
 glScaled(0.5,0.5,0);
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'G');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'A');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'M');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'V');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'R');
 glPopMatrix();
 glPushMatrix();
 glColor3f(1.0,1.0,1.0);
 glTranslated(175,50,0);
 glScaled(0.3,0.3,0);
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'U');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'S');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'(');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'Q');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)')');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'X');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'I');
 glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
 glPopMatrix();
 glutPostRedisplay();
 glutSwapBuffers();
}
void traveller()
{
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(380.0,20.0);
    glVertex2f(380.0,40.0);
    glVertex2f(400.0,40.0);
    glVertex2f(400.0,20.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(380.0,40.0);
    glVertex2f(360.0,40.0);
    glVertex2f(380.0,20.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(400.0,40.0);
    glVertex2f(420.0,40.0);
    glVertex2f(400.0,20.0);
    glEnd();
}
void river_banks()
{
       //Boat Bank
{
 glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2d(0,0);
glVertex2d(0,20);
glVertex2d(800,20);
glVertex2d(800,0);
glEnd();
}
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2d(0,500);
glVertex2d(800,500);
glVertex2d(800,600);
glVertex2d(0,600);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(120,520-10);
glVertex2f(120,560-10);
glVertex2f(160,560-10);
glVertex2f(160,520-10);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(120,560-10);
glVertex2f(140,590-10);
glVertex2f(160,560-10);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(133,520-10);
glVertex2f(133,540-10);
glVertex2f(143,540-10);
glVertex2f(143,520-10);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(145,545-10);
glVertex2f(145,555-10);
glVertex2f(155,555-10);
glVertex2f(155,545-10);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(122,562-10);
glVertex2f(122,588-10);
glVertex2f(132,588-10);
glVertex2f(132,578-10);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(120-60,520);
glVertex2f(120-60,560);
glVertex2f(160-60,560);
glVertex2f(160-60,520);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(120-60,560);
glVertex2f(140-60,590);
glVertex2f(160-60,560);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(133-60,520);
glVertex2f(133-60,540);
glVertex2f(143-60,540);
glVertex2f(143-60,520);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(145-60,545);
glVertex2f(145-60,555);
glVertex2f(155-60,555);
glVertex2f(155-60,545);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(122-60,562);
glVertex2f(122-60,588);
glVertex2f(132-60,588);
glVertex2f(132-60,578);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(120+60,520);
glVertex2f(120+60,560);
glVertex2f(160+60,560);
glVertex2f(160+60,520);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(120+60,560);
glVertex2f(140+60,590);
glVertex2f(160+60,560);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(133+60,520);
glVertex2f(133+60,540);
glVertex2f(143+60,540);
glVertex2f(143+60,520);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(145+60,545);
glVertex2f(145+60,555);
glVertex2f(155+60,555);
glVertex2f(155+60,545);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(122+60,562);
glVertex2f(122+60,588);
glVertex2f(132+60,588);
glVertex2f(132+60,578);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(120+520,520-10);
glVertex2f(120+520,560-10);
glVertex2f(160+520,560-10);
glVertex2f(160+520,520-10);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(120+520,560-10);
glVertex2f(140+520,590-10);
glVertex2f(160+520,560-10);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(133+520,520-10);
glVertex2f(133+520,540-10);
glVertex2f(143+520,540-10);
glVertex2f(143+520,520-10);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(145+520,545-10);
glVertex2f(145+520,555-10);
glVertex2f(155+520,555-10);
glVertex2f(155+520,545-10);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(122+520,562-10);
glVertex2f(122+520,588-10);
glVertex2f(132+520,588-10);
glVertex2f(132+520,578-10);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(120-60+520,520);
glVertex2f(120-60+520,560);
glVertex2f(160-60+520,560);
glVertex2f(160-60+520,520);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(120-60+520,560);
glVertex2f(140-60+520,590);
glVertex2f(160-60+520,560);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(133-60+520,520);
glVertex2f(133-60+520,540);
glVertex2f(143-60+520,540);
glVertex2f(143-60+520,520);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(145-60+520,545);
glVertex2f(145-60+520,555);
glVertex2f(155-60+520,555);
glVertex2f(155-60+520,545);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(122-60+520,562);
glVertex2f(122-60+520,588);
glVertex2f(132-60+520,588);
glVertex2f(132-60+520,578);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(120+60+520,520);
glVertex2f(120+60+520,560);
glVertex2f(160+60+520,560);
glVertex2f(160+60+520,520);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(120+60+520,560);
glVertex2f(140+60+520,590);
glVertex2f(160+60+520,560);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(133+60+520,520);
glVertex2f(133+60+520,540);
glVertex2f(143+60+520,540);
glVertex2f(143+60+520,520);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(145+60+520,545);
glVertex2f(145+60+520,555);
glVertex2f(155+60+520,555);
glVertex2f(155+60+520,545);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(122+60+520,562);
glVertex2f(122+60+520,588);
glVertex2f(132+60+520,588);
glVertex2f(132+60+520,578);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);

    //G
glVertex2d(270,570);
glVertex2d(320,570);
glVertex2d(270,570);
glVertex2d(270,520);
glVertex2d(270,520);
glVertex2d(320,520);
glVertex2d(320,520);
glVertex2d(320,540);
glVertex2d(320,540);
glVertex2d(295,540);
//O
glVertex2d(340,570);
glVertex2d(390,570);
glVertex2d(340,570);
glVertex2d(340,520);
glVertex2d(340,520);
glVertex2d(390,520);
glVertex2d(390,570);
glVertex2d(390,520);
//A
glVertex2d(410,570);
glVertex2d(460,570);
glVertex2d(410,570);
glVertex2d(410,520);
glVertex2d(460,570);
glVertex2d(460,520);
glVertex2d(410,545);
glVertex2d(460,545);
//L
glVertex2d(480,570);
glVertex2d(480,520);
glVertex2d(480,520);
glVertex2d(530,520);
glEnd();
}

void obstacles()
{
    int i;
    glColor3f(0.52,0.37,0.26);
//glColor3f(0.36,0.25,0.20);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX5,0,0);

    for(i=0;i<8;i++)
   {
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,20.0);
    glVertex2f(20,20.0);
    glVertex2f(20.0,0.0);
    glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();
    glPopMatrix();
    glFlush();

    glColor3f(0.52,0.37,0.26);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX6,0,0);

    for(i=0;i<8;i++)
   {
    glBegin(GL_POLYGON);
    glVertex2f(750.0,0);
    glVertex2f(750.0,20.0);
    glVertex2f(770.0,20.0);
    glVertex2f(770.0,0);
    glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();
    glPopMatrix();
    glFlush();

    glColor3f(0.52,0.37,0.26);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX7,0,0);

    for(i=0;i<7;i++)
   {
    glBegin(GL_POLYGON);
    glVertex2f(0+150,0+30);
    glVertex2f(0+150,20.0+30);
    glVertex2f(20+150,20.0+30);
    glVertex2f(20+150,0.0+30);
    glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();
    glPopMatrix();
    glFlush();

    glColor3f(0.52,0.37,0.26);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX8,0,0);

    for(i=0;i<7;i++)
   {
    glBegin(GL_POLYGON);
    glVertex2f(750.0-150,0+30);
    glVertex2f(750.0-150,20.0+30);
    glVertex2f(770.0-150,20.0+30);
    glVertex2f(770.0-150,0+30);
    glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();
    glPopMatrix();
    glFlush();

    glColor3f(0.52,0.37,0.26);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX9,0,0);
    for(i=0;i<6;i++)
   {
    glBegin(GL_POLYGON);
    glVertex2f(0+280,0+60);
    glVertex2f(0+280,20.0+60);
    glVertex2f(20+280,20.0+60);
    glVertex2f(20+280,0+60);
    glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();
    glPopMatrix();
    glFlush();

    glColor3f(0.52,0.37,0.26);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX10,0,0);

    for(i=0;i<6;i++)
   {
    glBegin(GL_POLYGON);
    glVertex2f(750.0-275,0+60);
    glVertex2f(750.0-275,20.0+60);
    glVertex2f(770.0-275,20.0+60);
    glVertex2f(770.0-275,0+60);
    glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();
    glPopMatrix();
    glFlush();
}

void sharks()
{
    int i;
    //Shark Animation 1
glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX1,0,0);

    for(i=0;i<8;i++)
   {
       glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,20.0);
    glVertex2f(10,20.0);
    glVertex2f(10,30.0);
    glVertex2f(20,20.0);
    glVertex2f(20.0,0.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0,10.0);
    glVertex2f(-10,0.0);
    glVertex2f(-10,20.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(20,15.0);
    glVertex2f(30,10.0);
    glVertex2f(20.0,5.0);
    glEnd();
    glColor3f(1.0,1.0,1.0);
       glBegin(GL_POINTS);
       glVertex2i(17.0,17.0);
       glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();

    glPopMatrix();

    glFlush();
gfPosX1=gfPosX1+gfDeltaX1;
if(gfPosX1>=750.0||gfPosX1<=0.0)
    {
        gfPosX1=0.0;
        //gfDeltaX1=-gfDeltaX1;
    }

    //Shark Animation 2
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX2,0,0);

    for(i=0;i<8;i++)
   {
       glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(750.0,0);
    glVertex2f(750.0,20.0);
    glVertex2f(760.0,30.0);
    glVertex2f(760.0,20.0);
    glVertex2f(770.0,20.0);
    glVertex2f(770.0,0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(770.0,10.0);
    glVertex2f(780.0,20.0);
    glVertex2f(780.0,0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(740.0,10.0);
    glVertex2f(750.0,15.0);
    glVertex2f(750.0,5.0);
    glEnd();
    glColor3f(1.0,1.0,1.0);
       glBegin(GL_POINTS);
       glVertex2i(753.0,17.0);
       glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();

    glPopMatrix();
    glFlush();
    gfPosX2=gfPosX2-gfDeltaX2;
if(gfPosX2>=0.0||gfPosX2<=-750.0)
    {
        gfPosX2=0.0;
        //gfDeltaX2=-gfDeltaX2;
    }

    //Shark Animation 3
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX3,0,0);

    for(i=0;i<8;i++)
   {
       glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300,0);
    glVertex2f(300,20.0);
    glVertex2f(310.0,20.0);
    glVertex2f(310.0,30.0);
    glVertex2f(320,20.0);
    glVertex2f(320.0,0.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(300.0,10.0);
    glVertex2f(290.0,0);
    glVertex2f(290.0,20.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(320.0,15.0);
    glVertex2f(330.0,10.0);
    glVertex2f(320.0,5.0);
    glEnd();
    glColor3f(1.0,1.0,1.0);
       glBegin(GL_POINTS);
       glVertex2i(317.0,17.0);
       glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();

    glPopMatrix();
    glFlush();
    gfPosX3=gfPosX3+gfDeltaX3;
if(gfPosX3>=200.0||gfPosX3<=0.0)
    {
        gfPosX3=0.0;
        //gfDeltaX3=-gfDeltaX3;
    }

    //Shark Animation 4
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(20,50,0);
    glPushMatrix();
    glTranslatef(gfPosX4,0,0);

    for(i=0;i<8;i++)
   {
       glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(500,0);
    glVertex2f(500,20.0);
    glVertex2f(510,30.0);
    glVertex2f(510,20.0);
    glVertex2f(520,20.0);
    glVertex2f(520.0,0.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(520,10.0);
    glVertex2f(530,20.0);
    glVertex2f(530,0.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(490,10.0);
    glVertex2f(500,15.0);
    glVertex2f(500,5.0);
    glEnd();
    glColor3f(1.0,1.0,1.0);
       glBegin(GL_POINTS);
       glVertex2i(503.0,17.0);
       glEnd();
   glTranslatef(0,60,0);
   }
    glPopMatrix();

    glPopMatrix();
    glFlush();
    gfPosX4=gfPosX4-gfDeltaX4;
if(gfPosX4>=0.0||gfPosX4<=-200.0)
    {
        gfPosX4=0.0;
        //gfDeltaX4=-gfDeltaX4;
    }
//glutPostRedisplay();
 glutTimerFunc(10,timer,0);
glutSwapBuffers();
}

void collision()
{
    if(posY>=500)
       {
           glClearColor(0.0,1.0,0.0,0.0);
            glutDisplayFunc(display_win);
            glutKeyboardFunc(endkeyboard);
       }
   else if(posY!=0&&(posY/30)%2==1)
        {
        if((gfPosX1+AddX1)==(posX+AddX11))
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
            if((gfPosX2+AddX2)==(posX-AddX22))
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
            if((gfPosX3+AddX3)==(posX+AddX33))
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
            if((gfPosX4+AddX4)==(posX-AddX44))
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
            if(gfPosX5+30==posX+380)
            {
               glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
            if(gfPosX6==posX-360)
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
            if(gfPosX9==posX+280)
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
            if(gfPosX10==posX-100)
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
        }
        else if(posY!=0&&(posY/30)%2==0)
        {
            if(gfPosX7+180==posX+380)
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
            if(gfPosX8-180==posX-400)
            {
                glClearColor(0.0,0.0,1.0,0.0);
            glutDisplayFunc(display_lose);
            glutKeyboardFunc(endkeyboard);
            }
        }
    //printf("gfPosX1 = %f\n",gfPosX1);
    //printf("PosX = %d\n",posX);
    //printf("AddX1 = %d\n",AddX1);
    //printf("AddX11 = %d\n",AddX11);
}
void display1()
{
    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    traveller();
    glPopMatrix();
    collision();
    glFlush();

river_banks();
obstacles();
sharks();

    //Reference Lines
   /*glColor3f(0.52,0.37,0.26);
   glPushMatrix();
    for(i=0;i<8;i++)
   {
   glTranslatef(0,60,0);
   glBegin(GL_LINES);
   glVertex2d(30,0);
   glVertex2d(770,0);
   glEnd();
   glBegin(GL_POLYGON);
   glVertex2f(20,-10);
    glVertex2f(20,10.0);
    glVertex2f(40.0,10.0);
    glVertex2f(40.0,-10);
    glEnd();
    glBegin(GL_POLYGON);
   glVertex2f(770,-10);
    glVertex2f(770,10.0);
    glVertex2f(790.0,10.0);
    glVertex2f(790.0,-10);
    glEnd();
   }
   glPopMatrix();
glFlush(); */
}

void init1() //Day
{
    glClearColor(0.0, 0.0, 1.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,800.0,0.0,600.0);
    glLineWidth(2.0);
    glPointSize(2.0);
}
void init2()  //Night
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,800.0,0.0,600.0);
    glLineWidth(2.0);
    glPointSize(2.0);
}
float move_unit_ud=30.0f;
float move_unit_lr=5.0f;
void keyboardown(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_RIGHT: posX+=move_unit_lr;
                             break;
        case GLUT_KEY_LEFT: posX-=move_unit_lr;
                            break;
        case GLUT_KEY_UP: posY+=move_unit_ud;
                          break;
        //case GLUT_KEY_DOWN: posY-=move_unit_ud;
          //                  break;
        default: break;
    }

}
void screenkeyboard(unsigned char key,int x,int y)
{
    if(key=='q'||key=='Q')
        exit(0);
    else if(key==' ')
    {
        init1();
        glutDisplayFunc(display1);
        glutSpecialFunc(keyboardown);
    }
    else if(key=='h'||key=='H')
    {
        glutDisplayFunc(help_screen);
    }
    /*else if(key=='r'||key=='R')
    {
        init1();
        glutDisplayFunc(display1);
        glutSpecialFunc(keyboardown);
    }*/
    else if(key=='n'||key=='N')
    {
        init2();
        glutDisplayFunc(display1);
        glutSpecialFunc(keyboardown);
    }
    else if(key=='d'||key=='D')
    {
        init1();
        glutDisplayFunc(display1);
        glutSpecialFunc(keyboardown);
    }
    else if(key=='+')
    {
        gfDeltaX1=gfDeltaX1+1.0;
        gfDeltaX2=gfDeltaX2+1.0;
        gfDeltaX3=gfDeltaX3+1.0;
        gfDeltaX4=gfDeltaX4+1.0;
        AddX1=AddX1+1.0;
        AddX2=AddX2+1.0;
        AddX3=AddX3+1.0;
        AddX4=AddX4+1.0;
        AddX11=AddX11+1.0;
        AddX22=AddX22-2.0;
        AddX33=AddX33+1.0;
        AddX44=AddX44-1.0;
    }
    else if(key=='-')
    {
        gfDeltaX1=gfDeltaX1-1.0;
        gfDeltaX2=gfDeltaX2-1.0;
        gfDeltaX3=gfDeltaX3-1.0;
        gfDeltaX4=gfDeltaX4-1.0;
        AddX1=AddX1-1.0;
        AddX2=AddX2-1.0;
        AddX3=AddX3-1.0;
        AddX4=AddX4-1.0;
        AddX11=AddX11-1.0;
        AddX22=AddX22+2.0;
        AddX33=AddX33-1.0;
        AddX44=AddX44+1.0;
    }
}
void endkeyboard(unsigned char key,int x,int y)
{
    if(key=='q'||key=='Q')
        exit(0);
}
float move_unit_lr1=40.0f;
void mouse_function_menu(int option)
{
    switch(option)
    {
        case 0: {
                init1();
                glutDisplayFunc(display1);
                glutSpecialFunc(keyboardown);
                }
                break;
        case 1: {
                init2();
                glutDisplayFunc(display1);
                glutSpecialFunc(keyboardown);
                }
                break;
        case 2: {
                gfDeltaX1=gfDeltaX1+1.0;
                gfDeltaX2=gfDeltaX2+1.0;
                gfDeltaX3=gfDeltaX3+1.0;
                gfDeltaX4=gfDeltaX4+1.0;
                AddX1=AddX1+1.0;
                AddX2=AddX2+1.0;
                AddX3=AddX3+1.0;
                AddX4=AddX4+1.0;
                AddX11=AddX11+1.0;
                AddX22=AddX22-2.0;
                AddX33=AddX33+1.0;
                AddX44=AddX44-1.0;
                }
                break;
        case 3: {
                gfDeltaX1=gfDeltaX1-1.0;
                gfDeltaX2=gfDeltaX2-1.0;
                gfDeltaX3=gfDeltaX3-1.0;
                gfDeltaX4=gfDeltaX4-1.0;
                AddX1=AddX1-1.0;
                AddX2=AddX2-1.0;
                AddX3=AddX3-1.0;
                AddX4=AddX4-1.0;
                AddX11=AddX11-1.0;
                AddX22=AddX22+2.0;
                AddX33=AddX33-1.0;
                AddX44=AddX44+1.0;
                }
                break;
        case 4: posY+=move_unit_ud;
                          break;
        case 5: posX-=move_unit_lr1;
                            break;
        case 6: posX+=move_unit_lr1;
                       break;
        case 7: exit(0);
    }
}

void createmenu()
{
    submenu_id = glutCreateMenu(mouse_function_menu);
    glutAddMenuEntry("Day Mode",0);
    glutAddMenuEntry("Night Mode",1);
    glutAddMenuEntry("Increase Shark Speed",2);
    glutAddMenuEntry("Decrease Shark Speed",3);
    menu_id = glutCreateMenu(mouse_function_menu);
    submenu_id1 = glutCreateMenu(mouse_function_menu);
    glutAddMenuEntry("Up",4);
    glutAddMenuEntry("Left",5);
    glutAddMenuEntry("Right",6);
    menu_id = glutCreateMenu(mouse_function_menu);
    glutAddSubMenu("Play Game", submenu_id1);
    glutAddSubMenu("Functions", submenu_id);
    glutAddMenuEntry("Exit Game",7);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(200,200);
    glutCreateWindow("Traveller");
    //glutReshapeFunc(reshape);
    init1();
    glutDisplayFunc(display2);
    glutKeyboardFunc(screenkeyboard);
    createmenu();
    glutMainLoop();
}
