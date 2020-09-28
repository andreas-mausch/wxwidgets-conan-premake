#include <wx/wx.h>
#include <wx/xrc/xmlres.h>

#include "HelloWorldApp.h"
#include "HelloWorldFrame.h"

bool HelloWorldApp::OnInit()
{
    wxXmlResource::Get()->InitAllHandlers();
    if (!wxXmlResource::Get()->Load("frame.xrc"))
    {
        return false;
    }

    HelloWorldFrame *frame = new HelloWorldFrame(NULL);
    frame->Show(true);

    return true;
}
