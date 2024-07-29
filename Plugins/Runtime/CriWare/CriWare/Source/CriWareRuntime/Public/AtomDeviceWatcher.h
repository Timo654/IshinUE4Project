#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomDeviceWatcher.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomDeviceWatcher : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeviceUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeviceUpdated OnDeviceUpdated;
    
    UAtomDeviceWatcher();

    UFUNCTION(BlueprintCallable)
    static void UpdateDeviceInfos();
    
    UFUNCTION(BlueprintCallable)
    static void SetDeviceByName(const FString& DeviceName);
    
    UFUNCTION(BlueprintCallable)
    static void SetDeviceByID(int32 DeviceID);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetDeviceNames();
    
    UFUNCTION(BlueprintCallable)
    FString GetDeviceName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDeviceChannelCount();
    
};

