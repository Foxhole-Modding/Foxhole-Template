#include "RegimentNotificationMessage.h"

FRegimentNotificationMessage::FRegimentNotificationMessage() {
    this->RegimentID = 0;
    this->Type = ERegimentNotificationType::MemberAdded;
    this->NewRole = ERegimentRole::Commander;
}

