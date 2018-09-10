#include "MeshObject.hpp"

#include <Kore/Graphics4/Texture.h>
#include <Kore/Graphics4/Shader.h>
#include <Kore/VertexBufferImpl.h>
#include <Kore/IndexBufferImpl.h>
#include <Kore/TextureImpl.h>

using namespace Kore;

MeshObject::MeshObject(const char* meshFile, const char* textureFile, const Graphics4::VertexStructure& structure, float scale)
{
    mesh = loadObj(meshFile);
    image = new Graphics4::Texture(textureFile, true);
    
    // Mesh Vertex Buffer
    vertexBuffer = new Graphics4::VertexBuffer(mesh->numVertices, structure);
    float* vertices = vertexBuffer->lock();
    for (int i = 0; i < mesh->numVertices; ++i) {
        vertices[i * 8 + 0] = mesh->vertices[i * 8 + 0] * scale;
        vertices[i * 8 + 1] = mesh->vertices[i * 8 + 1] * scale;
        vertices[i * 8 + 2] = mesh->vertices[i * 8 + 2] * scale;
        vertices[i * 8 + 3] = mesh->vertices[i * 8 + 3];
        vertices[i * 8 + 4] = 1.0f - mesh->vertices[i * 8 + 4];
        vertices[i * 8 + 5] = mesh->vertices[i * 8 + 5];
        vertices[i * 8 + 6] = mesh->vertices[i * 8 + 6];
        vertices[i * 8 + 7] = mesh->vertices[i * 8 + 7];
    }
    vertexBuffer->unlock();

	indexBuffer = new Graphics4::IndexBuffer(mesh->numFaces * 3);
	int* indices = indexBuffer->lock();
	for (int i = 0; i < mesh->numFaces * 3; ++i) {
		indices[i] = mesh->indices[i];
	}
	indexBuffer->unlock();
    
    M = mat4::Identity();
}

void MeshObject::render(Graphics4::TextureUnit tex) {
    Graphics4::setTexture(tex, image);
    Graphics4::setVertexBuffer(*vertexBuffer);
    Graphics4::setIndexBuffer(*indexBuffer);
    Graphics4::drawIndexedVertices();
}
