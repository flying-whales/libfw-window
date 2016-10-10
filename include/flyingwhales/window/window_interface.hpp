#pragma once

#include <flyingwhales/maths.hpp>
#include <flyingwhales/core.hpp>
#include <string>

namespace fw
{

	class WindowInterface : private Noncopyable
	{
	public:
		virtual ~WindowInterface() = default;
	};

}

#define FW_WINDOW_CONSTRUCTOR_SYMBOLS const std::string &, const fw::Size2 &