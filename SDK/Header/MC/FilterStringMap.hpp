// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct FilterStringMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERSTRINGMAP
public:
    struct FilterStringMap& operator=(struct FilterStringMap const &) = delete;
    FilterStringMap() = delete;
#endif

public:
    MCAPI FilterStringMap(struct FilterStringMap const &);
    MCAPI FilterStringMap(class std::initializer_list<struct std::pair<std::string const, struct FilterInputDefinition>>);
    MCAPI struct FilterStringMap & operator=(struct FilterStringMap &&);
    MCAPI ~FilterStringMap();

protected:

private:

};