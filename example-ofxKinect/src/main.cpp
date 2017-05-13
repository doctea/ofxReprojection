#include "testApp.h"
#include "ofAppGLFWWindow.h"

#include "ofGLProgrammableRenderer.h"

//#define ORIGINAL_GL

int main() {

	#ifdef ORIGINAL_GL
		//ofAppGLFWWindow window;
		//ofSetCurrentRenderer(ofGLProgrammableRenderer::TYPE);
		//ofSetupOpenGL(&window, 2048, 768, OF_WINDOW);
	#else
		//ofSetupOpenGL(2048,768, OF_WINDOW);
		//ofGLWindowSettings settings;
		//settings.setGLVersion(3,2);
		//settings.
		//ofCreateWindow(settings);
	        //ofSetupOpenGL(2048,768, OF_WINDOW);

		ofGLWindowSettings settings;
		settings.width = 2048;
		settings.height = 768;
		settings.setGLVersion(3,2); //,2);
		ofCreateWindow(settings);
	#endif

	ofRunApp(new testApp());

}
