// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ListDCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LISTDCOMMAND
public:
    class ListDCommand& operator=(class ListDCommand const &) = delete;
    ListDCommand(class ListDCommand const &) = delete;
    ListDCommand() = delete;
#endif


public:
    /*0*/ virtual ~ListDCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LISTDCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);



};