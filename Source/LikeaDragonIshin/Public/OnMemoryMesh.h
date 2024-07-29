#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnMemoryMesh.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UOnMemoryMesh : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UOnMemoryMesh();

};

