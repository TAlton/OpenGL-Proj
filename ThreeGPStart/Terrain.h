#pragma once

#include "IRenderable.h"

class Terrain :
	public IRenderable {

public:

	Terrain(const std::string& ModelFilename, const std::string& HeightmapFilename, GLuint& VAO, GLint x = 0, GLint y = 0);
	~Terrain();

private:

	GLuint m_unNumVertsX{ 0 },
		m_unNumVertsZ{ 0 },
		m_unNumVerts{ 0 },
		m_unNumCellsX{ 0 },
		m_unNumCellsZ{ 0 },
		m_unCurrentVertex{ 0 };

	GLfloat m_fVertXToImage{ 0 },
		m_fVertZToImage{ 0 };

	GLboolean m_bInvertPattern{ true };

	GLbyte* m_pbImageData = nullptr;

	Helpers::ImageLoader m_ilImage,
		m_ilHeightmap;

	GLboolean Initialise() override final;

};

