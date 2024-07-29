#pragma once
#include "CoreMinimal.h"
#include "MacanUIDataWindowBase.h"
#include "MacanUIDataPauseMenu.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataPauseMenu : public UMacanUIDataWindowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisibleSkipMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisibleSkipResume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisibleSkipSkip;
    
    UMacanUIDataPauseMenu();

};

