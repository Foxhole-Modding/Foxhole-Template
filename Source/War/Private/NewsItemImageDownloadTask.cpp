#include "NewsItemImageDownloadTask.h"

class UTexture2DDynamic;

void UNewsItemImageDownloadTask::OnImageDownloadSuccess(UTexture2DDynamic* Texture) {
}

void UNewsItemImageDownloadTask::OnImageDownloadFailed(UTexture2DDynamic* Texture) {
}

UNewsItemImageDownloadTask::UNewsItemImageDownloadTask() {
    this->Owner = NULL;
}

