#ifndef __warmgui_configurantion_h_include__
#define __warmgui_configurantion_h_include__

#include <Poco/Util/PropertyFileConfiguration.h>
#include <Poco/Util/XMLConfiguration.h>

namespace WARMGUI {
class WARMGUI_API CWarmguiConfig : public Poco::Util::XMLConfiguration
{
public:
	CWarmguiConfig (void);
	~CWarmguiConfig (void);

	bool getRect(RECT& rect, const char* config_str);
	bool getRulerWidth(RULER_WIDTH& rw, const char* config_str);
	bool getWorldRect(LIMIT_2D& limit, const char* config_str);
    bool getValueIncrease(ValueIncrease& increase, const char* config_str);
	bool getSize(SIZE& size, const char* config_str);
	bool getToolbarPos(TOOLBAR_POSITION& pos, const char* config_str);
};


}//namespace WARMGUI

#endif //__warmgui_configurantion_h_include__