
#define _WIN32_WINNT 0x0600

#include <easyx.h>
#include <conio.h>
#include <time.h>

#include "def.h"
#include "map.h"

void NewGame()
{
	// 清空游戏区
	setfillcolor(BLACK);
	solidrectangle(0, 0, GAMEAREA_WIDTH * PIXEL_UNIT - 1, GAMEAREA_WIDTH * PIXEL_UNIT - 1);

}

void Init()
{
	initgraph(640, 480);
	srand((unsigned)time(NULL));
	// 设置图案填充的背景色为透明
	setbkmode(TRANSPARENT);

	// 显示操作说明
	settextstyle(14, 0, _T("宋体"));
	outtextxy(20, 330, _T("操作说明"));
	outtextxy(20, 350, _T("上：旋转"));
	outtextxy(20, 370, _T("左：左移"));
	outtextxy(20, 390, _T("右：右移"));
	outtextxy(20, 410, _T("下：下移"));
	outtextxy(20, 430, _T("空格：沉底"));
	outtextxy(20, 450, _T("ESC：退出"));

	// 设置坐标原点
	setorigin(ORIGIN_X, ORIGIN_Y);

	// 绘制游戏区边界
	rectangle(-1, -1, PIXEL_GAMEAREA_WIDTH, PIXEL_GAMEAREA_HEIGHT);
	//下一个方块框边界
	rectangle((GAMEAREA_WIDTH + 1) * PIXEL_UNIT - 1, -1, (GAMEAREA_WIDTH + 5) * PIXEL_UNIT, 4 * PIXEL_UNIT);

	// 开始新游戏
	NewGame();
}

void Quit()
{
	closegraph();
	exit(0);
}

int main(int argc, char* argv[])
{
	Init();

	while (true)
	{
		//DispatchCmd(GetCmd());
	}

	Quit();
}