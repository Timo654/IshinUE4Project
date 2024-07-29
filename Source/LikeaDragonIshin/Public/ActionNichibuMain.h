#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionNichibuMain.generated.h"

class AMinigameNichibuMotionCamera;
class UDataTable;
class UMacanUserWidget_MngNichibu;
class UMacanUserWidget_MngNichibuHanyou;
class UMacanUserWidget_MngNichibuQte;
class UMacanUserWidget_MngNichibuResult;

UCLASS(Blueprintable)
class UActionNichibuMain : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pNichibuMotionCameraTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pNichibuEventCameraTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MngNichibu* m_pUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MngNichibuQte* m_pClimaxUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MngNichibuResult* m_pResultUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MngNichibuHanyou* m_pMgCommonUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMinigameNichibuMotionCamera*> m_motionCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMinigameNichibuMotionCamera*> m_eventCameras;
    
public:
    UActionNichibuMain();

};

