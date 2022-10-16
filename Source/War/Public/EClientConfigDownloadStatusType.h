#pragma once
#include "CoreMinimal.h"
#include "EClientConfigDownloadStatusType.generated.h"

UENUM(BlueprintType)
enum class EClientConfigDownloadStatusType : uint8 {
    Success,
    HttpRequestFailed,
    HttpResponseCode,
    JsonDeserializationFailed,
    EmptyShardList,
};

