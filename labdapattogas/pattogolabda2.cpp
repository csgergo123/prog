#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define sugar 25
int x = SCREEN_HEIGHT / 2;
int y = SCREEN_HEIGHT / 2;
int n = 1;
int m = 1;
int ablakx[SCREEN_WIDTH - sugar];
int ablaky[SCREEN_HEIGHT - sugar];

    
void mozgatas() {
	n *= ablakx[x];
	m *= ablaky[y];

	x += n;
	y += m;
};

int main( void ) {
    GLFWwindow *window;



    for (int i = 0; i < SCREEN_WIDTH-sugar; i++) 
	ablakx[i] = 1;  
for (int i = 0; i < SCREEN_HEIGHT - sugar; i++) 
	ablaky[i] = 1;

ablakx[sugar] =- 1;
ablakx[SCREEN_WIDTH - sugar] =- 1;
ablaky[sugar] =- 1;
ablaky[SCREEN_HEIGHT - sugar] =- 1;
    if ( !glfwInit( ) ) {
        return -1;
    }
    
    window = glfwCreateWindow( SCREEN_WIDTH, SCREEN_HEIGHT, "Labdapattogás C++", NULL, NULL );
    
    if ( !window ) {
        glfwTerminate( );
        return -1;
    }
    
    glfwMakeContextCurrent( window );
    
    glViewport( 0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT );
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity( );
    glOrtho( 0, SCREEN_WIDTH, 0, SCREEN_HEIGHT,0,1);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity( );
    

    while ( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS && !glfwWindowShouldClose( window ) ) {
        glClear( GL_COLOR_BUFFER_BIT );
        GLfloat pointVertex[] = { x, y };
        glEnable( GL_POINT_SMOOTH );
        glEnableClientState( GL_VERTEX_ARRAY );
        glPointSize( sugar*2 );
        glVertexPointer( 2, GL_FLOAT, 0, pointVertex );
        glDrawArrays( GL_POINTS, 0, 1 );
        glDisableClientState( GL_VERTEX_ARRAY );
        glDisable( GL_POINT_SMOOTH );
        
        glfwSwapBuffers( window );
        
        glfwPollEvents( );
        mozgatas();
    }
    
    glfwTerminate( );
    
    return 0;
}