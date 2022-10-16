#include "CursorWidget.h"

FSlateBrush UCursorWidget::GetCursorBrush() const {
    return FSlateBrush{};
}

UCursorWidget::UCursorWidget() : UUserWidget(FObjectInitializer::Get()) {
}

