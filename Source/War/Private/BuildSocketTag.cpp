#include "BuildSocketTag.h"

FBuildSocketTag::FBuildSocketTag() {
    this->SocketTypeMask = 0;
    this->SocketTypeCategory = 0;
    this->MaxZOffset = 0.00f;
    this->ApplicationRule = EBuildSocketTagRule::AffectsBoth;
    this->bIgnoreHidesTag = false;
}

