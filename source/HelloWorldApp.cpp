#include <wx/wx.h>

#include "HelloWorldApp.h"
#include "HelloWorldFrame.h"

bool HelloWorldApp::OnInit()
{
    int width = wxGetDisplaySize().GetWidth() / 2;
    int height = width * 3 / 4;
    HelloWorldFrame *frame = new HelloWorldFrame("Hello World", wxPoint(-1, -1), wxSize(width, height));
    frame->Show(true);
    return true;
}
