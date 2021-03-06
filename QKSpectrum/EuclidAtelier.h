#ifndef __euclid_atelier_h__
#define __euclid_atelier_h__


class CAnalystLayout;
class CEuclidAtelier : public WARMGUI::IAtelier
{
public:
    CEuclidAtelier(const char* name);
    ~CEuclidAtelier(void);

    friend class CEuclidLayout;

    virtual HRESULT      InitAtelier(HWND hwnd, WARMGUI::CWarmguiConfig* config);
	void                 ToggleToolbar();
    inline virtual bool  GetAllCanvas();

protected:
    ///canvases
    WARMGUI::CBkgCanvas* _canvas_imgbkg;

    CZitCanvas*      _canvas_recent_zit;
    CEuclidCanvas* _canvas_rt_prodictor;
    /*CEuclidCanvas*    _canvas_long_term;
    CZitCanvas*          _canvas_1m_zit;
    CZitCanvas*          _canvas_5m_zit;
    CZitCanvas*         _canvas_15m_zit;*/
    WARMGUI::CToolbar*         _toolbar;
private:
    //set class name, by IObject
    virtual void setClass() { SetMyClass("CEuclidAtelier"); }
};

#endif //__euclid_atelier_h__