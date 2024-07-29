#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_CppTest.generated.h"

UCLASS(Blueprintable)
class UBTT_CppTest : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTT_CppTest();

};

