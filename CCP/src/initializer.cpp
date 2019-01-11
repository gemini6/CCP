// CCP/src/initializer.cpp

#using <System.dll>
#using <System.Windows.Forms.dll>

#include "initializer.h"
#include "gui.h"

using namespace System;
using namespace System::Windows::Forms;

Initializer::Initializer(void) {
    init();
}

Initializer::~Initializer() {

}

void Initializer::init(void) {
    ccp_context = (gcnew ApplicationContext());
    ccp_context->MainForm = (gcnew CCP::gui());
    Application::Run(ccp_context);
}
