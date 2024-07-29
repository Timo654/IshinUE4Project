#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Devil2HumanSubsystem.generated.h"

class UHumanPreload;
class UOnMemoryMesh;
class UTexture;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDevil2HumanSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHumanPreload*> HumanPreloadPointersArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UOnMemoryMesh*> OnMemoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UOnMemoryMesh*> PreloadMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture*> PreloadTexMap;
    
public:
    UDevil2HumanSubsystem();

};

