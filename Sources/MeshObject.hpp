#pragma once
#include "pch.h"
#include <Kore/Graphics4/Graphics.h>
#include "ObjLoader.hpp"

class MeshObject {
    
private:
    Kore::Graphics4::VertexBuffer* vertexBuffer;               // Mesh Vertex Buffer
    Kore::Graphics4::IndexBuffer* indexBuffer;
    
    Mesh* mesh;
    Kore::Graphics4::Texture* image;

public:
    MeshObject(const char* meshFile, const char* textureFile, const Kore::Graphics4::VertexStructure& structure, float scale = 1.0f);

    void render(Kore::Graphics4::TextureUnit tex);
    
    Kore::mat4 M; // Model matrix
};
