/*
 * This source file is part of RmlUi, the HTML/CSS Interface Middleware
 *
 * For the latest information, see http://github.com/mikke89/RmlUi
 *
 * Copyright (c) 2008-2010 CodePoint Ltd, Shift Technology Ltd
 * Copyright (c) 2019 The RmlUi Team, and contributors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef RMLUICONTROLSCLIPBOARD_H
#define RMLUICONTROLSCLIPBOARD_H

#include "../Core/WString.h"

namespace Rml {
namespace Controls {

/**
	The clipboard temporarily stores text that is cut or copied from a text widget.

	@author Peter Curry
 */

class Clipboard
{
public:
	/// Get the current contents of the clipboard.
	static Rml::Core::WString Get();

	/// Set the contents of the clipboard.
	static void Set(const Rml::Core::WString& content);

	#if defined RMLUI_PLATFORM_WIN32
	/// Set the window handle of the application. This shouldn't need to be called unless the host
	/// application opens multiple windows, or opens and closes windows, etc.
	static void SetHWND(void* hwnd);
	#endif
};

}
}

#endif