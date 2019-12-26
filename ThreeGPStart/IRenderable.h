#pragma once
class IRenderable
{
public:

	IRenderable();
	~IRenderable();

private:

	std::string m_strFilename{ "" },
		m_strImageFilename{ "" };

	GLuint m_unNormalsVBO{ 0 },
		m_unVerticesVBO{ 0 },
		m_unElementsEBO{ 0 },
		m_unUVVBO{ 0 },
		m_unTexture{ 0 },
		m_unVAO{ 0 };

	std::vector<glm::vec3> m_vecv3Positions,
		m_vecnNormals;
	std::vector<glm::vec2> m_vecv2UV;
	std::vector<GLuint> m_vecunIndices;

	virtual void Initialise() = 0;

};

