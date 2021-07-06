#include<windows.h>
#include<iostream>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<fstream>
char str1[20] = "SANRAY AQUARIUM";
char str2[20] = "RAYSAN AQUARIUM";
bool ischange = true;
int flag = 2, ch = 0, ch1 = 0, w, len;
float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, p = 0, q = 0, s = 0.7, x = 0, y = 0, r = 0, pi = 3.142, th;
void Info()
{
    glClearColor(1, 1, 1, 0);
    char heading[50] = "AQUARIUM ANIMATION";
    int a;
    glColor3f(0, 0, 1);
    glRasterPos2f(-0.1, 0.57);
    for (a = 0; a < strlen(heading); a++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, heading[a]);

    char develop[50] = "DEVELOPED BY :";
    glRasterPos2f(0.1, 0.4);
    for (a = 0; a < strlen(develop); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, develop[a]);

    char name1[50] = "NAME : RAYSON L DSOUZA";
    glRasterPos2f(-0.5, 0.3);
    for (a = 0; a < strlen(name1); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, name1[a]);

    char usn1[50] = "USN : 4MW18CS061";
    glRasterPos2f(-0.5, 0.25);
    for (a = 0; a < strlen(usn1); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, usn1[a]);

    char name2[50] = "NAME : SANTHOSH G PATKAR";
    glRasterPos2f(0.5, 0.3);
    for (a = 0; a < strlen(name2); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, name2[a]);

    char usn2[50] = "USN : 4MW18CS068";
    glRasterPos2f(0.5, 0.25);
    for (a = 0; a < strlen(usn2); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, usn2[a]);

    char details[50] = "DETAILS :";
    glRasterPos2f(0.1, 0.1);
    for (a = 0; a < strlen(details); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, details[a]);

    char intro[100] =
        "A MINI PROJECT ON OPENGL DESIGNED USING GLUT LIBRARY ON CODE-BLOCKS IDE.";
    glRasterPos2f(-0.3, 0);
    for (a = 0; a < strlen(intro); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, intro[a]);

    char desc[100] = " THE CODE CONTAINS 883 LINES AND HAS 25 DIFFERENT FUNCTIONS EACH DOES DIFFERENT TASKS.";
    glRasterPos2f(-0.4, -0.1);
    for (a = 0; a < strlen(desc); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, desc[a]);

    char college[75] = "COLLEGE : SHRI MADHWA VADIRAJA INSTITUTE OF TECHNOLOGY AND MANAGEMENT";
    glRasterPos2f(-0.3, -0.2);
    for (a = 0; a < strlen(college); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, college[a]);

    char dept[50] = "DEPT : COMPUTER SCIENCE AND ENGINEERING";
    glRasterPos2f(-0.3, -0.3);
    for (a = 0; a < strlen(dept); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, dept[a]);

    char sec[50] = "SEC : 5B";
    glRasterPos2f(-0.3, -0.4);
    for (a = 0; a < strlen(sec); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, sec[a]);

    char year[50] = "ACADEMIC YEAR : 2020-21";
    glRasterPos2f(-0.3, -0.5);
    for (a = 0; a < strlen(year); a++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, year[a]);


}
void cover()
{
    glColor3f(1, 0, 0);//cover
    glBegin(GL_POLYGON);
    glVertex2f(-1, 0.55);
    glVertex2f(-0.35, 0.9);
    glVertex2f(0.35, 0.9);
    glVertex2f(1, 0.55);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-1, 0.55);
    glVertex2f(-0.35, 0.9);
    glVertex2f(0.35, 0.9);
    glVertex2f(1, 0.55);
    glEnd();
    glBegin(GL_POLYGON); //left exhaust
    glVertex2f(-0.85, 0.625);
    glVertex2f(-0.80, 0.65);
    glVertex2f(-0.80, 0.85);
    glVertex2f(-0.85, 0.85);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.78, 0.85);
    glVertex2f(-0.87, 0.85);
    glVertex2f(-0.825, 0.95);
    glEnd();
    glBegin(GL_POLYGON); //right exhaust
    glVertex2f(0.85, 0.625);
    glVertex2f(0.80, 0.65);
    glVertex2f(0.80, 0.85);
    glVertex2f(0.85, 0.85);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.78, 0.85);
    glVertex2f(0.87, 0.85);
    glVertex2f(0.825, 0.95);
    glEnd();
}
void namechange()
{
    glColor3f(1, 1, 0);//company name
    glBegin(GL_POLYGON);
    glVertex2f(0.2, 0.65);
    glVertex2f(0.2, 0.55);
    glVertex2f(-0.2, 0.55);
    glVertex2f(-0.2, 0.65);
    glEnd();
    glColor3f(0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.2, 0.65);
    glVertex2f(0.2, 0.55);
    glVertex2f(-0.2, 0.55);
    glVertex2f(-0.2, 0.65);
    glEnd();
    if (flag == 3)
    {
        glColor3f(0, 0, 1);
        glRasterPos2f(-0.17, 0.57);
        for (int a = 0; a < strlen(str2); a++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[a]);
    }
    else
    {
        glColor3f(0, 0, 1);
        glRasterPos2f(-0.17, 0.57);
        for (int a = 0; a < strlen(str1); a++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[a]);
    }
}
void pebbles()
{
    glPointSize(10);
    glColor3f(0.34, 0.34, 0.34);
    glBegin(GL_POINTS);
    glVertex2f(-0.9, -0.71);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POINTS);
    glVertex2f(-0.8, -0.73);
    glEnd();
    glColor3f(0, 1, 0);
    glBegin(GL_POINTS);
    glVertex2f(-0.7, -0.75);
    glEnd();
    glColor3f(0, 0, 1);
    glBegin(GL_POINTS);
    glVertex2f(-0.6, -0.7);
    glEnd();
    glColor3f(0, 0, 1);
    glBegin(GL_POINTS);
    glVertex2f(-0.5, -0.8);
    glEnd();
    glColor3f(1, 1, 0);
    glBegin(GL_POINTS);
    glVertex2f(-0.4, -0.7);
    glEnd();
    glColor3f(0, 1, 1);
    glBegin(GL_POINTS);
    glVertex2f(-0.3, -0.77);
    glEnd();
    glColor3f(1, 0, 1);
    glBegin(GL_POINTS);
    glVertex2f(-0.2, -0.78);
    glEnd();
    glColor3f(0.34, 0.34, 0.34);
    glBegin(GL_POINTS);
    glVertex2f(-0.1, -0.80);
    glEnd();
    glPointSize(10);
    glColor3f(0.5, 0.5, 0);
    glBegin(GL_POINTS);
    glVertex2f(0.7, -0.75);
    glEnd();
    glColor3f(0.5, 0, 0.5);
    glBegin(GL_POINTS);
    glVertex2f(0.6, -0.7);
    glEnd();
    glColor3f(0, 0.5, 0.5);
    glBegin(GL_POINTS);
    glVertex2f(0.5, -0.8);
    glEnd();
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POINTS);
    glVertex2f(0.4, -0.7);
    glEnd();
    glColor3f(0.3, 0.3, 0);
    glBegin(GL_POINTS);
    glVertex2f(0.3, -0.77);
    glEnd();
    glColor3f(0.3, 0, 0.3);
    glBegin(GL_POINTS);
    glVertex2f(0.2, -0.78);
    glEnd();
    glColor3f(0, 0.3, 0.3);
    glBegin(GL_POINTS);
    glVertex2f(0.1, -0.80);
    glEnd();
    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_POINTS);
    glVertex2f(0.9, -0.71);
    glEnd();
    glColor3f(0.3, 0.5, 1);
    glBegin(GL_POINTS);
    glVertex2f(0.8, -0.73);
    glEnd();
}

