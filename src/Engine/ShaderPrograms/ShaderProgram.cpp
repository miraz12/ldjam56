#include "ShaderProgram.hpp"

#include <fstream>
#include <iostream>
#include <string>

#ifdef EMSCRIPTEN
#define GL_OES_vertex_array_object
#include <GLES3/gl3.h>
#include <emscripten.h>
#else
#include <glad/glad.h>
#endif

ShaderProgram::ShaderProgram(std::string vertexShaderPath, std::string fragmentShaderPath) {
  loadShaders(vertexShaderPath, fragmentShaderPath);
}

ShaderProgram::~ShaderProgram() { glDeleteProgram(p_shaderProgram); }

void ShaderProgram::setUniformBinding(std::string u) {
  m_uniformBindings[u] = glGetUniformLocation(p_shaderProgram, u.c_str());
}

void ShaderProgram::setAttribBinding(std::string a) {
  m_attribBindings[a] = glGetAttribLocation(p_shaderProgram, a.c_str());
}

void ShaderProgram::loadShaders(std::string vertexShaderPath, std::string fragmentShaderPath) {
  // vertex shader
  std::string vertexShaderString = "";
  readFile(vertexShaderPath, &vertexShaderString);
  const char *vertexShaderSrc = vertexShaderString.c_str();

  unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vertexShader, 1, &vertexShaderSrc, NULL);
  glCompileShader(vertexShader);
  // check for shader compile errors
  int success;
  char infoLog[512];
  glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
  if (!success) {
    glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
    std::cout << vertexShaderPath << std::endl
              << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n"
              << infoLog << std::endl;
  }

  // fragment shader
  std::string fragmentShaderString = "";
  readFile(fragmentShaderPath, &fragmentShaderString);
  const char *fragmentShaderSrc = fragmentShaderString.c_str();

  unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fragmentShader, 1, &fragmentShaderSrc, NULL);
  glCompileShader(fragmentShader);
  // check for shader compile errors
  glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
  if (!success) {
    glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
    std::cout << fragmentShaderPath << std::endl
              << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n"
              << infoLog << std::endl;
  }

  p_shaderProgram = glCreateProgram();
  glAttachShader(p_shaderProgram, vertexShader);
  glAttachShader(p_shaderProgram, fragmentShader);
  glLinkProgram(p_shaderProgram);

  // check for linking errors
  glGetProgramiv(p_shaderProgram, GL_LINK_STATUS, &success);
  if (!success) {
    glGetProgramInfoLog(p_shaderProgram, 512, NULL, infoLog);
    std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
  }

  glDeleteShader(vertexShader);
  glDeleteShader(fragmentShader);
}

void ShaderProgram::use() { glUseProgram(p_shaderProgram); }

unsigned int ShaderProgram::getUniformLocation(std::string uniformName) {
  if (m_uniformBindings.find(uniformName) == m_uniformBindings.end()) {
    std::cout << "No uniform with name " << uniformName << "\n";
  } else {
    return m_uniformBindings.at(uniformName);
  }
  return 0;
}

int ShaderProgram::getAttribLocation(std::string attribName) {
  if (m_attribBindings.find(attribName) == m_attribBindings.end()) {
    std::cout << "No attribute with name " << attribName << "\n";
  } else {
    return m_attribBindings.at(attribName);
  }
  return 0;
}

void ShaderProgram::readFile(std::string filePath, std::string *result) {
  std::string line;
  std::ifstream theFile(filePath);
  if (theFile.is_open()) {
    while (std::getline(theFile, line)) {
      result->append(line + "\n");
    }
    theFile.close();
  } else {
    std::cout << "Could not open file " << filePath << "\n";
  }
}
