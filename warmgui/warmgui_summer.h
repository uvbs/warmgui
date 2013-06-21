#ifndef __warmgui_summer_h_include__
#define __warmgui_summer_h_include__

#ifndef WARMGUI_API
#   ifdef WARMGUI_EXPORTS
#       define WARMGUI_API __declspec(dllexport)
#   else
//#     define WARMGUI_API __declspec(dllimport)
#       define WARMGUI_API
#   endif //WARMGUI_EXPORTS
#endif //WARMGUI_API

#ifdef _WINDOWS
#	pragma warning (disable : 4251)
#   pragma warning (disable : 4100)
#endif //_WINDOWS


#include "utility.h"
#include "datatype.h"
#include "ChineseCodeLib.h"
#include "DataPtr.h"

#include <Poco/Util/PropertyFileConfiguration.h>

#include "warmgui_type_summer.h"
#include "WarmguiConfig.h"
#include "DxFactorys.h"
#include "WndApp.h"
#include "DxWinApp.h"
#include "Window.h"
#include "WindowManager.h"

#include "tree.hpp"

#include "IObject.h"
#include "Artist.h"
#include "World.h"

#include "Glyph_summer.h"
#include "Canvas_summer.h"
#include "Atelier_summer.h"








#endif //__warmgui_summer_h_include__