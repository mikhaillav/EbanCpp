// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "HashedString.hpp"

#undef BEFORE_EXTRA

struct ActorDefinitionIdentifier {

#define AFTER_EXTRA
// Add Member There
std::string ns;             // 0
std::string identifier;     // 32
std::string event;          // 64
std::string fullname;       // 96
HashedString canonicalHash; // 128

#undef AFTER_EXTRA

public:
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier &&);
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const &);
    MCAPI ActorDefinitionIdentifier(std::string const &);
    MCAPI ActorDefinitionIdentifier(char const *);
    MCAPI ActorDefinitionIdentifier(std::string, std::string, std::string);
    MCAPI ActorDefinitionIdentifier(enum ActorType);
    MCAPI ActorDefinitionIdentifier();
    MCAPI enum ActorType _getLegacyActorType() const;
    MCAPI void clear();
    MCAPI class HashedString const & getCanonicalHash() const;
    MCAPI std::string const & getCanonicalName() const;
    MCAPI std::string const & getFullName() const;
    MCAPI std::string const & getIdentifier() const;
    MCAPI std::string const & getInitEvent() const;
    MCAPI std::string const & getNamespace() const;
    MCAPI void initialize(std::string const &, std::string const &, std::string const &);
    MCAPI void initialize(std::string const &);
    MCAPI bool isEmpty() const;
    MCAPI bool isVanilla() const;
    MCAPI struct ActorDefinitionIdentifier & operator=(struct ActorDefinitionIdentifier const &);
    MCAPI bool operator==(struct ActorDefinitionIdentifier const &) const;
    MCAPI void setIdentifier(std::string const &);
    MCAPI void setInitEvent(std::string const &);
    MCAPI ~ActorDefinitionIdentifier();

protected:

private:
    MCAPI void _initialize();
    MCAPI static void _extractIdentifier(std::string const &, struct ActorDefinitionIdentifier &);

};