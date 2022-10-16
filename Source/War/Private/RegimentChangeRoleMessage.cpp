#include "RegimentChangeRoleMessage.h"

FRegimentChangeRoleMessage::FRegimentChangeRoleMessage() {
    this->RegimentID = 0;
    this->DesiredTargetRole = ERegimentRole::Commander;
}

