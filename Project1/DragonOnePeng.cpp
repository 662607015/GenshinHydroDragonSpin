#include <stdio.h>
#include <Windows.h>


int main() {
	printf(" 使用说明：\n\nl.必须以Administrator身份运行\n\n2.按住鼠标x1键，鼠标会自动高速向右移动");
		
		while(1)
	{
		if (GetKeyState(VK_XBUTTON1) < 0)
		{
			mouse_event(MOUSEEVENTF_MOVE, 800, 0, 0, 0);
		}
		Sleep(1);

	}
	return 0;
}