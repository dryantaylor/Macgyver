#pragma once
namespace DemoProject::GameInputs {
	enum FRAMEBUFFER_SHIFTS :uint16_t {
		SHIFTS_UP = 0,
		SHIFTS_DOWN = 1,
		SHIFTS_LEFT = 2,
		SHIFTS_RIGHT = 3,
		SHIFTS_DOWNLEFT = 4,
		SHIFTS_DOWNRIGHT = 5,
		SHIFTS_UPLEFT = 6,
		SHIFTS_UPRIGHT = 7,
		SHIFTS_LKICK = 8,
		SHIFTS_MKICK = 10,
		SHIFTS_HKICK = 11,
		SHIFTS_LPUNCH = 12,
		SHIFTS_MPUNCH = 13,
		SHIFTS_HPUNCH = 14
	};

	enum GameInputs : uint16_t
	{
		UP = 1 << SHIFTS_UP,
		DOWN = 1 << SHIFTS_DOWN,
		LEFT = 1 << SHIFTS_LEFT,
		RIGHT = 1 << SHIFTS_RIGHT,
		DOWNLEFT = 1 << SHIFTS_DOWNLEFT,
		DOWNRIGHT = 1 << SHIFTS_DOWNRIGHT,
		UPLEFT = 1 << SHIFTS_UPLEFT,
		UPRIGHT = 1 << SHIFTS_UPRIGHT,
		LKICK = 1 << SHIFTS_LKICK,
		MKICK = 1 << SHIFTS_MKICK,
		HKICK = 1 << SHIFTS_HKICK,
		LPUNCH = 1 << SHIFTS_LPUNCH,
		MPUNCH = 1 << SHIFTS_MPUNCH,
		HPUNCH = 1 << SHIFTS_HPUNCH
	};

}