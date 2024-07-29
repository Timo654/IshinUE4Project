#pragma once
#include "CoreMinimal.h"
#include "ActionObjectInputDeviceBase.h"
#include "UIItemItemData.h"
#include "UItemTabCommonData.h"
#include "ActionItemBox.generated.h"

class UMacanUIDataShopMenuShop;

UCLASS(Blueprintable)
class UActionItemBox : public UActionObjectInputDeviceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShopMenuShop* m_ui;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIItemItemData> inArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIItemItemData> inList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUItemTabCommonData> inTab;
    
    UActionItemBox();

};

