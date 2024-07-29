#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FighterChangeCommandSet.h"
#include "FighterCommandInfo.h"
#include "FighterCommandInfo_ModeSync.h"
#include "FighterCommandInfo_RefData.h"
#include "MotionSetType.h"
#include "FighterCommandSetDataAsset.generated.h"

class UFighterCommandSetDataAsset;
class UMotionSetDataAsset;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UFighterCommandSetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMotionSetDataAsset* MotionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionSetType MotSetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFighterCommandInfo> CommandTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFighterCommandInfo_ModeSync> CommandSyncTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFighterCommandInfo_RefData> CommandRefOtherCmdSetDataTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFighterChangeCommandSet> ChangeCommandSetCondTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFighterCommandSetDataAsset*> AllRefOtherCommandSetTbl;
    
    UFighterCommandSetDataAsset();

};

