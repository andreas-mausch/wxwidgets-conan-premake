#include <wx/wx.h>

#include "HelloWorldApp.h"
#include "HelloWorldFrame.h"

bool HelloWorldApp::OnInit()
{
    HelloWorldFrame *frame = new HelloWorldFrame("Hello World", wxPoint(50, 50), wxSize(450, 340));
    frame->Show(true);
    return true;
}