void pipe()
{
    glColor3f(1, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.99, -0.8);
    glVertex2f(-0.93, -0.8);
    glVertex2f(-0.93, -0.4);
    glVertex2f(-0.99, -0.4);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.99, -0.7);
    glVertex2f(-0.99, -0.64);
    glVertex2f(-0.85, -0.64);
    glVertex2f(-0.85, -0.7);
    glEnd();
}
void borders()
{
    glColor3f(0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.98, -0.95);
    glVertex2f(0.98, 0.5);
    glVertex2f(-0.98, 0.5);
    glVertex2f(-0.98, -0.95);
    glEnd();
    glColor3f(0.329412, 0.329412, 0.329412);//border bottom
    glBegin(GL_POLYGON);
    glVertex2f(-250, -0.95);
    glVertex2f(-250, -250);
    glVertex2f(250, -250);
    glVertex2f(250, -0.95);
    glEnd();
    glColor3f(0.329412, 0.329412, 0.329412);//border top
    glBegin(GL_POLYGON);
    glVertex2f(250, 0.55);
    glVertex2f(-250, 0.55);
    glVertex2f(250, 0.5);
    glVertex2f(-250, 0.5);
    glEnd();
    glColor3f(0.329412, 0.329412, 0.329412);//border right
    glBegin(GL_POLYGON);
    glVertex2f(250, -0.95);
    glVertex2f(250, 0.5);
    glVertex2f(0.98, -0.95);
    glVertex2f(0.98, 0.5);
    glEnd();
    glColor3f(0.329412, 0.329412, 0.329412);//border left
    glBegin(GL_POLYGON);
    glVertex2f(-250, -0.95);
    glVertex2f(-250, 0.5);
    glVertex2f(-0.98, -0.95);
    glVertex2f(-0.98, 0.5);
    glEnd();
}
void water()
{
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-250, 0.5);
    glVertex2f(-250, -250);
    glVertex2f(250, -250);
    glVertex2f(250, 0.5);
    glEnd();
}
void cave()
{
    glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.45, -0.7);
    glVertex2f(-0.60, -0.35);
    glVertex2f(-0.75, -0.7);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.63, -0.7);
    glVertex2f(-0.55, -0.55);
    glVertex2f(-0.48, -0.7);
    glEnd();
}
void plant()
{
    glColor3f(0.5f, 0.35f, 0.05f);
    glLineWidth(5.0);
    glBegin(GL_LINES);//left plant
    glVertex2f(-0.3, -0.7);
    glVertex2f(-0.3, -0.4);
    glEnd();
    glColor3f(0, 1, 0);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2f(-0.3, -0.45);
    glVertex2f(-0.2, -0.4);
    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.2, -0.45);
    glVertex2f(-0.3, -0.55);
    glVertex2f(-0.2, -0.50);
    glVertex2f(-0.3, -0.6);
    glVertex2f(-0.2, -0.55);
    glVertex2f(-0.3, -0.6);
    glVertex2f(-0.4, -0.55);
    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.4, -0.45);
    glVertex2f(-0.3, -0.55);
    glVertex2f(-0.4, -0.50);
    glVertex2f(-0.3, -0.45);
    glVertex2f(-0.4, -0.4);
    glEnd();
    glColor3f(0.5f, 0.35f, 0.05f);
    glLineWidth(5.0);
    glBegin(GL_LINES);//right plant
    glVertex2f(0.3, -0.7);
    glVertex2f(0.3, -0.4);
    glEnd();
    glColor3f(0, 1, 0);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2f(0.3, -0.45);
    glVertex2f(0.2, -0.4);
    glVertex2f(0.3, -0.5);
    glVertex2f(0.2, -0.45);
    glVertex2f(0.3, -0.55);
    glVertex2f(0.2, -0.50);
    glVertex2f(0.3, -0.6);
    glVertex2f(0.2, -0.55);
    glVertex2f(0.3, -0.6);
    glVertex2f(0.4, -0.55);
    glVertex2f(0.3, -0.5);
    glVertex2f(0.4, -0.45);
    glVertex2f(0.3, -0.55);
    glVertex2f(0.4, -0.50);
    glVertex2f(0.3, -0.45);
    glVertex2f(0.4, -0.4);
    glEnd();
    glColor3f(0.5f, 0.35f, 0.05f);
    glLineWidth(5.0);
    glBegin(GL_LINES); // middle plant
    glVertex2f(0, -0.7);
    glVertex2f(0, -0.4);
    glEnd();
    glColor3f(0, 1, 0);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2f(0, -0.45);
    glVertex2f(-0.1, -0.4);
    glVertex2f(0, -0.5);
    glVertex2f(-0.1, -0.45);
    glVertex2f(0, -0.55);
    glVertex2f(-0.1, -0.50);
    glVertex2f(0, -0.6);
    glVertex2f(-0.1, -0.55);
    glVertex2f(0, -0.6);
    glVertex2f(0.1, -0.55);
    glVertex2f(0, -0.5);
    glVertex2f(0.1, -0.45);
    glVertex2f(0, -0.55);
    glVertex2f(0.1, -0.50);
    glVertex2f(0, -0.45);
    glVertex2f(0.1, -0.4);
    glEnd();
}
void brokenship()
{
    glColor3f(1, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.7, -0.6);
    glVertex2f(0.5, -0.6);
    glVertex2f(0.7, -0.7);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.8, -0.6);
    glVertex2f(0.5, -0.6);
    glVertex2f(0.7, -0.7);
    glVertex2f(0.8, -0.7);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.85, -0.6);
    glVertex2f(1, -0.65);
    glVertex2f(0.85, -0.7);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.8, -0.6);
    glVertex2f(0.7, -0.55);
    glVertex2f(0.8, -0.3);
    glEnd();
}
void grass()
{
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-250, -0.7);
    glVertex2f(-250, -0.8);
    glVertex2f(250, -0.8);
    glVertex2f(250, -0.7);
    glEnd();

}
void ground()
{
    glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(-250, -0.8);
    glVertex2f(-250, -250);
    glVertex2f(250, -250);
    glVertex2f(250, -0.8);
    glEnd();
    glColor3f(0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-0.9, -0.85);
    glVertex2f(-0.3, -0.85);
    glVertex2f(-0.95, -0.87);
    glVertex2f(-0.5, -0.87);
    glVertex2f(-0.5, -0.9);
    glVertex2f(0.2, -0.9);
    glVertex2f(-0.5, -0.87);
    glVertex2f(0.3, -0.87);
    glVertex2f(-0.1, -0.83);
    glVertex2f(0.5, -0.83);
    glVertex2f(0.1, -0.85);
    glVertex2f(0.7, -0.85);
    glVertex2f(0.5, -0.9);
    glVertex2f(0.9, -0.9);
    glEnd();

}
void fish1()
{
    glColor3f(0.0, 1.0, 0.0);//green fish
    glBegin(GL_POLYGON);
    glVertex2f(0.7 + a, 0.05);
    glVertex2f(0.75 + a, 0.1);
    glVertex2f(0.85 + a, 0.05);
    glVertex2f(0.75 + a, 0.0);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.83 + a, 0.05);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.9 + a, 0.09);
    glVertex2f(0.9 + a, 0.01);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.75 + a, 0.095);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.79 + a, 0.125);
    glVertex2f(0.77 + a, 0.07);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.75 + a, 0.007);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.795 + a, -0.035);
    glVertex2f(0.77 + a, 0.02);
    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.73 + a, 0.065);
    glEnd();

}

