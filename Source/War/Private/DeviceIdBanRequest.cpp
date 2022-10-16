#include "DeviceIdBanRequest.h"

FDeviceIdBanRequest::FDeviceIdBanRequest() {
    this->BanDurationSec = 0;
    this->BanReason = EBanReason::CommsMisuse;
}

