#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RandomNoiseTexture.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class MACANSHADERS_API URandomNoiseTexture : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
public:
    URandomNoiseTexture();

    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTexture();
    
    UFUNCTION(BlueprintCallable)
    void CreateTexture(int32 Width, int32 Height, bool is_normalize);
    
};

