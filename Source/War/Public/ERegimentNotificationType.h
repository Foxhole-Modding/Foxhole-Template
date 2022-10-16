#pragma once
#include "CoreMinimal.h"
#include "ERegimentNotificationType.generated.h"

UENUM()
enum class ERegimentNotificationType : int8 {
    MemberAdded,
    MemberRemoved,
    Disbanded,
    MemberRoleChanged,
    Rename,
};

