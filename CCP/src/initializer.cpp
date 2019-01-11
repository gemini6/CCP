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
    ApplicationContext^ initializer_context = (gcnew ApplicationContext());
    initializer_context->MainForm = (gcnew CCP::gui());
    Application::Run(initializer_context);
}
