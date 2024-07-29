#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MsgCameraUtil.generated.h"

UCLASS(Blueprintable)
class UMsgCameraUtil : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UMsgCameraUtil();

    UFUNCTION(BlueprintCallable)
    static void SetFStopTest(const bool _isReset, const float _f);
    
    UFUNCTION(BlueprintCallable)
    static void SetFStop(bool _isReset, float _f);
    
    UFUNCTION(BlueprintCallable)
    static void SetExposureBiasTest(const float _ev);
    
    UFUNCTION(BlueprintCallable)
    static void SetExposureBias(bool _isReset, float _ev);
    
};