void fish2()
{
    glColor3f(1.0, 1.0, 0.0);//yellow fish
    glBegin(GL_POLYGON);
    glVertex2f(-0.7 - b, -0.05);
    glVertex2f(-0.75 - b, -0.1);
    glVertex2f(-0.85 - b, -0.05);
    glVertex2f(-0.75 - b, 0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8, 0.5, 0.0);
    glVertex2f(-0.83 - b, -0.05);
    glVertex2f(-0.9 - b, -0.09);
    glVertex2f(-0.9 - b, -0.01);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8, 0.5, 0.0);
    glVertex2f(-0.75 - b, -0.095);
    glVertex2f(-0.79 - b, -0.125);
    glVertex2f(-0.77 - b, -0.07);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8, 0.5, 0.0);
    glVertex2f(-0.75 - b, -0.007);
    glVertex2f(-0.795 - b, 0.035);
    glVertex2f(-0.77 - b, -0.02);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(-0.73 - b, -0.035);
    glEnd();
}

void fish3()
{
    glColor3f(0.0, 0.4, 1.0);//blue fish
    glBegin(GL_POLYGON);
    glVertex2f(-0.7 - e, -0.25);
    glVertex2f(-0.75 - e, -0.3);
    glVertex2f(-0.775 - e, -0.3);
    glVertex2f(-0.85 - e, -0.25);
    glVertex2f(-0.775 - e, -0.2);
    glVertex2f(-0.75 - e, -0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.83 - e, -0.25);
    glVertex2f(-0.9 - e, -0.29);
    glVertex2f(-0.9 - e, -0.21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.775 - e, -0.2);
    glVertex2f(-0.79 - e, -0.125);
    glVertex2f(-0.75 - e, -0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.75 - e, -0.3);
    glVertex2f(-0.795 - e, -0.35);
    glVertex2f(-0.775 - e, -0.3);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(-0.73 - e, -0.235);
    glEnd();
}

