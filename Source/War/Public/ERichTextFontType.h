#pragma once
#include "CoreMinimal.h"
#include "ERichTextFontType.generated.h"

UENUM(BlueprintType)
enum class ERichTextFontType : uint8 {
    Regular10Pt,
    Regular12Pt,
    Regular24Pt,
    Italic10Pt,
    Italic12Pt,
    Bold10Pt,
    Bold12Pt,
    Count,
};

