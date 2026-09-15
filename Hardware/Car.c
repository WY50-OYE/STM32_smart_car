#include "stm32f10x.h"                  // Device header
#include "Motor.h"
#include "Delay.h"
void Car_Init(){
	Motor_Init();
}
void Go_Ahead(){
	Motor_SetLeftSpeed(100);
	Motor_SetRightSpeed(100);
}
void Go_Back(){
	Motor_SetLeftSpeed(-100);
	Motor_SetRightSpeed(-100);
}
void Turn_Left(){
	Motor_SetLeftSpeed(100);
	Motor_SetRightSpeed(0);
}
void Turn_Right(){
	Motor_SetRightSpeed(100);
	Motor_SetLeftSpeed(0);
	
}
void Self_Left(){
	Motor_SetLeftSpeed(-100);
	Motor_SetRightSpeed(100);
}
void Self_Right(){
	Motor_SetLeftSpeed(100);
	Motor_SetRightSpeed(-100);
}
void Car_Stop(){
	Motor_SetLeftSpeed(0);
	Motor_SetRightSpeed(0);
}
