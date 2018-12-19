<<<<<<< HEAD
#pragma once
#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<glm/glm.hpp>
class Camera
{
public:
	Camera(float);
	~Camera();

	glm::vec3 position;					//记录相机世界坐标
	glm::vec3 forward;					//记录相机正前方的方向（单位向量）
	glm::vec3 viewUp;					//记录相机正上方的方向（单位向量）

	void handleMouseMove(float, float); //处理鼠标移动事件（相机角度变换）
	void handleKeyPress(int, GLfloat);  //处理键盘按键事件（相机位置变换）
	void updateVector();
private:
	float MAX_PITCH_ANGLE;				//避免出现万向锁而设定的最大俯仰角为89度
	
	glm::vec2 lastMousePosition;		//记录上一帧鼠标位置
	glm::vec3 side;						//记录相机正右方的方向（单位向量）
	
	float pitchAngle;					//相机绕x轴旋转的角度
	float yawAngle;						//相机绕y轴旋转的角度
	float moveSpeed;

	bool firstMouseMove;				//鼠标是否是第一次移动
	float mouseSensitivity;				//记录鼠标灵敏度
};

=======
#pragma once
#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<glm/glm.hpp>
class Camera
{
public:
	Camera(float);
	~Camera();

	glm::vec3 position;					//记录相机世界坐标
	glm::vec3 forward;					//记录相机正前方的方向（单位向量）
	glm::vec3 viewUp;					//记录相机正上方的方向（单位向量）

	void handleMouseMove(float, float); //处理鼠标移动事件（相机角度变换）
	void handleKeyPress(int, GLfloat);  //处理键盘按键事件（相机位置变换）
	void updateVector();
private:
	float MAX_PITCH_ANGLE;				//避免出现万向锁而设定的最大俯仰角为89度
	
	glm::vec2 lastMousePosition;		//记录上一帧鼠标位置
	glm::vec3 side;						//记录相机正右方的方向（单位向量）
	
	float pitchAngle;					//相机绕x轴旋转的角度
	float yawAngle;						//相机绕y轴旋转的角度
	float moveSpeed;

	bool firstMouseMove;				//鼠标是否是第一次移动
	float mouseSensitivity;				//记录鼠标灵敏度
};

>>>>>>> a8afaeee6689758db9e975ec51ec225f49416c7b
