#ifndef SHADER_H
#define SHADER_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "glad.h"
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Lights.h"

class Shader
{
private:
    unsigned int id_;


public:
    Shader() = default;
    Shader(const std::string& vertex_shader_path, const std::string& fragment_shader_path);
    
    ~Shader();

    void Use();
    void End();

    unsigned int get_id() const;

    void SetBool(const std::string& name, bool value) const;
    void SetInt(const std::string& name, int value) const;
    void SetFloat(const std::string& name, float value) const;
    void SetVec3(const std::string& name, glm::vec3 value) const;
    void SetMatrix4(const std::string& name, glm::mat4 value) const;

    void SetLight(const std::string& name, Light value);
    void SetDirectionalLight(const std::string& name, DirectionalLight value);
    void SetPointLight(const std::string& name, PointLight value);
    void SetSpotLight(const std::string& name, SpotLight value);
};

#endif SHADER_H
