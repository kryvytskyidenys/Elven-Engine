#pragma once

#include <Elven.h>

class ExampleLayer : public Elven::Layer
{
public:
    ExampleLayer();
    virtual ~ExampleLayer() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;
    void OnUpdate(float dt) override;
    virtual void OnImGuiRender() override;
    void OnEvent(Elven::Event& event) override;

private:
    Elven::ShaderManager m_ShaderManager;
    Elven::Ref<Elven::Shader> m_Shader;
    Elven::Ref<Elven::VertexArray> m_VAOGrid;
    Elven::Ref<Elven::VertexArray> m_VAOTriangle;

    Elven::OrthographicCameraController m_CameraController;
};