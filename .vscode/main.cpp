#include "pch.h"

#include <Kore/IO/FileReader.h>
#include <Kore/Input/Keyboard.h>
#include <Kore/Input/Mouse.h>
#include <Kore/Graphics4/Graphics.h>
#include <Kore/Graphics4/CompareMode.h>
#include <Kore/Graphics4/PipelineState.h>
#include <Kore/Graphics4/Shader.h>
#include <Kore/System.h>

using namespace Kore;

namespace {
	Graphics4::Shader* vertexShader;
	Graphics4::Shader* fragmentShader;
	Graphics4::PipelineState* pipeline;
	Graphics4::VertexBuffer* vertices;
	Graphics4::IndexBuffer* indices;

	void update() {
		Graphics4::begin();
		Graphics4::clear(Graphics4::ClearColorFlag);

		Graphics4::setPipeline(pipeline);
		Graphics4::setVertexBuffer(*vertices);
		Graphics4::setIndexBuffer(*indices);
		Graphics4::drawIndexedVertices();

		Graphics4::end();
		Graphics4::swapBuffers();
	}

		void keyDown(KeyCode code) {
		switch (code) {
		case KeyLeft:
			left = true;
			break;
		case KeyRight:
			right = true;
			break;
		case KeyDown:
			down_ = true;
			break;
		case KeyUp:
			button = true;
			break;
		default:
			break;
		}
	}

	void keyUp(KeyCode code) {
		switch (code) {
		case KeyLeft:
			left = false;
			break;
		case KeyRight:
			right = false;
			break;
		case KeyDown:
			down_ = false;
			break;
		case KeyUp:
			button = false;
			break;
		default:
			break;
		}
}

	void mouseUp(int windowId, int button, int x, int y) {
		switch (button) {
		case 0: // left button
			break;
		case 1: // right button
			break;
		case 2: // middle
			break;
        default:
            break;
		}
	}
} // end namespace

int kore(int argc, char** argv) {
	Kore::System::init("Shader", 1024, 768);
	Kore::System::setCallback(update);

	FileReader vs("shader.vert");
	FileReader fs("shader.frag");
	vertexShader = new Graphics4::Shader(vs.readAll(), vs.size(), Graphics4::VertexShader);
	fragmentShader = new Graphics4::Shader(fs.readAll(), fs.size(), Graphics4::FragmentShader);
	Graphics4::VertexStructure structure;
	structure.add("pos", Graphics4::Float3VertexData);
	pipeline = new Graphics4::PipelineState();
	pipeline->vertexShader = vertexShader;
	pipeline->fragmentShader = fragmentShader;
	pipeline->inputLayout[0] = &structure;
	pipeline->inputLayout[1] = nullptr;
	pipeline->compareMode = 
	pipeline->compile();

	vertices = new Graphics4::VertexBuffer(3, structure);
	float* v = vertices->lock();
	v[0] = -1; v[1] = -1; v[2] = 0.5;
	v[3] = 1;  v[4] = -1; v[5] = 0.5;
	v[6] = -1; v[7] = 1;  v[8] = 0.5;
	vertices->unlock();

	indices = new Graphics4::IndexBuffer(3);
	int* i = indices->lock();
	i[0] = 0; i[1] = 1; i[2] = 2;
	indices->unlock();

	Keyboard::the()->KeyDown = keyDown;
	Keyboard::the()->KeyUp = keyUp;
	Mouse::the()->Release = mouseUp;
	Mouse::the()->Move = mouseMove;

	Kore::System::start();

	return 0;
}
