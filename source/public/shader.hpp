#ifndef SHADER_HPP
#define SHADER_HPP

#include <string>

class Shader
{
public:
  unsigned int m_ID;

public:
  Shader(const char* vertexPath, const char* fragmentPath);

  void use();

  void setBool(const std::string& name, bool value) const;
  void setInt(const std::string& name, int value) const;
  void setFloat(const std::string& name, float value) const;
};

#endif