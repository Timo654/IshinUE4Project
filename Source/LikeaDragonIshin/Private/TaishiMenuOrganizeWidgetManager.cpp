#include "TaishiMenuOrganizeWidgetManager.h"
#include "MacanWidgetSplitCreator.h"

UTaishiMenuOrganizeWidgetManager::UTaishiMenuOrganizeWidgetManager() {
    this->split_creator = CreateDefaultSubobject<UMacanWidgetSplitCreator>(TEXT("SplitCreator"));
}

void UTaishiMenuOrganizeWidgetManager::OnWidgetCreatedEvent(int32 widget_index, const UUserWidget* Widget) {
}