void fish4()
{
    glColor3f(0.6, 0.7, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.7 + r, -0.25);
    glVertex2f(0.75 + r, -0.3);
    glVertex2f(0.775 + r, -0.3);
    glVertex2f(0.85 + r, -0.25);
    glVertex2f(0.775 + r, -0.2);
    glVertex2f(0.75 + r, -0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.83 + r, -0.25);
    glVertex2f(0.9 + r, -0.29);
    glVertex2f(0.9 + r, -0.21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.775 + r, -0.2);
    glVertex2f(0.79 + r, -0.125);
    glVertex2f(0.75 + r, -0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.75 + r, -0.3);
    glVertex2f(0.795 + r, -0.35);
    glVertex2f(0.775 + r, -0.3);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.73 + r, -0.235);
    glEnd();

}
void fish5()
{
    glColor3f(1.0, 0.0, 0.0);//red1 fish
    glBegin(GL_POLYGON);
    glVertex2f(0.7 + f, 0.25);
    glVertex2f(0.75 + f, 0.3);
    glVertex2f(0.775 + f, 0.3);
    glVertex2f(0.85 + f, 0.25);
    glVertex2f(0.775 + f, 0.2);
    glVertex2f(0.75 + f, 0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.83 + f, 0.25);
    glVertex2f(0.9 + f, 0.29);
    glVertex2f(0.9 + f, 0.21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.775 + f, 0.3);
    glVertex2f(0.79 + f, 0.4);
    glVertex2f(0.75 + f, 0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.775 + f, 0.2);
    glVertex2f(0.79 + f, 0.1);
    glVertex2f(0.75 + f, 0.2);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.73 + f, 0.265);
    glEnd();
}
void draw_pixel(GLint cx, GLint cy)
{
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);
    glVertex2i(cx, cy);
    glEnd();
}
void plotpixels(GLint h, GLint k, GLint x, GLint y)
{
    draw_pixel(x + h, y + k);
    draw_pixel(-x + h, y + k);
    draw_pixel(x + h, -y + k);
    draw_pixel(-x + h, -y + k);
    draw_pixel(y + h, x + k);
    draw_pixel(-y + h, x + k);
    draw_pixel(y + h, -x + k);
    draw_pixel(-y + h, -x + k);

}
void circle_draw(GLint h, GLint k, GLint r)
{
    GLint d = 1 - r, x = 0, y = r;
    while (y > x)
    {
        plotpixels(h, k, x, y);
        if (d < 0)
            d += 2 * x + 3;
        else
        {
            d += 2 * (x - y) + 5;
            --y;
        }
        ++x;
    }
    plotpixels(h, k, x, y);
}
void myinit()
{
    glClearColor(1, 1, 1, 0);
}
void idle()
{
    g += 0.00024;
    h += 0.0002;
    i -= 0.00024;
    j += 0.0002;
    k += 0.00009;
    l += 0.0002;
    m += 0.000055;
    n += 0.0002;
    p += 0.00007;
    q += 0.0001;
    x -= 0.0001;
    s -= 0.001;
    y += 0.0002;
    glutPostRedisplay();
}
void bubbles_1()
{
    glPushMatrix();
    if (h < 0.03)
    {
        gluOrtho2D(0.0, 640, 0.0, 480);
    }
    else
    {
        glTranslatef(0.1, y - 0.34, 0);
        gluOrtho2D(0.0, 640, 0.0, 480);
        circle_draw(20, 20, 7);
    }
    glPopMatrix();
}
void bubbles_2()
{
    glPushMatrix();
    if (h < 0.03)
    {
        gluOrtho2D(0.0, 640, 0.0, 480);
    }
    else
    {
        glTranslatef(0.1, y - 0.64, 0);
        gluOrtho2D(0.0, 640, 0.0, 480);
        circle_draw(20, 20, 7);
    }
    glPopMatrix();
}
void bubbles_3()
{
    glPushMatrix();
    if (h < 0.03)
    {
        gluOrtho2D(0.0, 640, 0.0, 480);
    }
    else
    {
        glTranslatef(0.1, y - 1.3, 0);
        gluOrtho2D(0.0, 640, 0.0, 480);
        circle_draw(20, 20, 7);
    }
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(2.0);
    if (a >= -1.99)
        a = a - 0.0005;
    else
        a = 0;
    if (b >= -1.99)
        b = b - 0.0004;
    else
        b = 0;
    if (c >= -1.99)
        c = c - 0.0003;
    else
        c = 0;
    if (d >= -1.99)
        d = d + 0.0007;
    else
        d = 0;

    if (e >= -1.99)
        e = e - 0.0005;
    else
        e = 0;
    if (f >= -1.99)
        f = f - 0.0002;
    else
        f = 0;
    if (r >= -1.99)
        r = r - 0.0007;
    else
        r = 0;
    if (flag == 2)
    {
        water();
        bubbles_1();
        bubbles_2();
        bubbles_3();
        cover();
        pipe();
        plant();
        cave();
        brokenship();
        grass();
        ground();
        pebbles();
        fish1();
        fish2();
        fish3();
        fish4();
        fish5();
        borders();
        namechange();
    }
    if (flag == 1)
        Info();
    if (flag == 3)
    {
        water();
        bubbles_1();
        bubbles_2();
        bubbles_3();
        cover();
        pipe();
        plant();
        cave();
        brokenship();
        grass();
        ground();
        pebbles();
        fish1();
        fish2();
        fish3();
        fish4();
        fish5();
        borders();
        namechange();
    }

    if (flag == 4)
        exit(0);
    glutPostRedisplay();
    glutSwapBuffers();
}
void Menu(int option)
{
    if (option == 1)
        flag = 1;
    if (option == 2)
        flag = 2;
    if (option == 3)
        flag = 3;
    if (option == 4)
        flag = 4;
    glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Aquarium");
    myinit();
    glutIdleFunc(idle);
    glutDisplayFunc(display);
    glutCreateMenu(Menu);
    glutAddMenuEntry("Go To Menu", 1);
    glutAddMenuEntry("Go To Aquarium Animation", 2);
    glutAddMenuEntry("Change Logo", 3);
    glutAddMenuEntry("Exit", 4);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutMainLoop();
    return 0;
}
