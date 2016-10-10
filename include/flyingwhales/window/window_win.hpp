#pragma once

#include <flyingwhales/window/window_interface.hpp>

namespace fw
{

	class WindowWin : public WindowInterface
	{
	public:
		WindowWin(const std::string &title, const Size2 &size);
	};

}