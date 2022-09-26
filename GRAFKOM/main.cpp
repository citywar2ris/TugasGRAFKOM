#include <windows.h>
#include <GL/glut.h>

void userdraw(){
    static int tick=0;

    // GARIS
//glColor3f(0.,0.,1.);
    //glLineWidth(3);
    //glBegin(GL_LINES);
    //glVertex2f(10,19);
    //glVertex2f(10,12);
    //glEnd();



    //TUGAS 2. BUAT POLA DENGAN TIITK WARNANYA BEDA2
//glColor3f(1,0,0);
    //glPointSize(10);
    //glBegin(GL_POINTS);
    //glVertex2i(6,13);
    //glEnd();

//glColor3f(1,0,1);
    //glPointSize(10);
    //glBegin(GL_POINTS);
    //glVertex2i(6,14);
    //glEnd();

//glColor3f(1,2,0);
    //glPointSize(10);
    //glBegin(GL_POINTS);
    //glVertex2i(6,15);
    //glEnd();

//glColor3f(0,2,0);
    //glPointSize(10);
    //glBegin(GL_POINTS);
    //glVertex2i(6,16);
    //glEnd();

//glColor3f(0,0,1);
    //glPointSize(10);
    //glBegin(GL_POINTS);
    //glVertex2i(6,17);
    //glEnd();


    // TUGAS 3. BUAT POLYGON
    glBegin(GL_LINE_LOOP);
        glColor3f(0.0,1.0,0.0);
        glVertex2i(12,18);
        glVertex2i(9,18);
        glVertex2i(9,9);
        glVertex2i(15,9);
        glVertex2i(15,12);
        glVertex2i(12,12);
     glEnd();

}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    glutSwapBuffers();
}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Tugas Pertama GRAFKOM By Rizky");
    glClearColor(0,0,0,0);
    gluOrtho2D(0.,24.,0.,24.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
